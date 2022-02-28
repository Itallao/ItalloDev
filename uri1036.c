/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem 
correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com
 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

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
