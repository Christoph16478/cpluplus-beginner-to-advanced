// 4Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void meineFunktion(int* b)
{
    std::cout << "Adresse b = " << b << std::endl;
    std::cout << "Wert *b" << *b << std::endl;
    *b = 10;
}

int main()
{
    // Pointer = Zeiger in lists
    // -------------------------
    int liste[10];
    int* anfang = liste; // Erhalte ich Anfangsadresse in der Liste meines Pointers, also bei index 0. Ein Array mit zehn feldern hat auch zehn Speicherfleder hier.
    std::cout << "Anfang: " << liste << std::endl;
    std::cout << "-----------------------------" << std::endl;
    // Jetzt �ber den pointer das Schritt f�r Schritt durchlaufen.
    for (int i = 0; i < 10; i++)
    {
        *(anfang + i) = 10 + i; // 10, 11, 12, 13, 14, ... Hier wird alles �ber die pointer die Werte in die Adressen gespeichert werden k�nnen.
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << liste[i] << " "; // Hier werden die von oben neu zugewiesenen Werte ausgegeben.

    }
    std::cout << "\n";
    // Adresse von den einzelnen Feldern in der Liste ausgeben.
    for (int i = 0; i < 10; i++)
    {
        std::cout << &liste[i] << " "; // Hier werden die von oben neu zugewiesenen Werte ausgegeben.
    }

    // Pointer = Zeiger
    // -----------------
    // Felder im Speicher sind durchnummeriert. Ein Bereich ist im Speicherbereich reserviert und eben dieser Bereich hat auch eine Nummer (Speicheradresse)
    int i = 5;
    // Wert ausgeben
    std::cout << i << std::endl;
    // Speicheradresse von i ausgeben. Jedesmal wenn ich die Anwendung ausf�hre wird eine andere Speicheradresse zugewiesen!
    std::cout << &i << std::endl;
    // Was kann ich mit diesen Adressen machen
    // Speicheradresse in eine andere Variable �bernommen wird/die auf eine andere Variable. Zeiger ist in der Lage eine Adresse zu �bernehmen. �ber diesen Zeiger k�nnen wir auf die Adresse zugreifen.
    int* p = &i; // Wert wurde in p gespeichert
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    // *p = 10; // Hier wird i �berschrieben und auch die Adresse
    *(p + 1) = 10; // (004FF7EC + 1) = 10
    std::cout << *p << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    int c = 5;
    std::cout << "c = " << c << std::endl;
    meineFunktion(&c);
    std::cout << "c = " << c << std::endl;
}
