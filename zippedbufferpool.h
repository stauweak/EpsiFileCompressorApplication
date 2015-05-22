#ifndef ZIPPEDBUFFERPOOL_H
#define ZIPPEDBUFFERPOOL_H

#include "zippedbuffer.h"
#include "qpair.h"

class ZippedBufferPool
{
public:
    std::list<ZippedBuffer> listZippedBuffer;
    void put(ZippedBuffer &zb);
    QPair<bool,ZippedBuffer> tryGet();
    void done();
    ZippedBufferPool();
    ~ZippedBufferPool();
};

#endif // ZIPPEDBUFFERPOOL_H
