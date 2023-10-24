#ifndef REAPL2_H
#define REAPL2_H

#include <QtWidgets>

class MaFenetre:public QWidget
{
    Q_OBJECT
public:
    MaFenetre();
public slots:
    void ouverture();
private:
    QPushButton *m_botton1;
    QPushButton *m_botton2;
    QVBoxLayout *layout;
    QHBoxLayout *lay;
    QLabel *image;
    QDialog *window_2;
   //QString lien;
};

#endif // REAPL2_H
