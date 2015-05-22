#include "filepool.h"
#include "qdiriterator.h"
#include "qdebug.h"
#include "list"

FilePool::FilePool()
{
}

void FilePool::GetFiles(QString directory)
{
    QDirIterator it(directory, QDirIterator::Subdirectories);
    while (it.hasNext())
    {
        listeFichiers.insert(listeFichiers.begin(),it.filePath());
        qDebug() << it.next();
    }
}

std::list<QString> FilePool::GetListeFichiers(QString directory)
{
    GetFiles(directory);
    return listeFichiers;
}

FilePool::~FilePool()
{

}

