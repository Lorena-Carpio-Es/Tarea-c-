#pragma once

#include <iostream>


template <typename T>
class nodo {
public:
	nodo();
	void setDato(T Valor);
	T getDato();
	void setExist(bool Valor);
	bool getExist();

private:

	T dato;
	bool existe;

};

template<typename T>
inline nodo<T>::nodo()
{
	existe = false;
}

template<typename T>
inline void nodo<T>::setDato(T Valor)
{
	dato = Valor;
}

template<typename T>
inline T nodo<T>::getDato()
{
	return dato;
}

template<typename T>
inline void nodo<T>::setExist(bool Valor)
{
	existe = Valor;
}

template<typename T>
inline bool nodo<T>::getExist()
{
	return existe;
}
