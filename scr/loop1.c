/*
--
Nome do arquivo: loop1.c
Projeto: Análise de desempenho comparativa entre diferentes arquiteturas de computadores
Versão: v1.0

Autor: 	Gustavo Nicolau Gonçalves
NUSP: 	9012945
Curso: 	Engenharia de Computação
Data:	15/10/2018
--
*/


#define LIMITE 100

int main(int argc, char const *argv[])
{
	//	Counter variables
	int counter_1	= 0;
	int counter_2	= 0;
	int counter_3	= 0;
	//	Loop's limits
	int limite_1 	= LIMITE;
	int limite_2 	= LIMITE;
	int limite_3	= LIMITE;
	// 	Aritimetic variable
	int sum			= 0;

	for (counter_1 = 0; counter_1 < limite_1; counter_1 = counter_1 + 1)
	{
		for (counter_2 = 0; counter_2 < limite_2; counter_2 = counter_2 + 1)
		{
			for (counter_3 = 0; counter_3 < limite_3; counter_3 = counter_3 + 1)
			{
				sum = sum + 1 ;
			}
		}
	}

	return 0;
}
