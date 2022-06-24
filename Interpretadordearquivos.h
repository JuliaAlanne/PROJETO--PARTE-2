#ifndef INTERPRETADORDEARQUIVOS_H
#define INTERPRETADORDEARQUIVOS_H
#include <vector>

#include <FiguraGeometrica.h>
#include <string>

class Interpretadordearquivos
{
    int dx,dy,dz;
    float r,g,b, alpha;
    public:
        Interpretadordearquivos();
        virtual ~Interpretadordearquivos();

        std::vector <FiguraGeometrica* > parse (std::string filename);
        //metodos que irao retornar as dimensoes x , y, z, respectivamente
        int getDx(),getDy(),getDz();
};

#endif // INTERPRETADORDEARQUIVOS_H
