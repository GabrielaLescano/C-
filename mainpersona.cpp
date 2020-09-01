#include <iostream>

/*
- Crear un tipo de dato persona con atributos: dni, inicial_nombre, edad, si tiene gato, si tiene perro
	- Una vez creado el tipo de dato persona proceda a definirlo en la funcion main 
	- Luego asignar valores ficticios a esta variable/struct de las siguientes maneras:
		- Junto a la definicion
		- Igualandolo a otra variable/struct
		
	- De campo a campo, o en otras palabras de atributo a atributo//
*/ 

using namespace std;

#include "persona.hpp"

int main(){
	iniciar_menu();
	return 0;
}


//g++ -o struct struct.cpp persona.cpp -std=c++11