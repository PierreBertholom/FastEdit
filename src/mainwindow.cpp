#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

#include <QFrame>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QList>
#include <QFontDatabase>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialization of tabs, centered, movable and closable
    tabsWidget->setMovable(true);
    tabsWidget->setTabsClosable(true);

    setCentralWidget(window);

    treeView->setMaximumWidth(0);
    treeView->setMidLineWidth(0);

    window->addWidget(treeView);
    window->addWidget(tabsWidget);

    // Close file with cross
    connect(tabsWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));
    // Open file from folder
    connect(treeView, SIGNAL(clicked(QModelIndex)), this, SLOT(openTreeViewFile(QModelIndex)));

    // Import font
    QFontDatabase::addApplicationFont(":/fonts/SourceCodePro.ttf");

}

// Close MainWindow
MainWindow::~MainWindow()
{
    delete ui;
}

// Create a new tab with empty file
void MainWindow::on_actionNew_File_triggered()
{
    MainWindow::createTab();
}

// Closing tab with Cmd+W or cross
void MainWindow::on_actionClose_FIle_triggered()
{
    tabsWidget->removeTab(tabsWidget->currentIndex());
}

void MainWindow::closeTab(int index)
{
    tabsWidget->removeTab(index);
}

// Create a new tab
void MainWindow::createTab()
{
    // Base with PlainTextEdit in a BoxLayout in a Frame
    QFrame *tabFrame = new QFrame(this);
    QVBoxLayout *tabLayout = new QVBoxLayout(tabFrame);

    QPlainTextEdit *fileEdit = new QPlainTextEdit();
    fileEdit->setObjectName("textEdit");

    // Setting font for the plain text edit
    QFont font = fileEdit->document()->defaultFont();
    font.setFamily("Source Code Pro");
    fileEdit->setFont(font);
    // Set tabulation as 4 spaces
    fileEdit->setTabStopDistance(QFontMetrics(fileEdit->font()).horizontalAdvance(' ')*4);

    // Label showing lines
    QLabel *status = new QLabel(this);
    status->setText("Line 1, Column 1");
    status->setObjectName("status");

    // Empty file + Status bar
    tabLayout->addWidget(fileEdit);
    tabLayout->addWidget(status);

    int tab = tabsWidget->addTab(tabFrame, "Untitled");
    tabsWidget->setCurrentIndex(tab);

    // Set the tooltip (placeholder for file path when hovering with mouse)
    tabsWidget->setTabToolTip(tabsWidget->currentIndex(), "Untitled");

    // Dot when modifying a file
    connect(fileEdit, &QPlainTextEdit::textChanged, this, &MainWindow::textEditChanged);
    // Signal to modify label counting lines
    connect(fileEdit, &QPlainTextEdit::cursorPositionChanged, this, &MainWindow::updateStatus);
}

// Open a file with text or property ReadOnly
void MainWindow::openTabFile(QString filePath)
{
    // Get filename from path
    QFile file(filePath);
    QFileInfo fileName(filePath);

    // Check if it can be opened
    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot open file : " + file.errorString());
        return;
    }

    // Go to tab file, add content to plaintext, set tabname to filename
    tabsWidget->setTabToolTip(tabsWidget->currentIndex(), filePath);

    QTextStream in(&file);
    QString text = in.readAll();

    MainWindow::currentTextEdit()->setPlainText(text);

    file.close();
    tabsWidget->setTabText(tabsWidget->currentIndex(),fileName.fileName());
}

// Return the current edited text
QPlainTextEdit* MainWindow::currentTextEdit()
{
    QList<QPlainTextEdit*> fileEditList = tabsWidget->findChildren<QPlainTextEdit*>("textEdit");
    for (int i = 0; i < fileEditList.count(); i++) {
        if(tabsWidget->indexOf(fileEditList[i]->parentWidget()) == tabsWidget->currentIndex()){
            return fileEditList[i];
        }
    }
    return nullptr;
}

// Return actual status bar
QLabel* MainWindow::currentStatus()
{
    QList<QLabel*> statusList = tabsWidget->findChildren<QLabel*>("status");
    for (int i = 0; i < statusList.count(); i++) {
        if(tabsWidget->indexOf(statusList[i]->parentWidget()) == tabsWidget->currentIndex()){
            return statusList[i];
        }
    }
    return nullptr;
}

// Open file menu
void MainWindow::on_actionOpen_File_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Open the file");

    MainWindow::createTab();
    MainWindow::openTabFile(filePath);
}

// Add • to unsaved and modified files
void MainWindow::textEditChanged()
{
    QString tabName = tabsWidget->tabText(tabsWidget->currentIndex());
    if (!tabName.startsWith("•")) {
        tabsWidget->setTabText(tabsWidget->currentIndex(), "• " + tabName);
    }
}

void MainWindow::on_actionSave_File_triggered()
{
    QString fileName = tabsWidget->tabToolTip(tabsWidget->currentIndex());
    if(fileName == "Untitled"){
        MainWindow::on_actionSave_As_triggered();
        return;
    }

    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save file: "+ file.errorString());
        return;
    }

    QTextStream out(&file);
    QString text = MainWindow::currentTextEdit()->toPlainText();
    out << text;

    file.close();
    QString newTabText = tabsWidget->tabText(tabsWidget->currentIndex()).remove(0, 1);
    tabsWidget->setTabText(tabsWidget->currentIndex(), newTabText);
}


void MainWindow::on_actionSave_As_triggered()
{
    if (tabsWidget->count() == 0) {
        QMessageBox::warning(this, "Warning", "Cannot save any file!");
        return;
    }

    QString filePath = QFileDialog::getSaveFileName(this, "Save as..");

    if (filePath.isEmpty()) {
        // User cancelled the save dialog, do nothing
        return;
    }

    QFile file(filePath);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    QPlainTextEdit* currentEdit = MainWindow::currentTextEdit();
    if (currentEdit == nullptr) {
        QMessageBox::warning(this, "Warning", "No active text editor found!");
        return;
    }

    QTextStream out(&file);
    QString text = currentEdit->toPlainText();

    out << text;

    file.close();

    // Update the tab text to the new file name
    QFileInfo fileInfo(filePath);
    tabsWidget->setTabText(tabsWidget->currentIndex(), fileInfo.fileName());

    MainWindow::openTabFile(filePath);
}

void MainWindow::updateStatus()
{
    QString line = QString::number(MainWindow::currentTextEdit()->textCursor().blockNumber()+1);
    QString column = QString::number(MainWindow::currentTextEdit()->textCursor().columnNumber()+1);

    QString newStatus = "Line "+ line + ", Column "+ column;

    MainWindow::currentStatus()->setText(newStatus);
}

void MainWindow::on_actionOpen_Folder_triggered()
{
    // Dialog open folder + splitter
    QUrl dirPath = QFileDialog::getExistingDirectory(this, "Open Folder", "/", QFileDialog::ShowDirsOnly);
    dirModel->setRootPath(dirPath.toString());
    treeView->setModel(dirModel);
    treeView->setRootIndex(dirModel->index(dirPath.toString()));
    // Hide useless columns such as size of file and date
    treeView->hideColumn(1);
    treeView->hideColumn(2);
    treeView->hideColumn(3);

    // Set minimum and maximum dimension
    treeView->setMinimumWidth(width() * 20 / 100);
    treeView->setMaximumWidth(width() * 30 / 100);

}

void MainWindow::openTreeViewFile(QModelIndex index)
{
    MainWindow::createTab();
    QString filePath = dirModel->fileInfo(index).absoluteFilePath();

    MainWindow::openTabFile(filePath);
}
