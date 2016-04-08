#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



float x = 0;
float y = 0;

float rtasuma;
float rtaresta;
float rtadivision;
float rtamultiplicacion;
int rtafactorial;



int main()
{
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        system("cls");

        printf("\n");

        printf("1- Ingresar 1er operando (A=%.2f)\n",x);
        printf("2- Ingresar 2do operando (B=%.2f)\n",y);
        printf("\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);


        switch(opcion)
        {


            case 1:
                printf("Ingrese 1er operando (A) : ");
                scanf("%f",& x);
                break;

            case 2:
                printf("Ingrese 2do operando (B) : ");
                scanf("%f",& y);
                break;

            case 3:
                rtasuma = suma(x,y);
                printf("La suma de (A+B) = %.2f", rtasuma);
                printf("\n");
                system("pause");
                break;

            case 4:
                rtaresta = resta(x,y);
                printf("La resta de (A-B) es: %.2f", rtaresta);
                printf("\n");
                system("pause");
                break;

            case 5:
                rtadivision = division(x,y);
                printf("La division de (A/B) es: %.2f", rtadivision);
                printf("\n");
                system("pause");
                break;

            case 6:
                rtamultiplicacion = multiplicacion(x,y);
                printf("El producto de (A*B) es: %.2f", rtamultiplicacion);
                printf("\n");
                system("pause");
                break;

            case 7:
                rtafactorial = factorial(x);
                printf("El factorial de A es: %d", rtafactorial);
                printf("\n");
                system("pause");
                break;

            case 8:

                rtasuma = suma(x,y);
                printf("La suma de (A+B) = %.2f", rtasuma);
                printf("\n");

                rtaresta = resta(x,y);
                printf("La resta de (A-B) es: %.2f", rtaresta);
                printf("\n");

                rtadivision = division(x,y);
                printf("La division de (A/B) es: %.2f", rtadivision);
                printf("\n");

                rtamultiplicacion = multiplicacion(x,y);
                printf("El producto de (A*B) es: %.2f", rtamultiplicacion);
                printf("\n");

                rtafactorial = factorial(x);
                printf("El factorial de A es: %d", rtafactorial);
                printf("\n");

                printf("\n");
                system("pause");
                break;


            case 9:
                seguir = 'n';
                break;
        }




    }//while
    return 0;
}
