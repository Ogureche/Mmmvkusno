#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	circle A(0, 0, 0);
	circle B(0, 0, 0);
	circle C(0, 0, 0);

	float j1, j2, j3;

	cout << "x, y and radius of circle A\n: ";
	cin >> j1 >> j2 >> j3;
	A.set_circle(j1, j2, j3);

	cout << "x, y and radius of circle B\n";
	cin >> j1 >> j2 >> j3;
	B.set_circle(j1, j2, j3);

	cout << "x, y and radius of circle C\n";
	cin >> j1 >> j2 >> j3;
	C.set_circle(j1, j2, j3);

	cout << "\n";

	cout << "S of circle A - " << A.square() << "\n";
	cout << "S of circle B - " << B.square() << "\n";
	cout << "S of circle C - " << C.square() << "\n";

	float R, X, Y;

	A.get_circle(R, X, Y);
	if (B.check_circle(R, X, Y)) cout << "Circle A and B intersect\n";
	else cout << "Circle A and B dont intersect\n";

	B.get_circle(R, X, Y);
	if (C.check_circle(R, X, Y)) cout << "Circle B and C intersect\n";
	else cout << "Circle B and C dont intersect\n";

	C.get_circle(R, X, Y);
	if (A.check_circle(R, X, Y)) cout << "Circle A and C intersect\n";
	else cout << "Circle A and C dont intersect\n";

	float a, b, c;

	cout << "Print triangle (a,b,c)\n";
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c)) cout << "circle A can be entered in triangle\n";
	else cout << "circle A can not be entered in triangle\n";

	if (B.triangle_around(a, b, c)) cout << "circle B can be entered in triangle\n";
	else cout << "circle B can not be entered in triangle\n";

	if (C.triangle_around(a, b, c)) cout << "circle C can be entered in triangle\n";
	else cout << "circle C can not be entered in triangle\n";

	if (A.triangle_in(a, b, c)) cout << "triangle can be entered in circle A\n";
	else cout << "triangle can not be entered in circle A\n";

	if (B.triangle_in(a, b, c)) cout << "triangle can be entered in circle B\n";
	else cout << "triangle can not be entered in circle B\n";

	if (C.triangle_in(a, b, c)) cout << "triangle can be entered in circle C\n";
	else cout << "triangle can not be entered in circle C\n";

	return 0;
}