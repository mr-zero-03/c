#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "wizard.h"

void menu(){
	int option=0;
	do{
		printf("\n------------------------------\n");
		printf("		WIZARD\n\n");
		printf("1. Jugar contra la máquina\n");
		printf("2. Dos jugadores\n");
		printf("3. Acerca del juego\n");
		printf("4. Salir\n");
		printf("------------------------------\n");
		printf("Digite su opción: ");
		scanf("%i", &option);
		printf("\n");
		
		switch(option){
			case 1:
				machine();
			break;
			case 2:
				twoPlayers();
			break;
			case 3:
				printf("El juego Wizard consiste en adivinar el número que da la máquina aleatoriamente o un jugador");
			break;
			case 4:
				printf("Gracias por usar");
			break;
			default:
				printf("Opción invalida");
		}
		printf("\n");
	}while(option != 4);
}

int main(){
	menu();
	
	return 0;
}
