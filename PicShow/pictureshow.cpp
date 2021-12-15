#include "pictureshow.h"
#include "ui_pictureshow.h"

PictureShow::PictureShow(const QString &path) :
    ui(new Ui::PictureShow),
    fileDir(path)
{
    ui->setupUi(this);

    initState();
}

PictureShow::~PictureShow()
{
    delete ui;
}

void PictureShow::initState()
{
    iconWidth = 130;
    iconHeight = 120;
    ui->listWidget->verticalScrollBar()->setStyleSheet("QScrollBar{width:0px;}");
    ui->listWidget->horizontalScrollBar()->setStyleSheet("QScrollBar{width:5px;}");

    ui->listWidget->setIconSize(QSize(iconWidth, iconHeight));
    ui->listWidget->setResizeMode(QListView::Adjust);
    //Set the QListWidget display mode to be IconMode
    ui->listWidget->setViewMode(QListView::IconMode);
    //Set the item in QListWidget to be static/immobile
    ui->listWidget->setMovement(QListView::Static);
    //Set the space between QListWidget items to be 20
    ui->listWidget->setSpacing(20);

    connect(ui->listWidget,&QListWidget::itemClicked,this,&PictureShow::itemClicked);
}

void PictureShow::setDirFileList(QStringList &list)
{
    QStringList filter;
    filter << "*.jpg" << "*.png";

    QDir dir(fileDir);
    list = dir.entryList(filter, QDir::Files | QDir::Readable, QDir::Name);
}

QString PictureShow::readTxtInfo(const QString &path)
{
    QString info;

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Failure to open description file";
        return info;
    }

    while (!file.atEnd())
    {
        QByteArray line = file.readLine();
        info += QString(" %1").arg(QString(line));
    }

    return info;
}

void PictureShow::displayPic()
{
    QStringList fileList;
    setDirFileList(fileList);

    for(int i=0; i<fileList.size(); ++i)
    {
        //Get file name and file path
        QString fileName = fileList.at(i);
        QString path = fileDir + fileName;

        //Generate picture
        QPixmap pixmap(path);
        QIcon icon = QIcon(pixmap.scaled(QSize(iconWidth, iconHeight)));

        //Set item information
        QString txtPath = path.left(path.size()-4) + ".txt";
        QString note = readTxtInfo(txtPath);
        QListWidgetItem *item = new QListWidgetItem(icon,fileName);
        item->setSizeHint(QSize(iconWidth, iconHeight+20));
        item->setData(Qt::UserRole,path);
        item->setData(Qt::UserRole+1,note);
        ui->listWidget->insertItem(i, item);
    }
}

void PictureShow::itemClicked(QListWidgetItem *item)
{
    QString path = item->data(Qt::UserRole).toString();
    ui->labPic->setPixmap(QPixmap(path).scaled(ui->labPic->size()));

    QString note = item->data(Qt::UserRole+1).toString();
    ui->labDesc->setText(note);
}
