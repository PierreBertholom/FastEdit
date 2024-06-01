#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>
#include <QPlainTextEdit>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
class QCheckBox;
class QDialogButtonBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QPushButton;
QT_END_NAMESPACE

//! [0]
class FindDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindDialog(QWidget *parent = nullptr);

    void setEditor(QPlainTextEdit *editor){
        myEditor = editor;
    }
    QPlainTextEdit *getEditor(){
        return myEditor;
    }

private slots:
    void find();
    void regexMode();
private:
    bool lastMatch = false;
    QPlainTextEdit *myEditor;

    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *regexCheckBox;
    QCheckBox *caseCheckBox;
    QCheckBox *fromStartCheckBox;
    QCheckBox *wholeWordsCheckBox;
    QCheckBox *searchSelectionCheckBox;
    QCheckBox *backwardCheckBox;
    QDialogButtonBox *buttonBox;
    QPushButton *findButton;
    QPushButton *moreButton;
    QWidget *extension;

    QTextCursor cursor;
};
//! [0]

#endif
