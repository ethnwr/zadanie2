#pragma once
#include <iostream>

using namespace std;
class Student {
private:
    string name;
    static int count;

public:
    
    Student() : name("Unknown") {
        count++;
    }

    
    Student(string name) : name(name) {
        count++;
    }

    
    ~Student() {
        count--;
    }

    static int get_count() {
        return count; 
    }
};
