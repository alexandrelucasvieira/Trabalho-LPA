#include<stdio.h>
#include<stdlib.h>

void bubblesort(int vet[] , int n) //funcao que ordenara o vetor
{
	int x, j, i;
	for(j=0; j < n - j; j++) //percorre o vetor
	{
		for (i=0; i<n-j-1;i++) /*percorre o vetor e compara os elementos com os proximos.
		Caso o proximo elemento for menor, troca as posicoes*/
		{
			if (vet[i+1] < vet[i])
			{
            x = vet[i+1];
			vet[i+1] = vet[i];
			vet[i] = x; //troca efetuada
			}
		}
	}
}

int unique(int vet[], int n) //checando os elementos unicos da lista
	{
    int i, cont = 0;
	printf("O(s) elemento(s) unico(s) eh(sao) o(s):");
	if (vet[0] != vet[1]) //checando se o primeiro elemento eh unico
	{
	printf("\n%d", vet[0]);
	cont++; /* a variavel "cont" eh usada para saber o numero de elementos unicos */
	}
	for (i = 1 ; i < n-1 ; i++)
	{
		if (vet[i] != vet[i-1] && vet[i] != vet[i+1]) //compara o elemento com os laterais para checar se nao sao iguais
		{
		printf("\n%d", vet[i]); //imprime os elementos unicos
		cont++;
		}
	}
	if (vet[n-1] != vet[n-2] && n > 1) //checa se o ultimo eh unico
	{
	printf("\n%d", vet[n-1]);
	cont++;
	}
	if (cont == 0)
	{
	printf("\nNao existem elementos unicos");
	}
	return 0;
}

int main()
{
	int i, n, *vet;
	printf ("Digite o tamanho do vetor:\n"); //determina o tamanho do vetor
	scanf("%d", &n);
	while (n<1)
	{
		printf("Entre com um numero maior do que 0\n");//para que nao haja erro no programa
		scanf("%d", &n);
	}
	vet=(int *)malloc(n*sizeof(int)); //aloca a memoria necessaria
	for (i=0; i<n; i++)
	{
		printf("Entre com o elemento %d:\n", i+1);
		scanf("%d", &vet[i]); //armazena os elementos em cada posicao do vetor
	}
	bubblesort(vet, n); //ordena o vetor
	unique(vet, n); //checa a existencia de numeros unicos
	free(vet); //libera a memoria alocada
}
