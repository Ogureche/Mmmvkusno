
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    cout << "1)" << endl;
    cin >> A >> B >> C;
    type1 a;
    a.show();
    a.Get_answer(); 
    cout << '\n';
    
    cout << "2)" << endl;
    cin >> A >> B >> C;
    type2(5).show();
    type2(5).Get_answer();
    cout << '\n';
    
    cout << "3)" << endl;
    cin >> A >> B >> C;
    type3(4).show();
    type3(4).Get_answer();
    cout << '\n';
    
    cout << "4)" << endl;
    cin >> A >> B >> C;
    type4(4, -2).show();
    type4(4, -2).Get_answer();
    cout << '\n';
    
    cout << "5)" << endl;
    cin >> A >> B >> C;
    type5(5, -3).show();
    type5(5, -3).Get_answer();
    cout << '\n';
    
    cout << "6)" << endl;
    cin >> A >> B >> C;
    type6(2, 6, -12).show();
    type6(2, 6, -12).Get_answer();
    cout << '\n';
    
    cout << "7)" << endl;
    cin >> A >> B >> C;
    type7(5).show();
    type7(5).Get_answer();
    cout << '\n';
    
    cout << "8)" << endl;
    cin >> A >> B >> C;
    type8(4,3).show();
    type8(4,3).Get_answer();
}