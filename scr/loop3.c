/*
--
Nome do arquivo: loop3.c
Projeto: Análise de desempenho comparativa entre diferentes arquiteturas de computadores
Versão: v1.0

Autor: 	Gustavo Nicolau Gonçalves
NUSP: 	9012945
Curso: 	Engenharia de Computação
Data:	15/10/2018
--
*/


#define LIMITE 10000

int main(int argc, char const *argv[])
{
	//	Counter variables
	int counter	= 0;
	//	Loop's limits
	int limite 	= LIMITE;
	// 	Aritimetic variable
	int sum		= 0;

	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}
	for (counter = 0; counter < limite; counter = counter + 1)
	{
		sum = sum + 1 ;
	}

	return 0;
}