#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include <FiguraGeometrica.h>


class CutVoxel : public FiguraGeometrica
{
    int x, int y, int z;
    public:
        CutVoxel(int x, int y, int z);
        virtual ~CutVoxel();

    protected:

    private:
};

#endif // CUTVOXEL_H
