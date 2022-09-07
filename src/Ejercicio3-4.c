/*
 ============================================================================
 Name        : Ejercicio3-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int ParOImpar(int numero);
int main(void) {
	setbuf(stdout, NULL);
	//Ejercicio 3-3: Crear una función que permita determinar si un número es par o no.La
	//función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
	ParOImpar(4);

	return EXIT_SUCCESS;
}

int ParOImpar(int numero){
	if(numero%2 ==0){
		return 1;
	}else{
		return 0;}
};
