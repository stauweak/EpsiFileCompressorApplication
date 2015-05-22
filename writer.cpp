#include "writer.h"
#include "QString"
#include "QStringList"
#include "QFile"
#include "zippedbuffer.h"


Writer::Writer(QString directory)
{
    rootDirectory = directory;
    QStringList resultat = directory.split("\\");
    for(int i =0;i<resultat.size()-1;i++)
    {
        parentDirectory+= resultat[i];
    }
    rootDirectoryName =resultat[resultat.size()-1];
}

void Writer::writeCompressedFile()
{
    QFile file(parentDirectory+"\\"+rootDirectoryName+".ecf");
    QDataStream data;
    for(std::list<ZippedBuffer>::iterator it = listeFiles.begin(); it != listeFiles.end(); it++)
    {
        data.readRawData();
    }
    file.write(data);
}

void Writer::writeUnCompressedFiles(){

}

Writer::~Writer()
{

}

