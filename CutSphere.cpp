#include "CutSphere.h"
#include <iostream>
#include "Sculptor.h"
CutSphere::CutSphere(int _xcenter, int _ycenter, int _zcenter, int _r)
{
    xcenter=_xcenter;
    ycenter=_ycenter;
    zcenter=_zcenter;
    r=_r;

}
    void CutSphere::draw(Sculptor &t){
        //t.CutSphere(xcenter,ycenter,zcenter,r);

       for (int i=xcenter-r;i<xcenter+r;i++){
            for (int j=ycenter-r;j<ycenter+r;j++){
                for (int k=zcenter-r;k<zcenter+r;k++){
                     if(pow(k - zcenter, 2) + pow(j - ycenter, 2) + pow(i - xcenter, 2) < pow(r, 2)){
                        t.cutVoxel(i,j,k);
                     }
                }
            }

        }
}

CutSphere::~CutSphere()
{
    //dtor
}
