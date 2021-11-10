#include "persona.hpp"

int mostrar_menu(){
	int opcion_recib = DEF_OPC;
	cout<<"\t\tMenu"<<endl;
	cout<<"\t-Agregar nombre [1]"<<endl;
	cout<<"\t-Mostrar nombre [2]"<<endl;
	cout<<"\t-Agregar edad [3]"<<endl;
	cout<<"\t-Mostrar edad [4]"<<endl;
	cout<<"\t-Agregar DNI [5]"<<endl;
	cout<<"\t-Mostrar DNI [6]"<<endl;
	cout<<"\t-Agregar si tiene perro [7]"<<endl;
	cout<<"\t-Agregar si tiene gato [8]"<<endl;
	cout<<"\t-Salir		[0]"<<endl;
	cin >> opcion_recib;
	return opcion_recib;
}

string opc_agregar_nombre(){
	string nombre_recib = DEF_NOMBR;
	cout<<"Ingrese un nombre:"<<endl;
	cin>> nombre_recib;
	return nombre_recib;
}

void opc_mostrar_nombre(persona_t persona){
	cout << "El nombre ingresado es: " << persona.nombre << endl;
}

int opc_agregar_edad(){
	int edad_recib = DEF_EDAD;
	cout<<"Ingrese edad:"<<endl;
	cin>> edad_recib;
	return edad_recib;
}

void opc_mostrar_edad(persona_t persona){
	cout << "La edad ingresada es: " << persona.edad << endl;
}

int opc_agregar_dni(){
	int dni_recib = DEF_DNI;
	cout<<"Ingrese DNI:"<<endl;
	cin>> dni_recib;
	return dni_recib;
}

void opc_mostrar_dni(persona_t persona){
	cout << "El DNI ingresado es: " << persona.dni << endl;
}

bool opc_agregar_perro(){
	bool ingreso_perro_recib = DEF_TIENE_PERRO;
	cout<<"Tiene perro/os?: Si [1] 	No [2]"<<endl;
	cin>> ingreso_perro_recib;
	return ingreso_perro_recib;
}

bool opc_agregar_gato(){
	bool ingreso_gato_recib = DEF_TIENE_GATO;
	cout<<"Tiene gato/os?: Si [1] 	No [2]"<<endl;
	cin>> ingreso_gato_recib;
	return ingreso_gato_recib;
}

persona_t ejecutar_opcion(int opcion_eleg, persona_t persona){
	switch(opcion_eleg){
		case OPC_AGREGAR_NOMBRE:
			persona.nombre = opc_agregar_nombre();
			break;
		case OPC_MOSTRAR_NOMBRE:
			opc_mostrar_nombre(persona);
			break;
		case OPC_AGREGAR_EDAD:
			persona.edad = opc_agregar_edad();
			break;
		case OPC_MOSTRAR_EDAD:
			opc_mostrar_edad(persona);
			break;
		case OPC_AGREGAR_DNI:
			persona.dni = opc_agregar_dni();
			break;
		case OPC_MOSTRAR_DNI:
			opc_mostrar_dni(persona);
			break;
		case OPC_AGREGAR_PERRO:
			persona.tiene_perro = opc_agregar_perro();
			break;
		case OPC_AGREGAR_GATO:
			persona.tiene_gato = opc_agregar_gato();
			break;
		case OPC_SALIR:
			cout<<"Finalizando..."<<endl;
			break;
		default:
			cout<<"Ingreso incorrecto."<<endl;
	}
	return persona;
}

void iniciar_programa() {
	int opcion = DEF_OPC;
	persona_t alguien;
	do{
		opcion = mostrar_menu();
		alguien = ejecutar_opcion(opcion, alguien);
	} while (opcion != OPC_SALIR);
}
