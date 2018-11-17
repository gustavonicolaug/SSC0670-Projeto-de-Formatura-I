/*
--
Nome do arquivo: bubble_sort.c
Projeto: Análise de desempenho comparativa entre diferentes arquiteturas de computadores
Versão: v1.0

Autor: 	Gustavo Nicolau Gonçalves
NUSP: 	9012945
Curso: 	Engenharia de Computação
Data:	15/10/2018
--
*/

#include "stdlib.h"

#define MAX_SIZE 10000

int main(int argc, char const *argv[])
{

    int     vector[MAX_SIZE];
    int     counter;
    char    swap_detected = 1;
    int     auxiliar;

    srand(0);

    // Creating random vector 
    //
    for (counter = 0; counter < MAX_SIZE; counter = counter +1)
    {
        vector[counter] = rand() % 100;
    }

    // Bubble sort
    //
    while(swap_detected)
    { 
        swap_detected = 0;

        for (counter = 0; counter < MAX_SIZE; counter = counter + 1)
        {
            if (vector[counter] > vector[counter + 1])
            {
                auxiliar = vector[counter];
                vector[counter] = vector[counter + 1];
                vector[counter + 1] = auxiliar;
                swap_detected = 1;
            }
        }
    }

	return 0;
}