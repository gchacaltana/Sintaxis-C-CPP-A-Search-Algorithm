#include <iostream>
#include <algorithm>

using namespace std;

// DECLARACIÓN DE LA CLASE TFRACCION 

class TFraccion
{
    private:  // modificador de acceso - privado
        int numerador, denominador; // datos miembro de la clase
        
    public:  // modificador de acceso - público
        
        //constructores
        TFraccion(){ numerador = 0; denominador = 1; }; //sin parámetros
        TFraccion(int);
        TFraccion(int, int);
        
        //funciones miembro públicas
        TFraccion suma(const TFraccion& f);
        void imprimir();
        
        //operador sobrecargado
        TFraccion operator+(const TFraccion& f);
        
        //operador sobrecargado como función afín
        friend ostream& operator<<(ostream& os, TFraccion f);
}
;


// PROGRAMA PRINCIPAL
int main()
{
    // Instancias de la clase TFraccion
    TFraccion f1(2, 8);
    TFraccion f2(5, 8);
    
    // Invocación a las funciones públicas
    cout << "f1:"; f1.imprimir(); cout << endl;
    cout << "f2:"; f2.imprimir(); cout << endl;    
    
    cout << "f1 + f2:"; (f1.suma(f2)).imprimir(); cout << endl;
    
    
    TFraccion f3(3, 7);
    TFraccion f4(2, 7);
    
    // Expresión utilizando los operadores sobrecargados
    cout << "f3 + f4:" << f3 + f4 << endl;
    
    return 0;
}


TFraccion::TFraccion(int n)
{
       numerador = n;
       denominador = 1;
}

TFraccion::TFraccion(int n, int d)
{
       numerador = n;
       denominador = d;
    
}


TFraccion TFraccion::suma(const TFraccion& f)
{
    int num, den;
     
    num = this->numerador*f.denominador + this->denominador*f.numerador;
    den = this->denominador*f.denominador;
    
    int gcd = __gcd(num,den);
    
    num /= gcd;
    den /= gcd;
    
    TFraccion res(num, den);
    
    return res;
    
}

void TFraccion::imprimir()
{
    cout << numerador << '/' << denominador;
}

TFraccion TFraccion::operator+(const TFraccion& f)
{
    int num, den;

    num = (this->numerador*f.denominador + this->denominador*f.numerador);
    den = (this->denominador*f.denominador);
    
    int gcd = __gcd(num,den);
    TFraccion res(num/gcd, den/gcd);
    
    return res;
}

ostream& operator<<(ostream& os, TFraccion f)
{
    os << f.numerador << "/" << f.denominador;
    return os;
    
}
