/*
Neste problema, deve-se ler o c�digo de uma pe�a 1, 
o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada cont�m duas linhas de dados. Em cada linha haver� 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Sa�da
A sa�da dever� ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espa�o ap�s os dois pontos e um espa�o ap�s o "R$". 
O valor dever� ser apresentado com 2 casas ap�s o ponto.

Author:Itallo Rodrigues Moreno
*/



#include <stdio.h>

int main() {

int codpc1, numpc1, codpc2, numpc2;

double valpc1, valpc2;

scanf("%d %d %lf",&codpc1,&numpc1,&val_pc1);

scanf("%d %d %lf",&codpc2,&numpc2,&valpc2);

printf("VALOR A PAGAR: R$ %.2f\n",(numpc1*valpc1)+(numpc2*valpc2));




return 0;

}
