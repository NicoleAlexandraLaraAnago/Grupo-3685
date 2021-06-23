#include <iostream>
#include "pareja.cpp"

// implementacion de los operadores para la clase Pareja
Pareja::Pareja(const Pareja &p)
{
    *this=p;
}

Pareja& Pareja::operator + (const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}

Pareja& Pareja::operator - (const Pareja &p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}

Pareja& Pareja::operator * (const Pareja &p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}

Pareja& Pareja::operator / (const Pareja &p)
{
    if (p.a != 0) this->a /= p.a;
    if (p.b != 0) this->b /= p.b;
    return *this;
}

Pareja& Pareja::operator = (const Pareja &p)
{
    if(this!=&p){ //Comprueba que no se este intentando igualar un objeto a si mismo
        if (p.a != 0) this->a = p.a;
        if (p.b != 0) this->b = p.b;
    }
    return *this;
}

Pareja& Pareja::operator ++ ()
{
    this->a ++;
    this->b ++;
    return *this;
}

bool Pareja::operator == (const Pareja &p) const
{   
    return this->a == p.a && this->b == p.b;
}

// implemetacion de operadores no miembros
ostream& operator << (ostream &o,const Pareja &p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}

istream& operator >> (istream &i, Pareja &p)
{
    cout << "Ingrese valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}
