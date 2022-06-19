#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include <FiguraGeometrica.h>


class CutSphere : public FiguraGeometrica
{
    int xcenter, int ycenter, int zcenter, int r
    public:
        CutSphere(int xcenter, int ycenter, int zcenter, int r);
        virtual ~CutSphere();

    protected:

    private:
};

#endif // CUTSPHERE_H
