#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include <FiguraGeometrica.h>


class PutEllipsoid : public FiguraGeometrica
{
    int xcenter, int ycenter, int zcenter, int rx, int ry, int rz;
    public:
        PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
        virtual ~PutEllipsoid();

    protected:

    private:
};

#endif // PUTELLIPSOID_H
