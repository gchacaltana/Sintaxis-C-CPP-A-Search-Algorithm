#include <stdio.h>

int main(void)
{
    
    //Variables
    int a = 10; 
    float A = 20.0;
    char _a = 'Y';
    printf("a:%i - A:%.2f - _a:%c \n", a, A, _a);
    
    //Constantes
    const float cf_PI = 3.1416;
    printf("Valor de PI : %f\n", cf_PI);
    
    // Tipos definidos por el usuario
    typedef int tGrado;    
    typedef char tSeccion;
    
    tGrado grado = 3;      
    tSeccion seccion = 'A';
    
    printf("Grado: %iº - Sección: %c\n", grado, seccion);
    //printf("Grado: %iº - Sección: %c\n", grado + 1, seccion + 1);

    return 0;
}
