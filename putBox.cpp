#include "PutBox.h"

PutBox::PutBox()
{
    x0=(x0<0) ? 0: x0;
    x1= (x1> this->nx) ? this -> nx : x1;
    y0=(y0<0) ? 0:y0;
    y1= (x1> this->ny) ? this -> ny : y1;
    z0=(z0<0) ? 0 : z0;
    z1= (z1> this->nz )? this -> nz : z1;
    for (int i=x0;i<x1;i++){
        for (int j=y0;j<y1;j++){
            for (int k=z0;k<z1;k++){
                    this ->putVoxel(i,j,k);
            }
        }

    }
}

PutBox::~PutBox()
{
    //dtor
}
