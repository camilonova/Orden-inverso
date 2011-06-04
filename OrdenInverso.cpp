#include <iostream.h>
#include <stdio.h>
#include <string.h>

void reverse(char *);

/*	Programa que lee un numero y lo muestra en orden inverso	*/

void main() {
	int tam;
	char numeroStr[80];
	char continuar;

	cout<< "\nBienvenido, digite un numero para ser invertido" << endl;

	do{
		cout<< "\nDigite un numero:\t";
		cin>> numeroStr;

		tam = strlen(numeroStr);

		if(tam > 4 && tam < 8){
			reverse(numeroStr);
		}
		else
			cout<< "\n\nEl numero ha de tener entre 4 y 8 cifras" << endl;

		cout<< "\nDesea continuar invirtiendo numeros? (S/N)\t";
		cin>> continuar;

	} while(continuar == 's' || continuar == 'S');
}

/* Funcion recursiva que imprime al reves la cadena pasada por parametro */
void reverse(char *s){
	if(s[0] == '\0')
		return;
	else {
		reverse(&s[1]);
		cout<< s[0];
	}
}
