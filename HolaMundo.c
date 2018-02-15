#include <stdio.h>
/*Declarar constantes en tiempo de preprocesador | se recomienda que el nombre sea en mayusculas*/
#define PI 3.14 //Define un símbolo asociado a un valor 

/*Declaracion de variable global*/

int global = 5;

/* Main es una función ivocada por el sistema operativo y puede o no regresar un valor al mismo. 
El sistema operativo lleva una bitácora de las ejecuciones realizadas con éxito */
int main(){
    /*Variable local*/
/*Tipos de datos*/
    int local = 10;
    short int a;
    signed int b;
    long long int c;
    float d;
    double e;
/*Varibles booleanas no se pueden inicializar a False por default. Se tiene que incluir la biblioteca stdbool*/
    _Bool booleano = 0;
    printf("%d\n", booleano);
    booleano = 1;
    printf("%d\n", booleano);
/*sizeof regresa el tamño en bytes de la variable en memoria RAM*/
    printf("int %d\n", sizeof(c));
    printf("short int %d\n", sizeof(a));
    printf("signed int %d\n", sizeof(b));
    printf("long long %d\n", sizeof(c));
    printf("float%d\n", sizeof(d));
    printf("double%d\n", sizeof(e));

/*Se pueden declarar dos varibles en una sola línea*/
    int otra1 = 10, otra2 = 6;
/*En C se pueden hacer asignaciones multiples*/
    otra1 = otra2 = 25;

/*Decalrar constantes const type name*/
    const int constante = 12;

/*AND y OR son operadoradores cortocircuitados, con que se cumpla una condición se puede determinar el valor de toda la expresión*/

/*Todo enunciado que regresa un valor,se conoce como expresión*/
    1>2;
/*Una variable es un espacio de memoria que puede ser modificada en tiempo de ejecicion. Una celda en memoria RAM tiene 8 bits o 1 byte*/

/*Prefijo ++a; --a;*/
    printf("%d\n", local);
    printf("%d\n", local++);
    printf("%d\n", ++local);
    printf("%d\n", --local);
    printf("%d\n", local--);
/*Sufijo a++; a--;*/

/*En C el cero a izquierda si importa*/
    int n1 = 0765; //Numero octal
    int n2 = 0b101; //Numero binario, se requiere gcc
    int n3 = 0xABC123; //Numero hexadecimal
/*%d base 10 | %i enteros, incluso en otras bases*/
    printf("%i\n", n1);
    printf("%i\n", n2);
    printf("%i\n", n3);
}

