#include <stdio.h>

int main (void){
//declara��o de variaveis

int p = 10, i, x, j;
int v[10] = {1,6,2,2,5,2,6,7,2,6}; // vetor entrada
int novo, maior=0, aux, contador=0, numero;

/*
 O primeiro comando for serve para rodarmos nosso
 vetor em todas as suas posi��es, o segundo for, dentro
 do primeiro, vai rodar mais uma vez o mesmo vetor, e junto
 com o comando if, vai comparar os valores das diferentes
 posi��es, a fim de verificar repeti��o.
*/

for (i=0;i<p;i++){
        for(j=0;j<p;j++){

                //compara valores do mesmo vetor
                // para verificar a repeti��o

                if(v[i] == v[j]){

                        //contabiliza as repeti��es

                    contador++;
                }
            }
                if(contador > maior){

                        //armazena o valor com maior repeti��o

                    maior = contador;
                    numero = v[i];
        }
        // reinicializa as condi��es iniciais para a pesquisa
        contador = 0;
        j = 0;
}

// escreve na tela, as informa��es pedidas no programa

   printf("\n O numero com maior repeticao eh o %d.\n ele apareceu %d vezes.\n", numero, maior);

system ("pause");
return 0;
}

