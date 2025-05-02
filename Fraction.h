#pragma once
#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator, denominator;
    static int count; 

public:
    
    Fraction() : numerator(0), denominator(1) {
        count++;
    }

    Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {
        count++;
    }

    ~Fraction() {
        count--;
    }

    static int get_count() {
        return count; 
    }
};
