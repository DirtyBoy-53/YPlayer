#ifndef OPENMEDIADLG_H
#define OPENMEDIADLG_H

#include "qtheaders.h"

class FileTab : public QWidget
{
    Q_OBJECT
public:
    explicit FileTab(QWidget *parent = nullptr);

public:
    QLineEdit* edit;
    QPushButton* btnBrowse;
};

class NetworkTab : public QWidget
{
    Q_OBJECT
public:
    explicit NetworkTab(QWidget *parent = nullptr);

public:
    QLineEdit* edit;
};

class CaptureTab : public QWidget
{
    Q_OBJECT
public:
    explicit CaptureTab(QWidget *parent = nullptr);

public:
    QComboBox* cmb;
};

#include "media.h"
class OpenMediaDlg : public QDialog
{
    Q_OBJECT
public:
    explicit OpenMediaDlg(QWidget *parent = nullptr);

signals:

public slots:
    virtual void accept();

protected:
    void initUI();
    void initConnect();

public:
    QTabWidget* tab;
    Media media;
};
#endif // OPENMEDIADLG_H
