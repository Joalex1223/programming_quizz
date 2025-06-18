#include <stdio.h>
 
int main()

{

    float num1, num2, resultado;

    char operacion;             
 
    printf("= Calculadora basica de solo dos variables  =\n");
 
    printf("Escribe el primer número: ");

    scanf("%f", &num1);  
 
    printf("Escribe la operación (+, -, *, /): ");

    scanf(" %c", &operacion);  

    printf("Escribe el segundo número: ");

    scanf("%f", &num2);  
 
    

    if (operacion == '+') {

        resultado = num1 + num2;

        printf("El resultado es: %.2f\n", resultado);

    } else if (operacion == '-') {

        resultado = num1 - num2;

        printf("El resultado es: %.2f\n", resultado);

    } else if (operacion == '*') {

        resultado = num1 * num2;

        printf("El resultado es: %.2f\n", resultado);

    } else if (operacion == '/') {

        resultado = num1 / num2;

        printf("El resultado es: %.2f\n", resultado);

    } else {

        printf("Operación no válida. Solo usa +, -, * o /.\n");

    }

}
 