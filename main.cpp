#include "epsifilecompressor.h"
#include <QApplication>
#include "filepool.h"
#include "list"
#include "iostream"

int main(int argc, char *argv[])
{
    EpsiFileCompressor *epsiFileCompressor = new EpsiFileCompressor();
    epsiFileCompressor->compress("C:\\Users\\benjamin\\Documents\\Cours I4\\IA\\TP4","TP4.pl");
    QApplication a(argc, argv);
    return a.exec();
}
