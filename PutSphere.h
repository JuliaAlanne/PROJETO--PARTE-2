#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include <FiguraGeometrica.h>


class PutSphere : public FiguraGeometrica
{
    int xcenter, int ycenter, int zcenter, int r;
    public:
        PutSphere(int xcenter, int ycenter, int zcenter, int r);
        virtual ~PutSphere();

    protected:

    private:
};

#endif // PUTSPHERE_H
