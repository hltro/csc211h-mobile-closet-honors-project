#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    initState();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::initState()
{
    this->setWindowTitle("Welcome");

    //Physical path of the pictures
    PictureShow *picWidget = new PictureShow("/Users/jingjingye/Qt/Projects/build-PicShow-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Picture/Accessories/");
    QHBoxLayout *layout = new QHBoxLayout(ui->tab1);
    layout->addWidget(picWidget);
    picWidget->displayPic();

    //Relative path of the pictures
    picWidget = new PictureShow("../../../Picture/Dresses & Skirts/");
    layout = new QHBoxLayout(ui->tab2);
    layout->addWidget(picWidget);
    picWidget->displayPic();

    picWidget = new PictureShow("../../../Picture/Jackets/");
    layout = new QHBoxLayout(ui->tab3);
    layout->addWidget(picWidget);
    picWidget->displayPic();

    picWidget = new PictureShow("../../../Picture/Pants/");
    layout = new QHBoxLayout(ui->tab4);
    layout->addWidget(picWidget);
    picWidget->displayPic();

    picWidget = new PictureShow("../../../Picture/Tops/");
    layout = new QHBoxLayout(ui->tab5);
    layout->addWidget(picWidget);
    picWidget->displayPic();

    //Find the directory of the picture files
    //QDir dir;
    //qDebug() << "path" << dir.absolutePath();
}


