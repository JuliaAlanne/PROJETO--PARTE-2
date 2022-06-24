#include "CutBox.h"
#include <iostream>
CutBox::CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1)
{
    x0=_x0;
    x1=_x1;
    y0=_y0;
    y1=_y1;
    z0=_z0;
    z1=_z1;

}
void CutBox::draw(Sculptor &t)
{
    for (int i=0;i<x0;i++){
        for (int j=0;j<y0;j++){
            for (int k=0;k<z0;k++){
                t.cutVoxel(i,j,k);
            }
        }

    }

}


CutBox::~CutBox()
{
}
