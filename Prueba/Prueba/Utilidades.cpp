#include "Utilidades.h"
#include "stdlib.h"
using namespace std;
#include <iostream>
#include <fstream>
#include <vector>


void UtilidadesListaEnlazada::InsertarFinal(nodo **inicio, int numero) {
	nodo *nuevo_nodo = new nodo();

	if (*inicio == 0)
	{
		(*inicio)->valor;
	}
	else {
		nodo *actual = *inicio;
		nodo *anterior = 0;

		while (actual != 0)
		{
			anterior = actual;
			actual = actual->sig;
		}

		(anterior->sig)->numero;
		nuevo_nodo->ant = anterior;
	}
}


nodo ** UtilidadesListaEnlazada::CrearLista(int valor) {

	nodo * lista = new nodo;

	int num = 0;
	if (valor <1)
	{
		cout << "numero no valido";
		return NULL;
	}
	else
	{
		for (int i = 0; i < valor; i++)
		{
			num = rand() % valor + 1;
			InsertarFinal(&lista, num);
		}
	}
	return &lista;
}

void UtilidadesListaEnlazada::OrdenarLista(nodo *& KB) {
	nodo *tmp = new nodo;
	vector<int> numeros;

	while (tmp != 0) {

		numeros.push_back(tmp->valor);
		tmp = tmp->sig;

	}
	int tempo = 0;
	for (int i = 0; i < sizeof(numeros); i++) {

		for (int j = 0; j < sizeof(numeros); j++) {
			if (numeros[i] > numeros[j]) {
				 tempo = numeros[i];
				numeros[j] = numeros[i];
				numeros[i] = tempo;
			}
		}
	}

	for (int i = 0; i < sizeof(numeros); i++) {
		cout << numeros[i] << ' ';
	}
}

void UtilidadesListaEnlazada::GuardarLista(nodo *& KB, char *nombre) {
	nodo *tmp = new nodo;

	ofstream writer(nombre);

	while (tmp !=0)
	{
		writer << tmp->valor << ' ';
		tmp = tmp->sig;
	}
}