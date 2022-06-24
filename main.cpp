#include <iostream>
#include <fstream>
#include <sstream>
#include "Sculptor.h"
#include "Interpretadordearquivos.h"
#include "FiguraGeometrica.h"
#include "cutBox.h"
#include "CutEllipsoid.h"
#include "CutSphere.h"
#include "cutVoxel.h"
#include "putBox.h"
#include "PutEllipsoid.h"
#include "PutSphere.h"
#include "putVoxel.h"

int main(){
    Sculptor *s;

    Interpretadordearquivos interp;

    std::vector<FiguraGeometrica*> fg;

    fg = interp.parse("testeOFF.off");

    s = new Sculptor(interp.getDx(), interp.getDy(), interp.getDz());

    for(size_t i=0; i<fg.size(); i++) {
        std::cout << "Desenho\n";
        fg[i]->draw(*s);
    }


    s->writeOFF((char*)"testeOFF.off");

    for(size_t i=0; i<fg.size(); i++) {
        delete fg[i];
    }

    delete s;
    return 0;

    }
