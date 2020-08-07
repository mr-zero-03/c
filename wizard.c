#include <stdio.h>
#include <stdlib.h>


void program(){
	int guess=0, num=0;
	
	printf("\n---------------------------------------\n");						//Adivinador de número
	printf("                WIZARD\n\n");
	
	do{											//Captura de número
		printf("Ingrese el número a adivinar en un rango de 0-100: ");
		scanf("%i",&guess);
		if(guess < 0 || guess>100){
			printf("El número es invalido\n");
		}
	}while(guess < 0 || guess>100);
	system("clear");
	
	
	printf("\n---------------------------------------\n");
	printf("                WIZARD\n\n");
	do{											//Adivinar número
		printf("Digite un número del 0-100: ");
		scanf("%i",&num);
		if ((num>100) || (num<0)){
			printf ("El número que digitó es invalido\n");
		}else if(num<guess){
			printf("El número a adivinar es mayor\n\n");
		}else if (num>guess){
			printf("El número a adivinar es menor\n\n");
		}else if (num==guess){
			printf("Felicidades has adivinado el número!!!\n");
			printf("\n---------------------------------------\n");
		}
	}while(num!=guess);
}


int main(){
	int count=0;
	int option=1;
	do{
		if(count == 0){
			printf("\nBienvenido a Wizard, el adivinador de número\n\n");
			program();
			count=1;
		}else if(count==1){
			printf("\nPulsa 1 para seguir jugando\nPulsa 0 para salir\n");
			scanf("%i", &option);
			if(option==0){
				printf("Gracias por jugar");
			}else if(option==1){
				program();
			}else{
				printf("Opción invalida");
			}
			printf("\n");
		}
	}while(option != 0);

	return 0;	
}