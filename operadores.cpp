#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 9, y = 3;
    
    cout << "OPERADORES" << endl << endl;
    cout << "Operadores aritméticos" << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;
    cout << "x ^ y = " << pow(x, y) << endl;
    cout << "x / y = " << 1.0*x / y << endl;
    
    cout << endl << "Operadores de incremento y decremento" << endl;
    cout << "x = " << x << " y = " << y << endl;
    x++; cout << "x++ = " << x << endl;
    x--; cout << "x-- = " << x << endl;
    ++y; cout << "++y = " << y << endl;
    --y; cout << "--y = " << y << endl;
    
    cout << "x++ = " << x++ << endl;
    cout << "x = " << x << endl;
    
    /*  
    cout << "x * y = " << (--x)*(y++) << endl;
    cout << "x * y = " << (x--)*(++y) << endl;
    cout << "x * y = " << (--x)*(y--) << endl;
    cout << "x * y = " << (x++)*(--y) << endl;
    */
    
    // Operadores compuestos
    x -= 8;
    y += 4;
    
    cout << endl << "Operadores relacionales" << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << "x > y  : " << (x > y) << endl;
    cout << "x < y  : " << (x < y) << endl;
    cout << "x >= y : " << (x >= y) << endl;
    cout << "x <= y : " << (x <= y) << endl;
    cout << "x == y : " << (x == y) << endl;
    cout << "x != y : " << (x != y) << endl;
    
    cout << endl << "Operadores lógicos" << endl;
    cout << "x = " << x << " y = "  << y << endl;
    cout << "x > 0 && y < 0  : "    << (x > 0  && x > 0) << endl;
    cout << "x > y || x < y  : "    << (x > y  || x < y) << endl;
    cout << "!(x > y || x < y)  : " << !(x > y  || x < y) << endl;
    
    cout << endl << "Operador ternario" << endl;
    cout << (x > y ? "x es mayor que y" : "x no es mayor que y") << endl;
    
    /*
    x = y = 100;
    cout << ((x > y) ? "x es mayor que y" : ((x == y) ? "x es igual a y" : "x es menor que y")) << endl;
    */
    
    return 0;
    
}
