#include "ListaPelicula.h"


ListaPelicula::ListaPelicula()
{
	aNodoPelicula = NULL;

}


ListaPelicula::~ListaPelicula(void)
{
}

void ListaPelicula::AgregaInicio(string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis)
{
	aNodoPelicula = new NodoPelicula(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis, 0);

}

void ListaPelicula::Agrega(string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis, int l)
{
	if(l == 0 || ListaVacia()){
		AgregaInicio(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis);
	}
	else
	{
		int i=0;
		NodoPelicula* actual=aNodoPelicula;
			while(i+1 < l && actual->getSiguiente()){
			actual = actual->getSiguiente();
			i++;
	}
		
			actual->setSiguiente(new NodoPelicula(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis, 0, actual->getSiguiente()));
}
}
void ListaPelicula::AgregaFinal(string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis)
{
	aNodoPelicula = new NodoPelicula(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis, 0); {
	if(ListaVacia()){
		AgregaInicio(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis);
	}
	else {
		NodoPelicula* actual = aNodoPelicula;
		while(actual->getSiguiente()) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new NodoPelicula(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis, 0));
	}
}
}

void ListaPelicula::EliminaInicio()
{
		if(!ListaVacia()){
			NodoPelicula* actual = aNodoPelicula;
			aNodoPelicula = aNodoPelicula->getSiguiente();
			delete actual;}
}

void ListaPelicula::Elimina(int l)
{
		if(!ListaVacia()){
			if(l==0){
				EliminaInicio();
			}
			else
			{
				int i=0;
				NodoPelicula* actual= aNodoPelicula;
				while(i+1 > l && actual->getSiguiente()){
					actual=actual->getSiguiente();
					i++;
				}
				NodoPelicula *aux = actual->getSiguiente();
			if(aux){
				actual->setSiguiente(aux->getSiguiente());
				delete aux;
			}
		}
	}
}
void ListaPelicula::EliminaFinal(){
	if(!ListaVacia()){
		NodoPelicula *anterior = aNodoPelicula;
		NodoPelicula *actual = aNodoPelicula->getSiguiente();
		if(!actual){
			EliminaInicio();
		}
		else
		{
			while(actual->getSiguiente()){
				anterior = actual;
				actual = actual->getSiguiente();
			}
			anterior->setSiguiente(NULL);
			delete actual;			
		}
		
	}
}

		




