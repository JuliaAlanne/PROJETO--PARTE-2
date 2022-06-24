#include "Sculptor.h"
#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>


Sculptor::Sculptor(int nx_, int ny_, int nz_)
{
    nx=nx_;
    ny=ny_;
    nz=nz_;
    r=0.0;
    g=0.0;
    b=0.0;
    a=0.0;
    // alocando a matriz
    v = new Voxel **[nx];
    for (int i=0;i<nx;i++) {
        v[i]=new Voxel *[ny];
        for (int j=0;j<ny;j++) {
            v[i][j]= new Voxel[nz];
            for (int k=0;k<nz;k++) {
                this ->v[i][j][k].r=0.0;
                this ->v[i][j][k].g=0.0;
                this ->v[i][j][k].b=0.0;
                this ->v[i][j][k].a=0.0;
                this ->v[i][j][k].isOn=false;
            }
        }
    }
}
//Destrutor
Sculptor::~Sculptor()
{
    // liberando a memoria alocada
   for (int i=0;i<nx;i++)
    {
        for (int j=0;j<ny;j++) {
            delete[] v[i][j];
        }
        delete[] v[i];
        }
    delete[] v;
}
//metodo cores
void Sculptor::setColor(float r, float g, float b, float alpha){
    this ->r=r;
    this ->g=g;
    this ->b=b;
    this ->a=alpha;
}
// metodo para desenhar voxel
void Sculptor::putVoxel(int x, int y,int z){
    this ->v[x][y][z].isOn=true;
    this ->v[x][y][z].r= this->r;
    this ->v[x][y][z].g= this->g;
    this ->v[x][y][z].b= this->b;
    this ->v[x][y][z].a= this->a;

}
// metodo para apagar o voxel
void Sculptor::cutVoxel(int x, int y,int z){
    this ->v[x][y][z].isOn=false;

}
//escreve o arquivo OFF
void Sculptor::writeOFF( const char* filename){
    std::ofstream file;
    int cont=0, index=0;
    file.open(filename);
    file<< "OFF\n";
    for (int i=0;i<nx;i++){
        for (int j=0;j<ny;j++){
            for (int k=0;k<nz;k++){
                if (v[i][j][k].isOn==true){
                    cont++;
                }
            }
        }

    }
    file<< cont*8<< " "<< cont *6<< " "<<"0"<< "\n";
    for (int i=0;i<nx;i++){
        for (int j=0;j<ny;j++){
            for (int k=0;k<nz;k++){
                if (v[i][j][k].isOn==true){
                    file << i - 0.5 << " " << j + 0.5 << " " << k - 0.5 << "\n" << std::flush;
        			file << i - 0.5 << " " << j - 0.5 << " " << k - 0.5 << "\n" << std::flush;
                    file << i + 0.5 << " " << j - 0.5 << " " << k - 0.5 << "\n" << std::flush;
                    file << i + 0.5 << " " << j + 0.5 << " " << k - 0.5 << "\n" << std::flush;
                    file << i - 0.5 << " " << j + 0.5 << " " << k + 0.5 << "\n" << std::flush;
                    file << i - 0.5 << " " << j - 0.5 << " " << k + 0.5 << "\n" << std::flush;
                    file << i + 0.5 << " " << j - 0.5 << " " << k + 0.5 << "\n" << std::flush;
                    file << i + 0.5 << " " << j + 0.5 << " " << k + 0.5 << "\n" << std::flush;
                }
            }
        }

    }
 cont=0;
    for (int i=0; i<nx; i++){
        for (int j=0; j<ny; j++){
            for (int k=0; k<nz; k++){
        		if(v[i][j][k].isOn == true){
        			index = cont*8;
                    file << std::fixed;
        			file << 4 << " " << index + 0 << " " << index + 3 << " " << index + 2 << " " << index + 1 << " ";
                    file << std::setprecision(2) << v[i][j][k].r << " " << std::setprecision(2) << v[i][j][k].g << " " << std::setprecision(2) << v[i][j][k].b << " " <<std::setprecision(2) << v[i][j][k].a << std::setprecision(2) << "\n";

                    file << 4 << " " << index + 4 << " " << index + 5 << " " << index + 6 << " " << index + 7 << " ";
                    file << std::setprecision(2) << v[i][j][k].r << " " << std::setprecision(2) << v[i][j][k].g << " " << std::setprecision(2) << v[i][j][k].b << " " <<std::setprecision(2) << v[i][j][k].a <<std::setprecision(2) << "\n";

                    file << 4 << " " << index + 0 << " " << index + 1 << " " << index + 5 << " " << index + 4 << " ";
                    file  << std::setprecision(2) << v[i][j][k].r << " " << std::setprecision(2) << v[i][j][k].g << " " <<std::setprecision(2)<< v[i][j][k].b << " " << std::setprecision(2)<< v[i][j][k].a << std::setprecision(2) << "\n";

                    file << 4 << " " << index + 0 << " " << index + 4 << " " << index + 7 << " " << index + 3 << " ";
                    file << std::setprecision(2) << v[i][j][k].r << " " << std::setprecision(2) << v[i][j][k].g << " " << std::setprecision(2) << v[i][j][k].b << " " << std::setprecision(2) << v[i][j][k].a << std::setprecision(2) << "\n";

                    file<< 4 << " " << index + 7 << " " << index + 6 << " " << index + 2 << " " << index + 3 << " ";
                    file << std::setprecision(2) << v[i][j][k].r << " " <<std::setprecision(2)<< v[i][j][k].g << " " << std::setprecision(2) << v[i][j][k].b << " " <<std::setprecision(2) << v[i][j][k].a << std::setprecision(2)<< "\n";

                    file << 4 << " " << index + 1 << " " << index + 2 << " " << index + 6 << " " << index + 5 << " ";
                    file << std::setprecision(2) << v[i][j][k].r << " " << std::setprecision(2) << v[i][j][k].g << " " << std::setprecision(2) << v[i][j][k].b << " " << std::setprecision(2) << v[i][j][k].a <<std::setprecision(2)<< "\n";

                    cont++;
                }
            }
        }
    }
    file.close();
}
/*
int Sculptor :: getNx() {
    return nx;
}


int Sculptor :: getNy() {
    return ny;
}

int Sculptor :: getNz() {
    return nz;
}
*/
