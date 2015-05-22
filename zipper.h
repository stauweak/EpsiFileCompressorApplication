#ifndef ZIPPER_H
#define ZIPPER_H

#include "QThread"
#include "zippedbuffer.h"

class Zipper : public QThread
{
public:
    Zipper(QString directoryPath);
    ~Zipper();
};

#endif // ZIPPER_H
