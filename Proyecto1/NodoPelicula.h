#ifndef NodoPelicula_H
#define NodoPelicula_H

#pragma once
#include "InfoPelicula.h"

class NodoPelicula
{
private:
	InfoPelicula* aInfoPelicula;
	NodoPelicula* aSiguiente;

public:
	NodoPelicula(string, string, string, string, string, string, int);
	~NodoPelicula(void);
	void setSiguiente(NodoPelicula*);
	NodoPelicula* getSiguiente();
};
#endif
