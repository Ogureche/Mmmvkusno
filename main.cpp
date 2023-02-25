#include <iostream>
#include <cmath>
#include <Traingle.h>

using namespace std;

int main()
{
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Vvedite a, b u c dlya treugolnika abc " << i + 1 << "cherez probel: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "Treugolnika c takimi storonami ne suchestvuet, try again" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "P treugolnika: " << mas[i].perimetr() << endl;
        cout << "S treugolnika: " << mas[i].square() << endl;
    }
    return 0;
}