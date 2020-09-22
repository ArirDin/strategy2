#ifndef CAB_COMPRESSOR_H
#define CAB_COMPRESSOR_H

#include "compression.h"

class CAB_Compressor : public Compression
{
public:
    CAB_Compressor();
    void compress();
};

#endif // CAB_COMPRESSOR_H
