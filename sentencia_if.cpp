#include <iostream>
#include <string>

using namespace std;

char mostrar_opciones(string, string, string);

int main()
{
    char r1, r2;
    
    r1 = mostrar_opciones("¿Cómo es la tasa de producción de lágrimas?","[R]educida","[N]ormal");
    
    if(r1 == 'R'){
    
        r2 = mostrar_opciones("¿Tiene astigmatismo?","[S]í","[N]o");
        
        if(r2 == 'S')
            cout << "Tipo de lentes: suaves";
        else if(r2 == 'N')
            cout << "Tipo de lentes: rígidos";
        else
            cout << "Fin";
            
    }
    else if(r1 == 'N')
        cout << "Tipo de lentes: no requiere";
        
    else
        cout << "Fin";

    return 0;
}

char mostrar_opciones(string pregunta, string opcion_A, string opcion_B)
{
    char respuesta;
    char r_a = opcion_A[1];
    char r_b = opcion_B[1];
    
    do{
        cout << pregunta << endl;
        cout << opcion_A << endl;
        cout << opcion_B << endl;
        cout << "Salir [x]" << endl;
        cin  >> respuesta;
    }
    while(respuesta != r_a && respuesta != r_b && respuesta != 'x');
    
    return respuesta;   
}
