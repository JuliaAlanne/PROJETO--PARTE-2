#include "Interpretadordearquivos.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "putVoxel.h"
#include "putBox.h"
#include "PutSphere.h"
#include "PutEllipsoid.h"
#include "cutVoxel.h"
#include "cutBox.h"
#include "CutSphere.h"
#include "CutEllipsoid.h"

Interpretadordearquivos::Interpretadordearquivos()
{
}
std::vector <FiguraGeometrica *> Interpretadordearquivos :: parse(std::string filename)
{
    std :: vector <FiguraGeometrica *> fg;
        std :: ifstream fin;
        std :: stringstream ss;
        std :: string s,token;
    fin.open ("testeOFF.txt");


    if(!fin.is_open()){

        std::cout << "O arquivo não foi aberto" << filename << std::endl;
        exit(0);
    }
    while(fin.good()){
        std::getline(fin, s);
        if(fin.good()) {
            // insere a string s no fluxo ss
            ss.clear();
            ss.str(s);
            ss >> token;
            //  realiza o parsing dos tokens
            if(ss.good()){
                // dimensoes da tela
                if(token.compare("dim") == 0){
                    ss >> dx >> dy >> dz;
                }
                else if(token.compare("putVoxel") == 0){
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b >> alpha;
                    fg.push_back(new PutVoxel(x0, y0, z0, r, g, b, alpha));
                }

                else if(token.compare("cutVoxel") == 0) {
                    int x0,y0,z0;
                    ss >> x0 >> y0 >> z0;
                    fg.push_back(new CutVoxel(x0,y0,z0));
                }

                else if(token.compare("putBox") == 0) {
                    int x0,y0,z0,x1,y1,z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> alpha;
                    fg.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b,alpha));

                }

                else if(token.compare("cutBox") == 0) {
                    int x0,y0,z0,x1,y1,z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    fg.push_back(new CutBox(x0,x1,y0,y1,z0,z1));
                }

                else if(token.compare("PutSphere") == 0) {
                    int xcenter,ycenter,zcenter, raio;
                    ss >> xcenter >> ycenter >> zcenter >> raio >> r >> g >> b >> alpha;
                    fg.push_back(new PutSphere(xcenter,ycenter,zcenter,raio,r,g,b,alpha));
                }

                else if(token.compare("CutSphere") == 0) {
                    int xcenter,ycenter,zcenter, r;
                    ss >> xcenter >> ycenter >> zcenter >> r;
                    fg.push_back(new CutSphere(xcenter,ycenter,zcenter,r));
                }

                else if(token.compare("PutEllipsoid") == 0) {
                    int xcenter,ycenter,zcenter, rx,ry,rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> alpha;
                    fg.push_back(new PutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz,r,g,b,alpha));
                }

                else if(token.compare("CutEllipsoid") == 0) {
                    int xcenter,ycenter,zcenter, rx,ry,rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
                    fg.push_back(new CutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz));
                }
            }
        }
    }
    return(fg);
}
Interpretadordearquivos:: getDx(){

}
Interpretadordearquivos:: getDy(){

}
Interpretadordearquivos:: getDz(){

}
Interpretadordearquivos::~Interpretadordearquivos()
{
}
