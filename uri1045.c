/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, 
determine o tipo de tri�ngulo que estes tr�s lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os tr�s lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem tr�s valores de ponto flutuante de dupla precis�o A (0 < A) , B (0 < B) e C (0 < C).

Sa�da
Imprima todas as classifica��es do tri�ngulo especificado na entrada.


AUTHOR: ITALLO RODRIGUES MORENO

*/

#include <stdio.h>

int main() {
 float a, b, c, x; 
 scanf("%f %f %f", &a, &b, &c);
  if (a < b){ x = a; a = b; b = x; } 
  if (b < c){ x = b; b = c; c = x; } 
  if (a < b){ x = a; a = b; b = x; }
  if (a >= b + c) printf("NAO FORMA TRIANGULO\n");
     else
  if (a * a == b * b + c * c)
      printf("TRIANGULO RETANGULO\n");
     else 
  if (a * a > b * b + c * c)
  printf("TRIANGULO OBTUSANGULO\n");
   else 
  if (a * a < b * b + c * c) printf("TRIANGULO ACUTANGULO\n");
  if (a == b && b == c) 
     printf("TRIANGULO EQUILATERO\n");
      else
  if (a == b || b == c) printf("TRIANGULO ISOSCELES\n");

    return 0;
}