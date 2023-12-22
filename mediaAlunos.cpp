#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int quantNotas, cont;
	float notas, acumNotas, mediaFinal;
	printf("Digite a quantidade de notas: ");
	scanf("%d", &quantNotas);
	
	acumNotas = 0;
	for(cont = 0; cont < quantNotas; cont++){
		scanf("%f", &notas);
		acumNotas += notas;
	}
	mediaFinal = acumNotas / quantNotas;
	printf("A media final foi de: %f", mediaFinal);
	
	return 0;
}
