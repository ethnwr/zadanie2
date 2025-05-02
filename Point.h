#pragma once
#include <iostream>

using namespace std;

class Point {
private:
    double x, y;
    static int count;

public:
    
    Point() : x(0), y(0) {
        count++;
    }

   
    Point(double x, double y) : x(x), y(y) {
        count++;
    }

   
    ~Point() {
        count--;
    }

    static int get_count() {
        return count;
    }
};;
