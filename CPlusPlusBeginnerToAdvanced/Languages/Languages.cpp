//
// Copyright (C) Christoph Hartleb 2023. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <Windows.h>

void main()
{
    // does not work
    // system("chcp 1252"); // Umstellung auf Deutsch
    // std::cout << "� � � � � � �" << std::endl;

    // set language to German for example
    setlocale(LC_ALL, "de_de"); // German
    std::cout << "� � � � � � �" << std::endl;


    // system("chcp 125");
    // Hier wird die M�glichkeit gegeben Umlaute auszugeben.
    // std::cout << "� � � � � � �"; // Standardm��ig k�nnen diese Zeichen nicht ausgegeben werden.
}