#include "CutSphere.h"

CutSphere::CutSphere()
{
   for (int i=xcenter-r;i<xcenter+r;i++){
        for (int j=ycenter-r;j<ycenter+r;j++){
            for (int k=zcenter-r;k<zcenter+r;k++){
                 if(pow(k - zcenter, 2) + pow(j - ycenter, 2) + pow(i - xcenter, 2) < pow(r, 2)){
                    this ->cutVoxel(i,j,k);
                 }
            }
        }

    }
}

CutSphere::~CutSphere()
{
    //dtor
}
