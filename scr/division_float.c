/*
--
Nome do arquivo: division_float.c
Projeto: Análise de desempenho comparativa entre diferentes arquiteturas de computadores
Versão: v1.0

Autor: 	Gustavo Nicolau Gonçalves
NUSP: 	9012945
Curso: 	Engenharia de Computação
Data:	15/10/2018
--
*/

#include "stdlib.h"

#define OPERATIONS 10000

int main(int argc, char const *argv[])
{

    srand(0);
    int counter;
    float numerator;
    float denominator;
    float result;

    for (counter = 0; counter < OPERATIONS; counter = counter +1)
    {
        numerator = rand();
        denominator = rand();
        result = numerator / denominator;
    }

	return 0;
}