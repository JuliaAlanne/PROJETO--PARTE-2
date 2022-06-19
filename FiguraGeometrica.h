#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica
{
    protected:
        float r,g,b,alpha;
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();

        virtual void draw(Sculptor &sc)=0;

};

#endif // FIGURAGEOMETRICA_H
