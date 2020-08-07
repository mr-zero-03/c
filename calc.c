#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void operation(int option){
	float n,n2,r;
	printf("Ingrese el número: ");
	scanf("%f", &n);
	if(option != 6){
		printf("Ingrese el ");
		if(option == 5){
			printf("número al que se le elevará: ");
		}else{
			printf("segundo numero: ");
		}
    scanf("%f", &n2);
  }

	
	switch(option){
		case 1:		//Suma
			r=n+n2;
		break;
		case 2:		//Resta
			r=n-n2;
		break;
		case 3:		//Multiplicación
			r=n*n2;
		break;
		case 4:		//Dividir
			r=n/n2;
		break;
		case 5:		//Potenciar
			r=n; 
			for (int i=1; i<n; i++){
				r=r*n;
			}
		break;
		case 6:		//Radicar
			n=sqrt(n);
			r=n;
		break;
	}
	printf("\nEl resultado es: %f", r);
}

void menu(){
	int option;
	do{
		printf("\n-------------------------------------");
		printf("\n 	       CALC \n");
		printf ("1. Sumar \n");
		printf ("2. Restar \n");
		printf ("3. Multiplicar \n");
		printf ("4. Dividir \n");
		printf ("5. Potenciar \n");
		printf ("6. Radicar \n");
		printf ("7. Salir");
		printf("\n-------------------------------------");
		printf ("\nElija su opcion: ");
		scanf("%i",&option);
    printf("\n");
		switch (option){
			case 1 ... 6:
				operation(option);
			break;
			case 7:
				printf("Gracias por usar");
      break;
			default:
				printf("Opcion no valida");
		}
    printf("\n");
	}while(option != 7);
}

int main(){
	menu();
	
	return (0);
}