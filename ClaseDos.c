#include <stdio.h>
/*stdlib viene con las constantes de retorno*/
#include <stdlib.h>

int main(){
    int sum = 17, cuenta = 5;
    double media;
    /*Conversión automática, hace primero la división entera (trunca) y luego cast*/
    media = sum / cuenta;
    printf("Valor de la media: %f\n", media);
    
    /*Conversión explícita, hace primero el cast, luego promueve los operandos a double y luego la división*/
    media = (double)sum / cuenta;
    printf("Valor de la media: %f\n", media);

    /*Las literales con punto flotante se guardan como double por defecto
    Las literales sin punto flotante se guardan como enteros*/

    char c = 65;
    short s = 255;

    c = s;

    printf("%d\n", c);

    return EXIT_SUCCESS;
}

/*EXIT_SECCESS
 EXIT_FAILURE constantes de retorno adecuadas para cada plataforma*/

 /*
    char -> 1byte
    short -> 2 bytes
    int -> 4 bytes
    unsigned -> 4 bytes
    long -> 4 bytes
    float -> 4 bytes
    double -> 8 bytes
    long double -> 10 bytes
*/