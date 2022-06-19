#ifndef PUTBOX_H
#define PUTBOX_H

#include <FiguraGeometrica.h>


class PutBox : public FiguraGeometrica
{
    int x0, int x1, int y0, int y1, int z0, int z1;
    public:
        PutBox(int x0, int x1, int y0, int y1, int z0, int z1);
        virtual ~PutBox();

    protected:

    private:
};

#endif // PUTBOX_H
