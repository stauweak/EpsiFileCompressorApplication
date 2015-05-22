#ifndef ZIPPEDBUFFER_H
#define ZIPPEDBUFFER_H

#include "qdatastream.h"

class ZippedBuffer
{
public:
    QString name;
    QByteArray compressedFile;
    void write(QDataStream &stream);
    void read(QDataStream &stream);
    ZippedBuffer();
    ~ZippedBuffer();
};

#endif // ZIPPEDBUFFER_H
