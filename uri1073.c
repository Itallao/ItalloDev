/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N, inclusive N, se for o caso.

Entrada
A entrada cont�m um valor inteiro N (5 < N < 2000).

Sa�da
Imprima o quadrado de cada um dos valores pares, de 1 at� N, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padr�o apres
entarem como sa�da 1e+006 ao inv�s de 1000000 o que ocasionar� resposta errada. Neste caso, configure a precis�o adequadamente para que isso n�o ocorra.

AUTHOR: ITALLO RODRIGUES MORENO 
*/

#include <stdio.h>

int main() {
 int num, cont;
     scanf("%d", &num);
     for ( cont = 1; cont <= num; ++cont)
     {
      if(cont % 2 == 0){
       printf("%d^2 = %d\n", cont,(cont*cont));
      }
     }
    return 0;
}
