#include <stdio.h>
#include <string.h>

int main()
{
	char mensagem[5000];
	int apareceu[27];
	char letra;
	int c, tam, i, ok = 1;

	//Inicializa o array "apareceu" com 0's
	memset(apareceu, 0, 27);

	//Lê a mensagem
	scanf("%[^\n]", &mensagem[i]);

	//Armazena o tamanho da mensagem
	tam = strlen(mensagem);

	//Percorre o vetor mensagem e identifica as letras que apareceram
	for (i = 0; i < tam; ++i)
	{
		if (mensagem[i] != ' ')
		{
			if (mensagem[i] >= 97) mensagem[i] -= 32;

			apareceu[mensagem[i] - 65] = 1;
		}
			
		
	}

	//Lê a quantidade de chutes
	scanf("%d", &c);

	//Lê os chutes dos minino
	for (i = 0; i < c; ++i)
	{
		scanf(" %c", &letra);
		//Checa se a letra existe na mensagem
		if (!apareceu[letra - 65]) ok = 0;
			//Se não, ok = 0 e Cabeças vão rolar
		
	}

	//Imprime a saída
	if (ok) printf("Bucho Cheio!\n");
	else printf("Cabeças vão rolar\n");
	
	return 0;
}
