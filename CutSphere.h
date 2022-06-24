#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include <FiguraGeometrica.h>
#include "Sculptor.h"


class CutSphere : public FiguraGeometrica
{
    private:
        int xcenter, ycenter,  zcenter, r;
    public:
        CutSphere(int xcenter, int ycenter, int zcenter, int r);
        virtual ~CutSphere();
        void draw(Sculptor &t);

};

#endif // CUTSPHERE_H
