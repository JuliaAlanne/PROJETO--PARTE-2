#include "CutBox.h"

CutBox::CutBox()
{
    x0=(x0<0) ? 0: x0;
    x1= (x1> this->nx) ? this-> nx:x1;
    y0=(y0<0) ? 0:y0;
    y1= (x1> this->ny) ? this ->ny:y1;
    z0=(z0<0) ? 0 : z0;
    z1= (z1> this->nz) ? this ->nz:z1;
    for (int i=0;i<x0;i++){
        for (int j=0;j<y0;j++){
            for (int k=0;k<z0;k++){
                    this ->cutVoxel(i,j,k);
            }
        }

    }

}

CutBox::~CutBox()
{
    //dtor
}
