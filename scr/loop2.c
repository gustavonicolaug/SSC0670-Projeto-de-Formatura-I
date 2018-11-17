/*
--
Nome do arquivo: loop2.c
Projeto: Análise de desempenho comparativa entre diferentes arquiteturas de computadores
Versão: v1.0

Autor: 	Gustavo Nicolau Gonçalves
NUSP: 	9012945
Curso: 	Engenharia de Computação
Data:	15/10/2018
--
*/


#define START 10000

int main(int argc, char const *argv[])
{
	//	Counter variables
	int counter_1	= START;
	int counter_2	= START;
	int counter_3	= START;
	//	Loop's limits
	int limite_1 	= 0;
	int limite_2 	= 0;
	int limite_3	= 0;
	// 	Aritimetic variable
	int sub			= 1000;

	for (counter_1 = 0; counter_1 < limite_1; counter_1 = counter_1 - 1)
	{
		for (counter_2 = 0; counter_2 < limite_2; counter_2 = counter_2 - 1)
		{
			for (counter_3 = 0; counter_3 < limite_3; counter_3 = counter_3 - 1)
			{
				sub = sub - 1 ;
			}
		}
	}

	return 0;
}