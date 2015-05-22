#ifndef WRITER_H
#define WRITER_H
#include "qstring.h"
#include "zippedbufferpool.h"


class Writer
{
public:
    void writeCompressedFile();
    void writeUnCompressedFiles();
    Writer(QString directory,ZippedBufferPool pool);
    ~Writer();
private:
    ZippedBufferPool poolZippedBuffer;
    QString parentDirectory;
    QString rootDirectory;
    QString rootDirectoryName;
};

#endif // WRITER_H
