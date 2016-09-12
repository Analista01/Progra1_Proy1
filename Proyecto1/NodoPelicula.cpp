#include "NodoPelicula.h"

//Constructor de la clase, se crea el apuntador  a la clase que contiene la informacion de la pelicula
//Ademas se le pasan por parametro todos los elementos que requiere la clase Infopelicula para alamacenar dicha informacion
//Por otro lado se inicializa el puntero aSiguiente en NULL para que posteriormente pueda cumplir su proposito en la lista de la pelicula
NodoPelicula::NodoPelicula(string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis, int l)
{
	aInfoPelicula = new InfoPelicula(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis);
	aSiguiente = NULL;
}

//Destructor del nodo
NodoPelicula::~NodoPelicula(void)
{
}

//metodo que se encarga de modificar el valor del apuntador siguiente
void NodoPelicula::setSiguiente(NodoPelicula* pSiguiente)
{
	aSiguiente = pSiguiente;
}

//metodo que se encarga de retornar el valor del apuntador siguiente
NodoPelicula* NodoPelicula::getSiguiente()
{
	return aSiguiente;
}