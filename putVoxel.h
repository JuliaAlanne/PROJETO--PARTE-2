#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include <FiguraGeometrica.h>


class PutVoxel : public FiguraGeometrica
{
    int x, int y, int z;
    public:
        PutVoxel(int x, int y, int z);
        virtual ~PutVoxel();

    protected:

    private:
};

#endif // PUTVOXEL_H
