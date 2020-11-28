
#include <stdio.h>
typedef struct lista_encadeada;

lista_encadeada {
	int elemento;
	lista_encadeada *proximo;
};

int main(){
	int z = 20;
	lista_encadeada x;
	x.elemento = 10;
	x.proximo = &z;
	printf("%d %d %d %d",x.elemento, x.proximo );
}
