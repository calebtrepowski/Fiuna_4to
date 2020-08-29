#ifndef TRABAJADOR_H
#define TRABAJADOR_H


class Trabajador
{
    public:
        Trabajador(){}
        virtual ~Trabajador(){}

        virtual void trabajar()=0;
        virtual void descansar()=0;
        virtual string cobrarSalario()=0;
};

#endif // TRABAJADOR_H
