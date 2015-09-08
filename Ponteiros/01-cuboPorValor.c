//eleva uma variavel ao cubo utilizando uma chamada por valor//

#include <stdio.h>

int cuboPorValor(int);

main(){
	int numero;
	scanf("%d",&numero);
	numero = cuboPorValor(numero);
	printf("%d",numero);
}

int cuboPorValor(int valor){
	return valor*valor*valor;
}
