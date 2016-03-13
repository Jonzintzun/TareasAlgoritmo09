#include<stdio.h>//para printf y getchar
#include<time.h>//para numeros aleatorios

void llenarArreglo(int *ap,int N){
	int i;

	srand(time(NULL));
	for(i=0;i<N;i++){

			ap[i] =rand()%100;
		
	}

}


void imprimeEnteros(int *ap,int N){
	int i;

	if(N>0){

         for(i=0;i<N;i++){
         	printf("Los numeros son: %d \n\n",ap[i]);
         }


		}else{
			printf("NO SE PUEDE PROCEDER\n\n");
		}

}


int enteroMayor(int *ap,int N){
	int i,max=0;

	for(i=0;i<N;i++){

		if(ap[i]>max){
			max=ap[i];
		}
		
	}
	
	return max;
    
}


int enteroMenor(int *ap,int N){
	int i,men=0;

	for(i=0;i<N;i++){

		if(ap[i]<*ap){
			*ap=ap[i];
		}

	}
	return *ap;

}


int sumatoria(int *ap,int N){
	int i,suma=0;

	for(i=0;i<N;i++){
		
			suma=suma+ap[i];

	}
	return suma;



}