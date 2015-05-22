#ifndef FILEPOOL_H
#define FILEPOOL_H
#include "list"
#include "qdiriterator.h"

class FilePool
{
public:
    FilePool();
    std::list<QString> GetListeFichiers(QString directory);
    ~FilePool();
private:
    void GetFiles(QString directory);
    std::list<QString> listeFichiers;
};

#endif // FILEPOOL_H
