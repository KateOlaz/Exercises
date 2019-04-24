#include <iostream>
using namespace std;

// 3. POINT

class Point{
int x, y; 

public:
Point(intxx=0,intyy=0){x=xx;y=yy;}
int getX()const{return x;}
int getY()const{return y;}
void setX(const int xx){x=xx;}
void setY(const int yy){y=yy;}
};
