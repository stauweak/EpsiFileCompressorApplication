#include "writer.h"
#include "QString"
#include "QStringList"
#include "QFile"
#include "zippedbuffer.h"


Writer::Writer(QString directory,ZippedBufferPool pool)
{
    poolZippedBuffer = pool;
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
    QDataStream data(&file);
    std::list<ZippedBuffer> listeZippedBuffer = poolZippedBuffer.listZippedBuffer;
    for(std::list<ZippedBuffer>::iterator it = listeZippedBuffer.begin(); it != listeZippedBuffer.end(); it++)
    {
        ZippedBuffer zipBuffer = ((ZippedBuffer)*it);
        data << zipBuffer.name;
        data << zipBuffer.compressedFile;
    }
}

void Writer::writeUnCompressedFiles(){

}

Writer::~Writer()
{

}

