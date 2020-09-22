#include <QCoreApplication>
#include "compressor.h"
#include "cab_compressor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Compressor *p = new Compressor(new CAB_Compressor());
    p->compress();
    return a.exec();
}
