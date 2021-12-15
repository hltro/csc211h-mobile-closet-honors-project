#ifndef PICTURESHOW_H
#define PICTURESHOW_H

#include <QWidget>
#include <QScrollBar>
#include <QListWidgetItem>
#include <QDir>
#include <QDebug>

namespace Ui {
class PictureShow;
}

/**
 * To show picture
 */
class PictureShow : public QWidget
{
    Q_OBJECT

public:
    explicit PictureShow(const QString &path);
    ~PictureShow();

    void initState();

    //Path of picture
    void setDirFileList(QStringList &list);
    //Read text file (picture description)
    QString readTxtInfo(const QString &path);
    //Display picture
    void displayPic();

public slots:
    //Click on thumbnail to show picture
    void itemClicked(QListWidgetItem *item);

private:
    Ui::PictureShow *ui;

    //File path
    QString fileDir;
    //Height and width of picture
    int iconWidth;
    int iconHeight;
};

#endif // PICTURESHOW_H
