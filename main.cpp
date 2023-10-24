#include <QApplication>
#include <QtWidgets>
#include <imageviewer.h>
int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    MaFenetre windowP;
    windowP.show();
    windowP.setWindowTitle("Image viewer");
    return app.exec();
}
