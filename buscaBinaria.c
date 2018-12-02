#include <stdio.h>
#include <stdio.h>



int buscaBinaria(int vetor[], int item, int tamanho){

	int inicio = 1;
	int fim = tamanho - 1;
	int meio;

	while (inicio <= fim){
		
		meio = (inicio + fim) / 2;

		if (vetor[meio] == item ){

			return meio;
			
		}
		if (item > vetor[meio]){

			inicio = meio + 1;
			
		}
		else{

			fim = meio - 1;

		}
	}

	return -1;

}

