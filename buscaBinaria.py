
def buscaBinaria(vetor, item, tamanho):

	meio = 0
	inicio = 0
	fim = tamanho - 1

	while inicio <= fim:
		
		meio = (inicio + fim)/2

		if (item == vetor[meio]):			
			
			return meio
			

		elif (item > vetor[meio]):

			inicio = meio + 1
			

		else :

			fim = meio - 1
			

	return -1

