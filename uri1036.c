/*
Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular as ra�zes, mostre a mensagem 
correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.

Entrada
Leia tr�s valores de ponto flutuante (double) A, B e C.

Sa�da
Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". Caso contr�rio, imprima o resultado das ra�zes com
 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha ap�s cada mensagem.

AUTHOR: ITALLO RODRIGUES MORENO
*/




#include<stdio.h>
#include <math.h>

int main()
{
    double a, b, c, t;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(((b * b) - 4 * a * c) < 0 || a == 0){
        printf("Impossivel calcular\n");
    }
    else{
        t = sqrt((b * b) - 4 * a * c);
        printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + t) / (2 * a)), ((-b - t) / (2 * a)));
    }
    return 0;
}
