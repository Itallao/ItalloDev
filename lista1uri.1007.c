/*

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do produto de A e B pelo produto de C e D segundo a f�rmula: 
DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada cont�m 4 valores inteiros.

Sa�da
Imprima a mensagem DIFERENCA com todas as letras mai�sculas, conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade.


Author:Itallo Rodrigues Moreno
*/


#include <stdio.h>  

int main()
{

  int A, B, C , D, DIFERENCA;
  	
	scanf("%i", &A);
	scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);
    
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIFERENCA);
    
    return 0;
}
    
    
