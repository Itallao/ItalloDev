/*

Leia um valor inteiro X. Em seguida apresente os 6 valores �mpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada ser� um valor inteiro positivo.

Sa�da
A sa�da ser� uma sequ�ncia de seis n�meros �mpares.



AUTHOR:ITALLO RODRIGUES MORENO

*/


#include <stdio.h>

int main() {
 int cont,num;
    scanf("%d",&num);
    if(num%2==0)
        num=num+1;
    else
        num=num;
    printf("%d\n",num);
    for(cont=1;cont<=5;cont++)
    printf("%d\n",num+=2);

    return 0;
}
