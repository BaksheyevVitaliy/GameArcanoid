#include "Arcanoid.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Arcanoid2 w;
    w.show();
    return a.exec();
}
