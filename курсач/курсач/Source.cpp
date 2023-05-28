#include <iostream>
#include <cmath>
#include"Header.h"
#include <windows.h>
#include <iomanip>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

void type1::Get_answer() {
    cout << "������� �������� ����� �������� �" << endl;
}
void type1::show() {
    cout << "��������� 0 = 0" << endl;
}
void type1::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}


type2::type2(double a1) {
    A = a1;
}
void type2::Get_answer() {
    cout << "������� �������� � = 0" << endl;
}
void type2::show() {
    cout << "��������� " << A << "*x^2 = 0" << endl;
}
void type2::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}



type3::type3(double c1) {
    C = c1;
}
void type3::Get_answer() {
    cout << "������ ���" << endl;
}
void type3::show() {
    cout << C << " = 0" << endl;
}
void type3::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}




type4::type4(double a1, double c1) {
    A = a1;
    C = c1;
}
void type4::Get_answer() {
    double k = ((-1) * C) / A;
    if (k >= 0) {
        double x1 = sqrt(k);
        double x2 = sqrt(k) * (-1);
        cout << "����� ���������: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
    }
    else {
        cout << "������ ���" << endl;
    }
}
void type4::show() {
    cout << "��������� " << A << "*x^2 + " << C << " = 0" << endl;
}
void type4::Get_answer_podbor() {
    if ((((-1) * C) / A) < 0) {
        cout << "������ ������� ������� ���" << endl;
    }
    else {
        double min = abs(0 - A * (-20) * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - A * (i) * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }
}
void type4::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}




type5::type5(double b1, double c1) {
    B = b1;
    C = c1;
}
void type5::Get_answer() {
    cout << "������ ���������: " << (-1) * (C / B) << endl;
}
void type5::show() {
    cout << "��������� " << B << "*x + " << C << " = 0" << endl;
}
void type5::Get_answer_podbor() {
    double min = abs(0 - B * (-20) - C);
    double x = -20;
    for (double i = -20; i < 20.01; i = i + 0.01) {
        double temp = abs(0 - B * (i)-C);
        if (temp < min) {
            min = temp;
            x = i;
        }
    }
    cout << "�����������, ���� �� ������ ���������: " << x << endl;
}
void type5::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}




type6::type6(double a1, double b1, double c1) {
    A = a1;
    B = b1;
    C = c1;
}
void type6::Get_answer() {
    double D = B * B - 4 * A * C;
    if (D < 0) {
        cout << "��������� �� ����� �������������� ������" << endl;
    }
    else {
        if (D == 0) {
            double x = ((-1) * B - sqrt(D)) / (2 * A);
            cout << "������ ���������: " << x << endl;
        }
        else {
            double x1 = ((-1) * B - sqrt(D)) / (2 * A);
            double x2 = ((-1) * B + sqrt(D)) / (2 * A);
            cout << "����� ���������: " << endl;
            cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
    }
}
void type6::show() {
    cout << "��������� " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
}
void type6::Get_answer_podbor() {
    double D = B * B - 4 * A * C;
    if (D < 0) {
        cout << "��������� �� ����� �������������� ������" << endl;
    }
    else {
        double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - A * (i) * (i)-B * i - C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }
}
void type6::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}




type7::type7(double b1) {
    B = b1;
}
void type7::Get_answer() {
    cout << "������ ���������: x = 0" << endl;
}
void type7::show() {
    cout << "��������� " << B << "*x = 0" << endl;
}
void type7::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}




type8::type8(double a1, double b1) {
    A = a1;
    B = b1;
}
void type8::Get_answer() {
    double x = ((-1) * B) / A;
    cout << "����� ���������: " << endl;
    cout << "X1 = 0" << endl << "X2 = " << x << endl;
}
void type8::show() {
    cout << "��������� " << A << "*x^2 + " << B << "*x = 0 " << endl;
}
void type8::Get_answer_podbor() {
    double min = abs(0 - A * (-20) * (-20) - B * (-20));
    double x = -20;
    for (double i = -20; i < 20.01; i = i + 0.01) {
        if (i != 0) {
            double temp = abs(0 - A * i * i - B * (i));
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
    }
    cout << "�����������, ���� �� ������ ���������: " << x << endl;
}
void type8::MeasureTime() {
    auto start = high_resolution_clock::now();

    Get_answer();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "����� ���������� ������� Get_answer(): " << duration.count() << " �����������" << endl;
}



void inter::setConsoleWindowSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT rect = { 0, 0, width - 1, height - 1 };
    COORD size = { width, height };
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
    SetConsoleScreenBufferSize(hConsole, size);
};




