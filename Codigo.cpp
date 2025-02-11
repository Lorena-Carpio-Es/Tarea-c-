#pragma once

#include <iostream>


template <typename T>
class Nodo {
public:
	Nodo();
	void SetDato(T Valor);
	T GetDato();
	void SetExiste(bool Valor);
	bool GetExiste();

private:

	T dato;
	bool existe;

};

template<typename T>
inline Nodo<T>::nodo()
{
	existe = false;
}

template<typename T>
inline void Nodo<T>::SetDato(T Valor)
{
	dato = Valor;
}

template<typename T>
inline T Nodo<T>::GetDato()
{
	return dato;
}

template<typename T>
inline void Nodo<T>::SetExiste(bool Valor)
{
	existe = Valor;
}

template<typename T>
inline bool Nodo<T>::GetExiste()
{
	return existe;
}
