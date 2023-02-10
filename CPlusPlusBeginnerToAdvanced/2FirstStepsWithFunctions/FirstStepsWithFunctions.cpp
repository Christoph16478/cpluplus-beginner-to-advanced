// 2FirstStepsWithFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>

#define _USE_MATH_DEFINES
#define M_PI
#define BIS 10 // macro, symbolic constants

using namespace std;

void meineFunktion()
{
    std::cout << i << std::endl; // 222
    int i = 444;
    std::cout << i << std::endl; // 444
}

void meineFunktion()
{
    int i = 111;
    std::cout << i << std::endl;
}

double volumen(double breite, double laenge = 1, double hoehe = 2.1) // Parameter
{
    return breite * laenge * hoehe;
}

int main()
{
    setlocale(LC_ALL, "German");

    int i = 5;
    std::cout << i << std::endl; // 222
    meineFunktion();
    std::cout << i << std::endl; // 222

    // for-loop from 0 until constant BIS
    // iterates through values if the constant
    // should be printed
    for (int i = 0; i < BIS; i++) {
        std::cout << i << std::endl;
    }

    double v;
    v = volumen(5, 10, 3.5); // Argumente
    std::cout << "Volumen = " << v;
    v = volumen(5, 10);
    std::cout << "Volumen = " << v;
    v = volumen(5);
    std::cout << "Volumen = " << v;
}