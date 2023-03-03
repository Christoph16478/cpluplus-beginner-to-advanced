#include <iostream>
#include "mainFunctions.h"

// bring entire std namespace in current scope
using namespace std;

void printInt() {
    int i = 111;
    cout << i << endl;
}

int max3(int a, int b) {
    return (a > b) ? a : b; // Bedingungsoperator / ? Operator
}

int max2(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int max1(int a, int b) {
    int c = 0;
    // Wenn a > b ist, c = a
    if (a > b) {
        c = a;
    }
    // Wenn b > a ist, c = b
    if (b > a) {
        c = b;
    }
    return c;
}

double calculateVolume(double width, double length = 1.0, double height = 2.1)
{
    return width * length * height;
}