#include <iostream>

using namespace std;

// Prototipos
float mayor(float, float );
char* reverso(char* );

int main(int argc, char* argv[]) //Parámetros de la línea de comandos
{
    
    int m, n;
    cout << "Ingrese m: " ; cin >> m;
    cout << "Ingrese n: " ; cin >> n;
    cout << "El mayor valor es: " << mayor(m, n) << endl; // Invocación
    
    cout << argv[0] << "|" << argv[1] << endl;
    cout << reverso(argv[1]) << endl; // Invocación

    return 0;
    
}

// Implementaciones
float mayor (float a, float b)
{
    return a > b ? a : b;
}

char* reverso( char* cadena)
{
    char *s, *p;
    s = p = cadena;
    
    while(*s != '\0')
            s++;
    s--;
    
    char c;
    while(p < s)
    {
        c = *p; *p = *s; *s = c;
        p++; s--;
    }
    
    return cadena;
}
