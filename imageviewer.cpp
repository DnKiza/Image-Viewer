#include <imageviewer>.h>

MaFenetre::MaFenetre():QWidget()
{
    setWindowTitle("#Lecteur Image 3.0#");
    m_botton1=new QPushButton("Open the image",this);
    m_botton2=new QPushButton("Choose an image",this);

    window_2=new QDialog(this);

    lay=new QHBoxLayout;
    image=new QLabel(window_2);
    image->setMaximumSize(width(),height());

    layout=new QVBoxLayout;

    lay->addWidget(m_botton1);
    lay->addWidget(m_botton2);

    setLayout(lay);

    QObject::connect(m_botton2,SIGNAL(clicked()),this,SLOT(ouverture()));
    QObject::connect(m_botton1,SIGNAL(clicked()),window_2,SLOT(exec()));

}

void MaFenetre::ouverture()
{

    QString link=QFileDialog::getOpenFileName(this,"Choose an image");

     QImage im(link);

     image->setPixmap(QPixmap::fromImage(im));
     layout->addWidget(image);
     window_2->setLayout(layout);

}