void inter::centerTextWithFrame(const string& text)
{
    int screenWidth = GetSystemMetrics(SM_CXSCREEN); // �������� ������ ������
    int frameWidth = 60; // ������ �����

    int paddingWidth = (frameWidth - text.length()) / 2;

    // ����� �����

    HANDLE aConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(aConsole, FOREGROUND_BLUE);
    for (int i = 0; i < frameWidth; ++i)
    {
        cout << "-";
    }

    SetConsoleTextAttribute(aConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    cout << endl;

    // ����� ������ � ������������� �� ������ � �������� �����
    HANDLE textConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(textConsole, FOREGROUND_GREEN);
    cout << setw(paddingWidth) << "" << text << endl;

    HANDLE YConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(YConsole, FOREGROUND_BLUE);
    // ����� �����
    for (int i = 0; i < frameWidth; ++i)
    {
        cout << "-";
    }

    SetConsoleTextAttribute(YConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    cout << endl;
}




void inter::waitForExit()
{
    //std::cout << "������� ����� �������, ����� ������� ��� ����...";
    std::cin.ignore();
}


void inter::setConsoleFontSize(int fontSize)
{
    CONSOLE_FONT_INFOEX fontInfo;
    fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &fontInfo);
    fontInfo.dwFontSize.Y += fontSize; // ����������� ������ ������ �� �������� ��������
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &fontInfo);
}













string inter::Level1() {
    string output;

    double A, B, C;

    while (true) {
        HANDLE WConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(WConsole, FOREGROUND_GREEN);
        string s1 = "�������� ��������:";
        string s2 = "1. �������� ��� ���������";
        string s3 = "2. ����� �� ����������";
        string s4 = "�����: ";
        centerTextWithFrame(s1);
        centerTextWithFrame(s2);
        centerTextWithFrame(s3);
        SetConsoleTextAttribute(WConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << endl;
        cout << s4 << endl;


        std::string strchoice;
        int choice;

        std::cin >> strchoice;


        try {
            choice = std::stoi(strchoice);
            std::cout << "�� ����� �����: " << choice << std::endl;
        }
        catch (const std::invalid_argument& e) {
            system("cls");
            string er1 = "������:�������� ������";
            centerTextWithFrame(er1);
            break;
            Level3();  // ����� �� ��������� ��� ���������� ������ �������� � ������ ������
        }
        catch (const std::out_of_range& e) {

            system("cls");
            string er2 = "������: ����� ������� �� ������� ��������� ���� int.";
            centerTextWithFrame(er2);
            break;
            Level3();
        }


        if (choice == 1) {
            system("cls");
            Level2();

        }


        else if (choice == 2) {
            waitForExit();
            cout << "" << endl;
            system("cls");

            setConsoleFontSize(15);
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                           ����������� �������� ������:)" << std::endl;

            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            waitForExit();
            break;
        }
        else {


            system("cls");

            string s1 = "������ �����,���� ��������������";
            centerTextWithFrame(s1);

            Level1();
            //throw std::runtime_error("�������� �����"); // ������� ����������
        }

    }
    return output;
};

