#ifndef PUTBOX_H
#define PUTBOX_H

#include <FiguraGeometrica.h>
#include "Sculptor.h"


class PutBox : public FiguraGeometrica
{
    private:
    int x0, x1,  y0, y1,  z0,  z1;

    public:
        PutBox(int x0, int x1, int y0, int y1, int z0, int z1,float r, float g,float b, float alpha);
        virtual ~PutBox();
        void draw(Sculptor &t);

};

#endif // PUTBOX_H
