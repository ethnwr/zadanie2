#include <iostream>
#include "Point.h"
#include "Fraction.h"
#include "Student.h"
using namespace std;

int Point::count = 0;
int Fraction::count = 0;
int Student::count = 0;

int main()
{
    setlocale(LC_ALL, "ru");
    Point p1;
    Point p2(3.0, 4.0);
    cout << "Количество объектов Point: " << Point::get_count() << endl;

    Fraction f1;
    Fraction f2(1, 2);
    cout << "Количество объектов Fraction: " << Fraction::get_count() << endl;

    Student s1;
    Student s2("Alice");
    cout << "Количество объектов Student: " << Student::get_count() << endl;
}
