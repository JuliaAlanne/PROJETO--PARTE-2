#include "CutEllipsoid.h"
#include <iostream>

CutEllipsoid::CutEllipsoid( int _xcenter,int _ycenter, int _zcenter, int _rx, int _ry, int _rz)
{
    xcenter=_xcenter;
    ycenter=_ycenter;
    zcenter=_zcenter;
    rx=_rx;
    ry=_ry;
    rz=_rz;

}

void CutEllipsoid::draw(Sculptor &t){

    for(int i = xcenter - rx; i < xcenter + rx; i++){
        for(int j = ycenter - ry; j < ycenter + ry; j++){
            for(int k = zcenter - rz; k < zcenter + rz; k++){
                if(pow(k - zcenter, 2)/pow(rz, 2) + pow(i - ycenter, 2)/pow(ry, 2) + pow(j - xcenter, 2)/pow(rx, 2) < 1){
                    t.cutVoxel(i,j,k);
                }
            }
        }
    }
}
CutEllipsoid::~CutEllipsoid()
{
    //dtor
}
