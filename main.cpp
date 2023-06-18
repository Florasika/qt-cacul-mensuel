#include <QApplication>
#include "mensual.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Mensual *winMens = new Mensual;
    winMens->show();
    return app.exec();
}
