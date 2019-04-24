// POLYGON AND FRIENDS
// POLYGON 5.1.1

class Polygon{
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
