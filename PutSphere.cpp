#include "PutSphere.h"
#include <iostream>

PutSphere::PutSphere(int _xcenter, int _ycenter, int _zcenter, int _r,float r, float g,float b, float alpha)
{
    xcenter = _xcenter;
    ycenter = _ycenter;
    zcenter = _zcenter;
    raio = _r;

}
void PutSphere::draw(Sculptor &t)
{
  t.setColor(r,g,b,alpha);
  for (int i=xcenter-raio;i<xcenter+raio;i++){
        for (int j=ycenter-raio;j<ycenter+raio;j++){
            for (int k=zcenter-raio;k<zcenter+raio;k++){
                 if(pow(k - zcenter, 2) + pow(j - ycenter, 2) + pow(i - xcenter, 2) < pow(raio, 2)){
                    t.putVoxel(i,j,k);
                 }
            }
        }

    }
}

PutSphere::~PutSphere()
{
    //dtor
}
