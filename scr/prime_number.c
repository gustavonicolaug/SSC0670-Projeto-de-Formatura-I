/*
--
Nome do arquivo: prime_number.c
Projeto: Análise de desempenho comparativa entre diferentes arquiteturas de computadores
Versão: v1.0

Autor: 	Gustavo Nicolau Gonçalves
NUSP: 	9012945
Curso: 	Engenharia de Computação
Data:	15/10/2018
--
*/

#include "stdio.h"

#define LIMIT   1000
#define TRUE    1
#define FALSE   0

int main(int argc, char const *argv[])
{

    int     prime_number[LIMIT];
    int     interactions;
    int     tail;
    int     number_test;
    char    is_prime;

    prime_number[0] = 1;
    prime_number[1] = 2;
    tail = 1;

    for (number_test = 3; number_test < LIMIT + 3; number_test = number_test + 1)
    {
        is_prime = TRUE;
        for (interactions = 1; interactions < tail + 1; interactions = interactions +1)
        {
            if ((number_test % prime_number[interactions]) == 0)
            {
                is_prime = FALSE;
            }
        }
        if (is_prime)
        {
            prime_number[tail+1] = number_test;
            tail = tail + 1;
        }       
    }

    for (interactions = 0; interactions < tail; interactions = interactions + 1)
    {
        printf("%d ", prime_number[interactions]);
    }
    printf("\n");
	return 0;
}