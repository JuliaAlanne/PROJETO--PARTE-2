#ifndef CUTBOX_H
#define CUTBOX_H

#include <FiguraGeometrica.h>
#include "Sculptor.h"
#include"cutVoxel.h"

class CutBox : public FiguraGeometrica
{
    private:
        int x0, x1, y0, y1,  z0, z1;
    public:
        CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
        virtual ~CutBox();
        void draw(Sculptor &t);

};

#endif // CUTBOX_H
