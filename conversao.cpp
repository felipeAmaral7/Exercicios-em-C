#include <stdio.h>
#include <string.h>

int main(void){
	double conversaoC, conversaoF, conversaoK, celsiusNumber, fahrenheitNumber, kelvinNumber;
	char unidade[15];
	char celsius[15] = "Celsius";
	char fahrenheit[15] = "Fahrenheit";
	char kelvin[15] = "Kelvin";
	char novamente;
	bool digiteNovamente;
	
	printf("Digite qual unidade de temperatura voce deseja converter:\n");
	printf("Celsius\n");
	printf("Fahrenheit\n");
	printf("Kelvin\n");
	fflush(stdin);
	
	digiteNovamente = false;
	
	while(digiteNovamente == false){
	
		scanf("%s", &unidade);
		if(stricmp (celsius, unidade) == 0){	//compara se a unidade escrita foi em celsius
			printf("Digite o numero: \n");
			scanf("%lf", &celsiusNumber);
			fflush(stdin);
			
			conversaoF = (celsiusNumber * 9/5) + 32; 
			conversaoK = celsiusNumber + 273.15;
			printf("Seu numero em fahrenheit: %.2f\n", conversaoF);
			printf("Seu numero em kelvin: %.2f\n", conversaoK);
			digiteNovamente = true;
			
			printf("-----------------------------\n");
			printf("Deseja converter novamente?\n");
			printf("y or n?\n");
			scanf("%c", &novamente);
				if(novamente == 'y'){	//caso o usuario queira converter novamente
					digiteNovamente = false;
				}
			}
		else if(stricmp (fahrenheit, unidade) == 0){	//compara se a unidade escrita foi em fahrenheit
			printf("Digite o numero: \n");
			scanf("%lf", &fahrenheitNumber);
			fflush(stdin);
			
			conversaoK = ((fahrenheitNumber - 32) * 0.5 + 273.15);
			conversaoC = (fahrenheitNumber - 32) * 0.5;
			printf("Seu numero em Kelvin: %.2f\n", conversaoK);
			printf("Seu numero em Celsius: %.2f\n", conversaoC);
			digiteNovamente = true;
			
			printf("-----------------------------\n");
			printf("Deseja converter novamente?\n");
			printf("y or n\n?");
			scanf("%c", &novamente);
				if(novamente == 'y'){	//caso o usuario queira converter novamente
					digiteNovamente = false;
				}
			}
		else if(stricmp (kelvin, unidade) == 0){	//compara se a unidade escrita foi em kelvin
			printf("Digite o numero: \n");
			scanf("%lf", &kelvinNumber);
			fflush(stdin);
			
			conversaoC = kelvinNumber - 273;
			conversaoF = ((kelvinNumber - 273) * 1.8) + 32;
			printf("Seu numero em fahrenheit: %.2f\n", conversaoF);
			printf("Seu numero em celsius: %.2f\n", conversaoC);
			digiteNovamente = true;
			
			printf("-----------------------------\n");
			printf("Deseja converter novamente?\n");
			printf("y or n\n?");
			scanf("%c", &novamente);
				if(novamente == 'y'){	//caso o usuario queira converter novamente
					digiteNovamente = false;
				}
			}
		else{
			printf("Tente novamente\n");
			}
	}
	
	return 0;
}
