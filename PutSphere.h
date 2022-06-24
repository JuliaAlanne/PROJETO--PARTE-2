#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include <FiguraGeometrica.h>
#include "Sculptor.h"


class PutSphere : public FiguraGeometrica
{
    private:
        int xcenter,  ycenter,  zcenter,  raio;
    public:
        PutSphere(int xcenter, int ycenter, int zcenter, int raio,float r, float g,float b, float alpha);
        virtual ~PutSphere();
        void draw(Sculptor &t);

};

#endif // PUTSPHERE_H
