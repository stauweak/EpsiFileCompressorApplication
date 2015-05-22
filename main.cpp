#include "epsifilecompressor.h"
#include <QApplication>
#include "filepool.h"
#include "list"
#include "iostream"

int main(int argc, char *argv[])
{
    FilePool *filePoolManager = new FilePool();
    std::list<QString> listeFiles = filePoolManager->GetListeFichiers("C:\\Users\\benjamin\\Documents\\Cours I4\\Multithreading C++\\MineStormmax");
    for(std::list<QString>::iterator it = listeFiles.begin(); it != listeFiles.end(); it++)
    {
        std::string c= it->toStdString();
        std::cout<<c<<std::endl;
    }
    QApplication a(argc, argv);
    EpsiFileCompressor w;
    w.show();

    return a.exec();
}
