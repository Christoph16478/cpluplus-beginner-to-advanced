//
// Copyright (C) Christoph Hartleb 2023. All rights reserved.
// (BEARBEITUNG ABGESCHLOSSEN)
//
#include <iostream>

using namespace std;

int main()
{
    /* --------------------------- *
    *  --- Datentypen in C/C++ --- *
    *  --------------------------- */

    // Es gibt folgende Arten von Datentypen in C/C++:
    // 1. Primäre/eingebaute/fundamentale Datentypen
    // 2. Abgeleitete Datentypen
    // 3. Benutzerdefinierte Datentypen

    // 1. Primäre/eingebaute/fundamentale Datentypen: Diese Datentypen sind eingebaute oder
    // vordefinierte Datentypen und können vom Benutzer direkt verwendet werden, um Variablen
    // zu deklarieren. Beispiel: int, char, float, bool usw. In C++ verfügbare primitive
    // Datentypen sind: 

    // Integer
    // -------
    // Das für Integer-Datentypen verwendete Schlüsselwort ist int.
    // Ganzzahlen benötigen normalerweise 4 Byte Speicherplatz und
    // reichen von -2147483648 bis 2147483647.  
    int b; // declaration
    b = 5; // definition
    cout << b << endl;
    cout << "Int memory size in Bytes: " << sizeof(b) << endl;

    // Character
    // ---------
    // Verwendet das Schlüsselwort char. Character benötigen 1 Byte
    // Speicherplatz (das sind 8 Bits) und reichen von -128 bis 127
    // oder 0 bis 255.
    char meinZeichen = 'a';
    cout << meinZeichen << endl;
    cout << "Char memory size in Bytes: " << sizeof(meinZeichen) << endl;

    // Boolean
    // -------
    // Der Datentyp Boolean wird zum Speichern von Booleschen oder
    // logischen Werten verwendet. Eine boolesche Variable kann entweder
    // true oder false speichern. Das für den Datentyp Boolean verwendete
    // Schlüsselwort ist bool.
    bool b1; // declaration
    b1 = true; // definition
    bool a1 = false; // definiton+ declaration = initialization
    cout << b1 << endl;
    cout << "Boolean memory size in Bytes: " << sizeof(a1) << endl;

    // Floating point
    // --------------
    // Der Datentyp Gleitkomma wird zum Speichern von Gleitkommawerten mit
    // einfacher Genauigkeit oder Dezimalwerten verwendet. Das für den Gleitkommadatentyp verwendete Schlüsselwort ist float . Float-Variablen benötigen typischerweise 4 Byte Speicherplatz. 
    float floatingNumber1 = 4.343432;
    cout << floatingNumber1 << endl;
    cout << "Float memory size in Bytes: " << sizeof(floatingNumber1) << endl;

    // Double floating point
    // ---------------------
    // Der Datentyp Double Floating Point wird zum Speichern von Gleitkommawerten mit
    // doppelter Genauigkeit oder Dezimalwerten verwendet. Das Schlüsselwort für den
    // Double-Floating-Point-Datentyp ist double. Double-Variablen benötigen typischerweise
    // 8 Byte Speicherplatz.
    double zahl2 = 5.8;
    cout << zahl2 << endl;
    cout << "Double memory size in Bytes: " << sizeof(zahl2) << endl;

    // Void
    // ----
    // Void bedeutet ohne Wert. Der void-Datentyp repräsentiert eine wertlose Entität.
    // Für Funktionen, die keinen Wert zurückgeben, wird ein void-Datentyp verwendet.

    // Wide Character
    // --------------
    // Der Datentyp Breitzeichen ist ebenfalls ein Zeichendatentyp, aber dieser
    // Datentyp hat eine größere Größe als der normale 8-Bit-Datentyp. Vertreten
    // durch wchar_t. Es ist im Allgemeinen 2 oder 4 Bytes lang.
    wchar_t w = L'A';
    cout << "Wide character value:: " << w << endl;
    cout << "Size of the wide char is:: " << sizeof(w) << endl;

    // 2. Abgeleitete Datentypen: Die Datentypen, die von den primitiven
    // oder eingebauten Datentypen abgeleitet sind, werden als abgeleitete
    // Datentypen bezeichnet. Diese können von vier Arten sein, nämlich: 

    // Funktionen
    // -----------
    //

    // Arrays
    // ------
    //     

    // Pointer
    // -------
    // 

    // Reference
    // ---------
    // 

    // 3. Abstrakte/benutzerdefinierte Datentypen : Diese Datentypen werden vom Benutzer
    // selbst definiert. Ähnlich wie beim Definieren einer Klasse in C++ oder einer Struktur.
    // C++ bietet die folgenden benutzerdefinierten Datentypen: 

    // Class
    // -----
    //

    // Structures
    // ----------
    //

    // Union
    // -----
    //

    // Enumeration
    // -----------
    //

    // Typed defined Datatype
    // ----------------------
    //

    /* ------------------------------- *
     *  --- Modifikatoren in C/C++ --- *
     *  ------------------------------ */

     // As the name suggests, datatype modifiers are used with the built-in data
     // types to modify the length of data that a particular data type can hold. 

     // signed
     //  |- Integer
     //  |- Char
     //  |- Long - Prefix

     // unsigned
     //  |- Integer
     //  |- Char
     //  |- Short - Prefix

     // long 
     //  |- Integer
     //  |- Double

     // short
     //  |- Integer

     // Datatype | Size(in bytes) | Range |
     // -------- | -------------- | -------|
     // short int | 2 | -32,768 to 32,767 |
     // unsigned short int | 2 | 0 to 65,535 |
     // unsigned int | 4 | 0 to 4,294,967,295 |
     // int | 4 | 2,147,483,648 to 2,147,483,647 |
     // long int | 4 | 2,147,483,648 to 2,147,483,647 |
     // unsigned long int | 4 | 0 to 4,294,967,295 |
     // long long int | 8 | (2^63) to (2^63)-1 |
     // unsigned long long int | 8 | 0 to 18,446,744,073,709,551,615 |
     // signed char | 1 | 128 to 127 |
     // unsigned char | 1 | 0 to 255 |
     // float | 4 |  |
     // double | 8 |  |
     // long double | 12 |  | 
     // wchar_t | 2 or 4 | 1 wide character |

     // Beispiele
     // ---------
     // zahlenbereich ist kürzer und verbraucht auch weniger
     // also mind. 1 Byte Speicher. 
    short a = 1;
    long c = 8;
    long long wert = 7;
    cout << a << endl;
    cout << c << endl;
    cout << wert << endl;
    float zahl1 = 4.343432;
    double zahlX = 5.8;
    long double einWert = 2.3;
    // warum haben wir verschiedene Datentypen. Sie können die Werte dort speichern.
    // Die Datentypen können bestimmte Werte aufnehmen. Je nach Wertebereiche setzen
    // wir verschieden Datentypen ein. Warum auf Speichergrößen beachten. Bei
    // kleinen Geräten haben wir nicht soviele Speicher. Bei IoT werden kleine
    // Speichergrößen angelegt und es wird nur das angewandt was notwendig ist.

    // unsigned bedeutet der Datentyp kann nie negativ sein.
    // Keine negativen Werte.
    // Dafür hat man dann die doppelte Größe.
    unsigned int gewicht = 20;

    string meinText; // Declaration
    meinText = "Das ist meinText1"; // Zuweisung
    cout << meinText << endl;

    string meinText2 = "Das ist meinText2";
    // Initialwert = Deklaration und Zuweisung in einem Schritt
    cout << meinText2 << endl;

    string meinText3("Das ist meinText3");
    cout << meinText3 << endl;

    string meinText4{ "Das ist meinText4" };
    cout << meinText4 << endl;

    // Eingabe
    int eineZahl; // Deklaration
    cout << "Eine Ganzzahl eingeben: ";
    cin >> eineZahl;
    cout << "Sie haben " << eineZahl << " eingegeben" << endl;
    // Eingabe des Benutzers realisieren.
    // int eineZahl; // Deklaration
    cout << "Bitte eine Ganzahl eingeben: ";
    cin >> eineZahl;
    cout << "Sie haben " << eineZahl << " eingegeben" << endl;
    cout << "Size of char : " << sizeof(char) << " byte" << endl;
    cout << "char minimum value: " << CHAR_MIN << endl;
    cout << "char maximum value: " << CHAR_MAX << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;

    /*  -------------------------------- *
     *  --- Makrokonstanten in C/C++ --- *
     *  -------------------------------- */

     // CHAR_MIN Minimalwert für ein Objekt des Typs char
    char xy = CHAR_MIN;
    cout << xy << endl;
    // CHAR_MAX Maximalwert für ein Objekt des Typs char
    cout << CHAR_MAX << endl;
    // SCHAR_MIN Minimalwert für ein Objekt des Typs Signed char
    // SCHAR_MAX Maximalwert für ein Objekt des Typs Signed char
    // UCHAR_MAX Maximalwert für ein Objekt des Typs Unsigned char
    // CHAR_BIT Anzahl der Bits in einem Char-Objekt
    // MB_LEN_MAX Maximale Anzahl der Bytes in einem Multibyte-Zeichen
    // SHRT_MIN Minimalwert für ein Objekt vom Typ short int
    // SHRT_MAX Maximalwert für ein Objekt vom Typ short int
    // USHRT_MAX Maximalwert für ein Objekt vom Typ Unsigned short int
    // INT_MIN Minimalwert für ein Objekt vom Typ int
    // INT_MAX Maximalwert für ein Objekt vom Typ int
    // UINT_MAX Maximalwert für ein Objekt vom Typ Unsigned Int
    // LONG_MIN Minimalwert für ein Objekt vom Typ Long Int
    // LONG_MAX Maximalwert für ein Objekt vom Typ Long Int
    // ULONG_MAX Maximalwert für ein Objekt vom Typ Unsigned Long Int
    // LLONG_MIN Minimalwert für ein Objekt vom Typ Long long int
    // LLONG_MAX Maximalwert für ein Objekt vom Typ long long int
    // ULLONG_MAX Maximalwert für ein Objekt vom Typ Unsigned long long int

    // Der tatsächliche Wert hängt von der jeweiligen System- und Bibliotheksimplementierung
    // ab, soll aber die Grenzen dieser Typen in der Zielplattform widerspiegeln.
    // LLONG_MIN, LLONG_MAX und ULLONG_MAX sind für Bibliotheken definiert, die dem
    // C-Standard von 1999 oder später entsprechen (der erst seit 2011 den C++-Standard
    // enthält: C++11).

    /**
     * Sources
     */

     // https://en.cppreference.com/w/c/types/limits

    return 0;
}
