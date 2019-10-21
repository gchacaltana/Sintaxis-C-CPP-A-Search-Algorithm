#include <iostream>

using namespace std;

int main()
{

    //Variables
    int   a = 10; float A = 20; char _c = 'Y';   
    cout << "a:" << a << " - A:" << A << " - _c:" << _c << endl;
    
    //Constantes
    const float cf_PI = 3.1416;
    cout << "Valor de PI : " << cf_PI << endl;
    
    //Tipos definidos por el usuario
    typedef int Grado;    
    typedef char Seccion;
    
    Grado grado = 3; Seccion seccion = 'A';
    
    cout << "Grado: " << grado << "º Sección: " << seccion << endl;
    //cout << "Grado: " << grado + 1 << "º Sección: " << char(seccion + 1) << endl;
    
    return 0;
}
