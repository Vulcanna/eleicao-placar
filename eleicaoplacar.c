#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador,contador12=0,contador13=0,contador22=0,contador44=0,contador45=0,contadorNulo=0;
	
	char votos[10][3];

	char numPartido[5][3] = {"12", "13", "22", "44"};
	char nomePartido[5][31] = {"PDT", "PT", "PL", "União Brasil"};
	char nomeCandidato[5][51] = {"Ciro Gomes", "Luiz Inácio Lula", "Jair Bolsonaro", "Sérgio Moro"};
	int contagem[5];
	printf("-----------------------------------");
	printf("\n           Eleições 2022           ");
	printf("\n-----------------------------------");
	printf("\nOpções:   12- CIRO GOMES   13- LUIZ INACIO DA SILVA   22- JAIR BOLSONARO   44- SERGIO MORO");
	printf("\nDigite seu voto: ");
	scanf("%s",votos[0]);
	
	if(strcmp(votos[0],numPartido[0])==0){
		contador12++;
	}
	else if(strcmp(votos[0],numPartido[1])==0){
		contador13++;
	}
	else if(strcmp(votos[0],numPartido[2])==0){
		contador22++;
	}	
	else if(strcmp(votos[0],numPartido[3])==0){
		contador44++;
	}
	else if(strcmp(votos[0],numPartido[4])==0){
		contador45++;
	}
	else{
		contadorNulo++;
	}
	
	contagem[0]=contador12;
	contagem[1]=contador13;
	contagem[2]=contador22;
	contagem[3]=contador44;
	contagem[4]=contador45;
	
	for (contador = 0; contador<5; contador++){
		printf("\n %s - %s - %s = %i",numPartido[contador],nomePartido[contador],nomeCandidato[contador],contagem[contador]);
	}
	
	

}

