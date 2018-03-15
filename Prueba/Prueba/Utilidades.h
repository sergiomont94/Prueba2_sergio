#pragma once
#ifndef UTILIDADES_H
#define UTILIDADES_H

struct nodo
{
	int valor;
	nodo *sig();
	nodo *ant();
};

class UtilidadesListaEnlazada {

public:
	static void InsertarFinal(nodo **, int);
	static  nodo ** CrearLista(int);
	static void OrdenarLista(nodo *&KB);
	static void GuardarLista(nodo*&KB, char*);

};



#endif // !UTILIDADES_H

