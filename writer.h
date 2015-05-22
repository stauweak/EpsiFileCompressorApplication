#ifndef WRITER_H
#define WRITER_H
#include "qstring.h"


class Writer
{
public:
    void writeCompressedFile();
    void writeUnCompressedFiles();
    Writer(QString directory);
    ~Writer();
private:
    QString parentDirectory;
    QString rootDirectory;
    QString rootDirectoryName;
};

#endif // WRITER_H
