#include "zipper.h"
#include "QDataStream"
#include "QFile"
#include "zippedbuffer.h"
#include "zippedbufferpool.h"
#include "filepool.h"

using namespace std;


Zipper::Zipper()
{
}

ZippedBuffer Zipper::GetZippedBuffer(QString fileName)
{
    QFile file(fileName);
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
    zipBuffer->name = fileName;
    zipBuffer->compressedFile = buffer;
    return *zipBuffer;
}

Zipper::~Zipper()
{

}

