#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include <FiguraGeometrica.h>


class CutEllipsoid : public FiguraGeometrica
{
    int xcenter, int ycenter, int zcenter, int rx, int ry, int rz;
    public:
        CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
        virtual ~CutEllipsoid();

    protected:

    private:
};

#endif // CUTELLIPSOID_H
