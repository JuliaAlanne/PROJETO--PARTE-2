#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <cmath>
#include "Sculptor.h"
class FiguraGeometrica
{
    protected:
        float r,g,b,alpha;
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();

        virtual void draw(Sculptor &t)=0;

};

#endif // FIGURAGEOMETRICA_H
