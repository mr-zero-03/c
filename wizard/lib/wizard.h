void guessNumber(int guess){
	int num=0;
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
		}
	}while(num!=guess);
}

void machine(){
	srand(time(NULL));
	int guess = rand() % 101;
  
	guessNumber(guess);
}


void twoPlayers(){
	int guess=0;
	do{											//Captura de número
		printf("Ingrese el número a adivinar en un rango de 0-100: ");
		scanf("%i",&guess);
		if(guess < 0 || guess>100){
			printf("El número es invalido\n");
		}
	}while(guess < 0 || guess>100);
	system("clear");
	
	guessNumber(guess);
}
