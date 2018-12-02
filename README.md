# Busca Binária

A **pesquisa** ou **busca binária** (em [inglês](https://pt.wikipedia.org/wiki/L%C3%ADngua_inglesa "Língua inglesa") _binary search algorithm_ ou _binary chop_) é um [algoritmo de busca](https://pt.wikipedia.org/wiki/Algoritmo_de_busca "Algoritmo de busca") em [vetores](https://pt.wikipedia.org/wiki/Vetor "Vetor") que segue o paradigma de [divisão e conquista](https://pt.wikipedia.org/wiki/Divis%C3%A3o_e_conquista "Divisão e conquista"). 
A busca binária parte do pré-suposto que o algoritmo está ordenado, então pode-se fazer a busca.

![Busca](https://ds055uzetaobb.cloudfront.net/image_optimizer/717403b1368376cb6f915e6b4beeb3a7ad54105e.gif)
__________________________________________________

# Algoritmo

<code>Busca_Binaria(vetor, itemBuscado, tamanhoVetor)
           
       inicio <- 0
       fim <- tamanho -1
       meio <- 0
     
       Enquanto inicio <= fim faça
       
        meio <- (inicio + fim)/2
        
        Se vetor[meio] for igual a itemBuscado
              retorna meio
         
        Se itemBuscado for maior do que vetor[meio]
              inicio <- meio + 1
        
         Senão
              fim <- meio - 1
</code>
______________________________________

# Olhando para o Vetor!

Vetor[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9}

Temos os índices de 0 à 8, inicial e final respectivamente. 

O cálculo para saber o meio é (inicio + fim) / 2, que nos retornará o valor 4, ou seja, o índice 4 onde encontra-se o valor 5,
 aí está definido nosso meio inicial tendo como base todo o vetor.
Perceba que agora temos do lado esquerdo do vetor os números {1, 2, 3, 4} e do lado direito, {6, 7, 8, 9}. 
Suponhamos que queremos buscar o número 8, Qual o cálculo que será feito?
_________________________________________________
# Encontrando o Número 8

<code> 
	Enquanto inicio <= fim faça
	 
        meio <- (inicio + fim)/2        
        Se vetor[meio] for igual a itemBuscado
              retorna meio
</code>
	
Claramente o item buscado é maior do que o número que encontra-se no índice do meio, então passa para a próxima condição:

<code>
	 Se itemBuscado for maior do que vetor[meio]
              inicio <- meio + 1
</code>

Agora vemos que esta condição é satisfeita, nosso início agora passa a ser meio + 1, ou seja, o índice 5, onde se encontra o valor 6. O lado esquerdo não mais será usado para a busca, nosso início passa a ser como citado acima. 
A última condição não é satisfeita, pois sabemos que o número é maior do que o vetor[meio].
______________________________________________

# Código em C

<code>

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
</code>
_______________________________________________

# Código em Python

<codigo>
	
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

</codigo>
