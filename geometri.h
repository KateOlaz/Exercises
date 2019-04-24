#include <iostream>
using namespace std;

// POINTARRAY 4.1

Class PointArray{
	int size;
	Point *points;

	void resize(int size);
public:
	PointArray ();                               //constructor sin argumentos
	PointArray(const Point pts[],const int size);
	PointArray(const PointArray &pv);	     //constructor copia 
	~PointArray ();
	void clear();				     //eliminar todos los elementos y el tamaño del array = 0 
	int getSize ()const {return size;}	     //optener el tamaño del array
	void push_back(const Point &p);		     //agregar un punto al final del array
	void insert(const int pos ,const Point &p);  //insertar un punto en la posicion indicada y desplanzando los elementos a la derecha  
	void remove(const int pos);		     //eliminar el punto en la posicion indicada y desplazar los elementos a la izquierda
	Point *get(const int pos);		     //optener un puntero a un elemento arbitrario  
	const Point *get(const int pos) const;
};
