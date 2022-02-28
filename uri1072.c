/*

Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.

Entrada
A primeira linha da entrada cont�m um valor inteiro N (N < 10000), que indica o n�mero de casos de teste.
Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).
 

Sa�da
Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.

AUTHOR: ITALLO RODRRIGUES MORENO

*/


#include <stdio.h>
int main() {
    int n, i, a, in = 0;
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        scanf("%i", &a);
        if (a >= 10 && a <= 20) in++;
    }
    printf("%i in\n%i out\n", in, n-in);
    return 0;
}
