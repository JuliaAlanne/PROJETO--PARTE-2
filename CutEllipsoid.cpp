#include "CutEllipsoid.h"

CutEllipsoid::CutEllipsoid()
{
  for(int j = ycenter - ry; j < ycenter + ry; j++){
            for(int k = zcenter - rz; k < zcenter + rz; k++){
                if(pow(k - zcenter, 2)/pow(rz, 2) + pow(i - ycenter, 2)/pow(ry, 2) + pow(j - xcenter, 2)/pow(rx, 2) < 1){
                    this -> cutVoxel(i,j,k);
                }
            }
        }
}


CutEllipsoid::~CutEllipsoid()
{
    //dtor
}
