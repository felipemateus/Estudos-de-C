//Eleva uma variavel ao cubo utilizando uma chamda por refer�ncia//

#include <stdio.h>

void cuboPorReferencia(int*);

main(){
	int numero;
	scanf("%d",&numero);
	cuboPorReferencia(&numero);
	printf("%d\n",numero);
}

void cuboPorReferencia(int *valor){
	*valor=(*valor)*(*valor)*(*valor);
}

 
