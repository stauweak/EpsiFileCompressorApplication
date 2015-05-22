#include "zipper.h"
#include "QDataStream"
#include "QFile"
#include "zippedbuffer.h"
#include "zippedbufferpool.h"
#include "filepool.h"

using namespace std;


Zipper::Zipper(QString directoryPath)
{
    ZippedBufferPool *pool = new ZippedBufferPool();
    FilePool *filePoolManager = new FilePool();
    std::list<QString> listeFiles = filePoolManager->GetListeFichiers(directoryPath);
    for(std::list<QString>::iterator it = listeFiles.begin(); it != listeFiles.end(); it++)
    {
        QString name;
        name.append(*it);
        QFile file(name);
        file.open(QIODevice::ReadOnly);
        QDataStream out(&file);

        QByteArray buffer;
        int count = 512;
        char *temp = new char[count];
        out.readRawData(temp, count);
        buffer.append(temp, count);
        delete [] temp;
        buffer = qCompress(buffer);
        ZippedBuffer *zipBuffer = new ZippedBuffer();
        zipBuffer->name = name;
        zipBuffer->compressedFile = buffer;
        pool->put(*zipBuffer);
    }
}

Zipper::~Zipper()
{

}

