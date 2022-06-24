#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include <FiguraGeometrica.h>

#include "Sculptor.h"

class PutVoxel : public FiguraGeometrica
{
    private:
    int x,  y,  z;
    public:
        PutVoxel(int x, int y, int z,float r, float g,float b, float alpha);
        virtual ~PutVoxel();
        void draw(Sculptor &t);


};

#endif // PUTVOXEL_H
