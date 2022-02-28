/*

Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.

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