string inter::Level2() {
    string output;
    // ������ ������ 2

    while (true) {


        HANDLE WConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(WConsole, FOREGROUND_GREEN);
        string s1 = "1. ��������� ����: 0=0 ";
        string s2 = "2. ��������� ����: Ax^2 = 0 ";
        string s3 = "3. ��������� ����: x^2 + C = 0 ";
        string s4 = "4. ��������� ����: Ax^2 + x + � = 0";
        string s5 = "5. ��������� ����: x^2 + B*x + C = 0";
        string s6 = "6. ��������� ����: Ax^2 + B*x + C = 0";
        string s7 = "7. ��������� ����: x^2 + Bx = 0";
        string s8 = "8. ��������� ����: Ax^2 + Bx=0";
        centerTextWithFrame(s1);
        centerTextWithFrame(s2);
        centerTextWithFrame(s3);
        centerTextWithFrame(s4);
        centerTextWithFrame(s5);
        centerTextWithFrame(s6);
        centerTextWithFrame(s7);
        centerTextWithFrame(s8);


        string s0 = "0.�����";
        centerTextWithFrame(s0);

        SetConsoleTextAttribute(WConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        std::cout << "�����: ";



        double A, B, C;

        std::string strchoice;
        int choice;

        std::cin >> strchoice;


        try {
            choice = std::stoi(strchoice);
            std::cout << "�� ����� �����: " << choice << std::endl;
        }
        catch (const std::invalid_argument& e) {
            system("cls");
            string er1 = "������:�������� ������";
            centerTextWithFrame(er1);

            Level3();  // ����� �� ��������� ��� ���������� ������ �������� � ������ ������
        }
        catch (const std::out_of_range& e) {

            system("cls");
            string er2 = "������: ����� ������� �� ������� ��������� ���� int.";
            centerTextWithFrame(er2);

            Level3();
        }



        if (choice == 1) {
            system("cls");
            cout << "������� ����������: " << endl;
            cin >> A;
            type1 eq1;
            eq1.show();
            eq1.Get_answer();
            Level3();

        }
        else if (choice == 2) {
            system("cls");
            cout << "������� ���������� A: " << endl;
            cin >> A;
            type2 eq2(A);
            eq2.show();
            eq2.Get_answer();
            Level3();
        }
        else if (choice == 3) {
            system("cls");
            cout << "������� ���������� C: " << endl;
            cin >> C;
            type3 eq3(C);
            eq3.show();
            eq3.Get_answer();
            Level3();

        }
        else if (choice == 4) {
            system("cls");
            cout << "������� ����������� A � C: " << endl;
            cin >> A;
            cin >> C;
            type4 eq4(A, C);
            eq4.show();
            eq4.Get_answer();
            eq4.Get_answer_podbor();
            Level3();

        }
        else if (choice == 5) {
            system("cls");
            cout << "������� ���������� B � C: " << endl;
            cin >> B;
            cin >> C;
            type5 eq5(B, C);
            eq5.show();
            eq5.Get_answer();
            eq5.Get_answer_podbor();
            Level3();

        }
        else if (choice == 6) {
            system("cls");
            cout << "������� ����������� A,B � C ����� ������: " << endl;
            cin >> A;
            cin >> B;
            cin >> C;
            type6 eq6(A, B, C);
            eq6.show();
            eq6.Get_answer();
            eq6.Get_answer_podbor();
            Level3();

        }
        else if (choice == 7) {
            system("cls");
            cout << "������� ���������� B: " << endl;
            cin >> B;
            type7 eq7(B);
            eq7.show();
            eq7.Get_answer();
            Level3();

        }
        else if (choice == 8) {
            system("cls");
            cout << "������� ����������� A � B: " << endl;
            cin >> A;
            cin >> B;
            type8 eq8(A, B);
            eq8.show();
            eq8.Get_answer();
            eq8.Get_answer_podbor();
            Level3();

        }
        else if (choice == 0) {
            system("cls");

            Level1();
        }


        else {
            system("cls");


            string s8 = "������ �����,���� ��������������";
            centerTextWithFrame(s8);

            Level2();
        }


    }


    return output;
};

string inter::Level3() {
    string output;
    while (true) {
        HANDLE WConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(WConsole, FOREGROUND_GREEN);
        string s1 = "�������� ��������:";
        string s2 = "1. ����������";
        string s3 = "2. ������� ����";
        string s4 = "3. ����� �� ����������";
        string s5 = "�����: ";
        centerTextWithFrame(s1);
        centerTextWithFrame(s2);
        centerTextWithFrame(s3);
        centerTextWithFrame(s4);
        SetConsoleTextAttribute(WConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << endl;
        cout << s5 << endl;


        std::string strchoice;
        int choice;

        std::cin >> strchoice;


        try {
            choice = std::stoi(strchoice);
            std::cout << "�� ����� �����: " << choice << std::endl;
        }
        catch (const std::invalid_argument& e) {
            system("cls");
            string er1 = "������:�������� ������";
            centerTextWithFrame(er1);

            Level3();  // ����� �� ��������� ��� ���������� ������ �������� � ������ ������
        }
        catch (const std::out_of_range& e) {

            system("cls");
            string er2 = "������: ����� ������� �� ������� ��������� ���� int.";
            centerTextWithFrame(er2);

            Level3();
        }



        if (choice == 1) {
            system("cls");
            Level2();

        }

        else if (choice == 2) {
            system("cls");
            Level1();

        }


        else if (choice == 3) {
            waitForExit();
            cout << "" << endl;
            system("cls");
            setConsoleFontSize(15);
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                                               " << std::endl;
            std::cout << "                                           ����������� �������� ������:)" << std::endl;

            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            waitForExit();
            break;
        }
        else {
            system("cls");


            string s8 = "������ ������,���� ��������������";
            centerTextWithFrame(s8);

            Level3();
        }


    }
    return output;
};


