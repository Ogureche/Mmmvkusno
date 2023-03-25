#include <cmath>
#include <iostream>>

using namespace std;

class Cone 
{
private:
	const double pi = 3.14159265;
    double x, y, z;        // трехмерные координаты
    double R;         // радиус
    double H;         // высота
public:
    // Конструктор по умолчанию
    Cone()
	{ 
		x=0;
		y=0;
		z=0;
		R=0;
		H=0; 
	}
    // Конструктор с центром в начале координат
    Cone(double r, double h)
	{
        x=0;
        y=0;
        z=0;
        R=r;
        H=h;
    }
    // Конструктор для Cone
    Cone(double a, double b, double c, double r, double h) 
	{
        x = a;
        y = b;
        z = c;
        R = r;
        H = h;
    }
    
     // Функции доступа
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    void setCoordinate(double& a, double& b, double& c);
    double getRadius();
    double getHeight();
    
    // Объем
    double area();
    // Перегрузка оператора вывода
    double volume();
    
    friend ostream& operator<<(ostream& stream, Cone obj);
};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    