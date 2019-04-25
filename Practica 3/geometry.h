//POINT

class Point {
int x, y; 

public:
Point(int xx=0,int yy=0){x = xx; y = yy;}
int getX()const{return x;}
int getY()const{return y;}
void setX(const int xx){x = xx;}
void setY(const int yy){y = yy;}
};


//POINTARRAY

class PointArray {
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


// POLYGON 5.1.1

class Polygon {
protected:
	static int numPolygons;
	PointArray points;

public:
	Polygon(const PointArray &pa);			    //constructor copia
	Polygon(const Point points[], const int numPoints); //constructor con argumentos
	virtual double area() const = 0;		    //calcula el area como "double"
	static int getNumPolygons(){return numPolygons;}    //cantidad de poligonos que existen actualmente
	int getNumSides() const{return points.getSize();}   //retorna la cantidad de lados del poligono
	const PointArray *getPoints() const{return &points;}//retorna un puntero no modificable al array
	~Polygon(){--numPolygons;}			    //destructor
};

//RECTANGLE

class Rectangle : public Polygon {

public :
	Rectangle(const Point &a, const Point &b);

	Rectangle (const int a, const int b, const int c, const int d);
	virtual double area() const ;
};

//TRIANGLE

class Triangle : public Polygon {
public :
	Triangle ( const Point &a , const Point &b , const Point &c);
	virtual double area() const ;
};
