#include "PutVoxel.h"

PutVoxel::PutVoxel(int x, int y, int z)
{
    this ->v[x][y][z].isOn=true;
    this ->v[x][y][z].r= this->r;
    this ->v[x][y][z].g= this->g;
    this ->v[x][y][z].b= this->b;
    this ->v[x][y][z].alpha= this->alpha;

}

PutVoxel::~PutVoxel()
{
    //dtor
}
