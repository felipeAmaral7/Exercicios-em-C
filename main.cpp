#include <stdio.h>
#include <string.h>


int main(void){
	
	char palavras[10] = "palavra";
	char tentativa[50];
	bool acertou;
	int cont;
	
	
	acertou = 0;
	cont = 1;
	printf("Tente acertar a palavra secreta! voce tera 5 chances :)\n");
	while(cont < 5 && acertou == 0){
		scanf("%s", &tentativa);
		if(strcmp (palavras, tentativa) == 0){
			acertou = true;
		}
		else{
			printf("Tente novamente :(\n");
		}
		cont++;
	}
	if(acertou){
		printf("Parabens, voce acertou a palavra! :)");
	}
	else{
		printf("Infelizmente, voce nao conseguiu acertar a palavra secreta :(");
	}
	
	return 0;
}
