// 3Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // setlocale(LC_ALL, "de_de"); 
    setlocale(LC_ALL, "German");



    int feld[2][2][2] = { };
    feld[1][0][1] = 5;
    // feld[0-1][0-1][0-1]
    std::cout << feld[1][0][1];

    // 2 Domensinale Felder
    // Bsp: Schachbrett: 8x8
    int feld[8][8] = { }; // Felder werden mit 0 befüllt.
    feld[2][1] = 1;
    feld[4][2] = 2;
    feld[3][5] = 3;
    feld[6][7] = 4;
    for (int y = 0; y < 8; y++) { // Y-Achse

        for (int x = 0; x < 8; x++) { // X-Achse eine Zeile
            std::cout << feld[y][x];
        }
        std::cout << std::endl;
    }


    // std::cout << "Hello World!\n";
    // int punkte[5] = { 1, 3, 5, }; // Null-Initialisierung
    // int punkte[5] = { }; // Initialisierung
    int punkte[5] = { }; // Initialisierung

    // Bei leeren wurden die Speicherbereiche nicht sauber gemacht worden und sind mit anderen bestimmten Werten belegt.

    for (int i = 0; i < 5; i++) // M�glichkeit das Array mit einer Schleife zu durchlaufen.
        // Hier k�nnen wir auf einzelne Felder zugreifen und die Werte ausgeben.
    {
        std::cout << i << " : " << punkte[i] << std::endl;
    }

    std::cout << " ==== ARRAYS ====\n";
    // Arrays (Felder)
    // Eine Reihe von Werten/Variablen gleicher Datentypen.
    // 6 INT-Werte ====> 6 Array Felder
    // Die Liste begint mit 0.
    // Der letzte Wert befindet sich im 5. Feld.
    // Also, die Durchnummerierung erfolgt von 0 bis 5.

    int lotto[6]; // 0-5 werden verwendet

    for (int i = 0; i < 6; i++) {
        lotto[i] = 0;
        //lotto[i] = 10 + i; // 10+0 = 10     10+1 = 11 ....
    }

    // Werte Zuweisen
    lotto[0] = 5; //  1. Element
    lotto[1] = 12; // 2. Element
    lotto[5] = 44; // 6. Element (ab 0)

    for (int i = 0; i < 6; i++) {
        std::cout << i << " : " << lotto[i] << std::endl;
    }

    std::cout << "------------" << std::endl;

    // lotto[6] = 99;
    // std::cout << " wert = " << lotto[6]; // index '6' is out of valid index range '0' to '5' for possibly stack allocated buffer 'lotto'
                                            // tapping into a memory location, where we are not known what is written in it
                                            // so a warning was thrown

    // Warum sollte man dies oben nicht tun. Alles was wir programmieren steht im Arbitsspeciher udn dazwischen auch die Main Funktion. Wenn etwas gestartet wird whaben wir hier eine
    // Ruecksprungsadresse und wenn das ueberschrieben wird dann kann unsere Anwendung nie zurueckkommen und wir machen etwas kaputt oder andere Programme stuerzen ab.


}

