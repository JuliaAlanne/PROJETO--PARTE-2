#include "PutVoxel.h"
#include <iostream>

PutVoxel::PutVoxel(int x, int y, int z,float r, float g,float b, float alpha)
{
    this -> x = x;
    this -> y = y;
    this -> z = z;
    this -> r = r;
    this -> g = g;
    this -> b = b;
    this -> alpha = alpha;

}
void PutVoxel:: draw(Sculptor &t)
{
    t.setColor(r,g,b,alpha);
    t.putVoxel(x,y,z);

}
