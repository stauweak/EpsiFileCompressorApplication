#include "zippedbufferpool.h"
#include "zippedbuffer.h"
#include "qpair.h"

ZippedBufferPool::ZippedBufferPool()
{
}

void ZippedBufferPool::put(ZippedBuffer &zb)
{
    listZippedBuffer.insert(listZippedBuffer.begin(),zb);
}

QPair<bool,ZippedBuffer> ZippedBufferPool::tryGet()
{
    bool value = false;
    ZippedBuffer zippedBuffer;
    QPair<bool,ZippedBuffer> pair = qMakePair(value,zippedBuffer);

    return pair;
}
void ZippedBufferPool::done()
{
    tryGet();
}

ZippedBufferPool::~ZippedBufferPool()
{

}

