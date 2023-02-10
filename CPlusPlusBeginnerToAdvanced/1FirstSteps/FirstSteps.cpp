// 1FirstSteps.cpp : file contains first steps in C++.
//

#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>

#define _USE_MATH_DEFINES
#define M_PI
#define BIS 10 //macro, symbolic constants
#define MWSTFAKTOR 20;

using namespace std;

// Enum: Enumeration
enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    DOZENT = 3,
    ADMIN = 4,
};

struct User
{
    int id;
    PermissionLevel permission;
};

int main()
{
    setlocale(LC_ALL, "German");

    User jan{ 102402402, PermissionLevel::ADMIN };
    switch (jan.permission)
    {
    case PermissionLevel::STUDENT:
        std::cout << "Ich bin ein Student!" << std::endl;
        break;
    case PermissionLevel::TUTOR:
        std::cout << "Ich bin ein Tutor!" << std::endl;
        break;
    case PermissionLevel::DOZENT:
        std::cout << "Ich bin ein Dozent!" << std::endl;
        break;
    case PermissionLevel::ADMIN:
        std::cout << "Ich bin ein Admin!" << std::endl;
        break;
    }

    char auswahl;
    std::cout << "Waehle einen Schokoriegel (a-d): ";
    std::cin >> auswahl;

    switch (auswahl)
    {
    case 'a':
        std::cout << "Du erhaelst einen Aounty" << std::endl;
        break;
    case 'b':
        std::cout << "Du erhealst ein Bwix" << std::endl;
        break;
    case 'c':
        std::cout << "Du erhealst ein Vars" << std::endl;
        break;
    case 'd':
        std::cout << "Du erhealst ein Lickers" << std::endl;
        break;
    default:
        std::cout << "Falsche Eingabe!" << std::endl;
    }

    // All years which are perfectly divisible by 4 are leap years except for century years
    // (years ending with 00) which is leap year only it is perfectly divisible by 400.

    unsigned int year;
    std::cout << "Please enter the year: ";
    std::cin >> year;
    std::cout << "You entered the year: " << year << std::endl;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << "The year: " << year << " is a leap year!" << std::endl;
            }
            else
            {
                std::cout << "The year: " << year << " is not a leap year!" << std::endl;
            }
        }
        else
        {
            std::cout << "The year: " << year << " is a leap year!" << std::endl;
        }
    }
    else
    {
        std::cout << "The year: " << year << " is not a leap year!" << std::endl;
    }

    bool gewonnen = true;
    std::cout << "Willkommen bei meinem Gluecks-Spiel!" << std::endl;

    do
    {
        int zahl;
        std::cout << "Bitte gebe eine Zahl aus dem Intervall [1, 10] ein: ";
        std::cin >> zahl;

        if (zahl >= 1 && zahl <= 10)
        {
            if (zahl == 4)
            {
                std::cout << "Du hast den Haupt-Preis gewonnen!" << std::endl;

                gewonnen = true;
            }
            else if (zahl % 2 == 0)
            {
                std::cout << "Du hast einen Trost-Preis gewonnen!" << std::endl;
            }
            else
            {
                std::cout << "Du hast verloren!" << std::endl;
            }
        }
        else
        {
            std::cout << "Du hast leider eine Zahl eingegeben, die nicht aus dem Intervall [1, 10] stammt!"
                << std::endl;
        }
    } while (gewonnen == false);

    // bitte vom Benutzer einen Satz mit mind. 3 W�rter einlesen
    // und den Satz wieder ausgeben.
    string text = "";
    cout << "Bitte eine Satz mit min. 3 Woerter eingeben:\n";
    // cin >> text;
    // Die Eingabe wird hier genommen. Ein Problem wird sichtbar wenn wir meherere Woerter eingeben.
    // Da wird dann nur das erste Wort �bernommen. Was mache ich wenn ich mehrere Woerter eingeben muss?
    // Was kann man dagegen tun? Loesung:
    getline(cin, text); // Wichtig ist es die string library mit einzubinden
    cout << "Ihre Eingabe: \n";

    // ------ Text Suche ------
    std::string text = "aa123bbb";
    std::string muster = "123";
    std::cout << "Der Text:" << text << std::endl;
    std::cout << "Das Muster:" << muster << std::endl;
    // Die Suche
    int pos = text.find(muster);
    std::cout << "pos:" << pos << std::endl;
    int lenge = muster.length();
    std::string ausschnitt = text.substr(pos, lenge);
    std::cout << "ausschnitt:" << ausschnitt << std::endl;

    // type casting
    double zahl = 3.14;
    std::cout << zahl << std::endl;

    int zahl2 = zahl;
    std::cout << zahl2 << std::endl;

    // C-Casting
    float zahl3 = (float)(zahl); // (NEW_DTYPE)(VARIABLE_NAME)
    std::cout << zahl3 << std::endl;

    // C++ casting (static_cast)
    short zahl4 = static_cast<short>(zahl); // static_cast<NEW_DTYPE>(VARIABLE_NAME)
    std::cout << zahl4 << std::endl;

    // Example why C-Style casting is BAD!
    char c = 42; // char needs 1-Byte: 0x0a
    std::cout << c << std::endl;
    //int* p = (int*)(&c); // int needs 4-Byte
    //std::cout << *p << std::endl;

    //int* p2 = static_cast<int*>(&c);
    int i;
    float f;
    f = 2.3456f;
    std::cout << "f: " << f << std::endl;
    i = (int)f; // Casting
    std::cout << "i: " << i << std::endl;
    std::cout << "---------------" << std::endl;
    // Aufrunden float to int
    //int myInt1 = std::floor(12.6f); // ABRUNGEN #include <math.h>
    int myInt1 = std::ceil(12.6f); // AUFRUNDEN #include <math.h>
    std::cout << "myInt1: " << myInt1 << std::endl;
    int myInt2 = round(12.6f);
    std::cout << "myInt2: " << myInt2 << std::endl;
    
    //double faktor = 0.2;
    double betrag = 350;
    double MWSt = betrag * MWSTFAKTOR;
    std::cout << MWSt;

    //std::cout << "Hello World!\n";
    int a;
    /// 10/2 = 5   D.R: 0
    // 11/2 = 5    D.R: 1
    a = 11;
    std::cout << a / 2 << std::endl;
    std::cout << a % 2 << std::endl;
    std::cout << "------------" << std::endl;
    a = 10;
    std::cout << a / 2 << std::endl;
    std::cout << a % 2 << std::endl;
    std::cout << "------------" << std::endl;
    a = 10;
    if (a % 2 == 0) {
        std::cout << "durch 2 teilbar" << std::endl;
    }

    /*
    exercise 2
    -----------
    calculate circumference. read radius of the user, calculate and print
    Formel: u = 2 * pi * r

    testcase:
    r = 20
    u = 125.6
    */
    int r;
    float u;
    cout << "==== Umfang eines Kreises ====" << std::endl;
    cout << "Bitte Radius eingeben: ";
    cin >> r;
    u = 2 * M_PI * &r;
    std::cout << "Umfang des Kreises betraet " << u;

    /*
    exercise
    --------
    calcualte celsius in fahrenheit
    formula fahrenheit = celsius * 1.8 + 32
    */
    int celsius;
    int A;

    cout << "==== Celsius in Fahrenheit umrechnen ====" << std::endl;

    cout << "Grad Celsius: ";
    cin >> celsius;

    int fahrenheit = celsius * 1.8 + 32;
    std::cout << to_string(celsius) << " Grad Celsius sind " << fahrenheit << " Grad Fahrenheit.";


    /*
    exercise
    write software to solve following IO.
    ----
    what is your name?
    felix
    hello felix.
    ----
    where do you live?
    vienna
    vienna is beautiful.
    ----
    how old are you?
    i am x years old.
    */
    string meinName;
    string wohnOrt;
    int alter;
    cout << "what is your name: ";
    cin >> meinName;
    cout << "hello " << meinName << ".\n";
    cout << "where do you live: ";
    cin >> wohnOrt;
    cout << wohnOrt << " is beautiful.\n";
    cout << "how old are you: ";
    cin >> alter;
    cout << "i was in " << alter << ".";

    // exercise
    // --------
    // calculate area of rectangle:
    // formula: A = a * b
    int a;
    int b;
    int A;
    std::cout << "======= square of the triangle =======" << std::endl;
    std::cout << "length : ";
    std::cin >> a;
    std::cout << "width : ";
    std::cin >> b;
    A = a * b;
    std::cout << "Die Flaeche betraegt : ";
    std::cout << A;

    // exercise
    // --------
    // ask user what is his name, how he is
    // and answer as well
    std::cout << "Wie heisst du: ";
    std::string meinName;
    std::cin >> meinName;
    std::cout << "Hallo" << meinName;
    std::cout << ". Wie geht es dir?: ";
    std::string meinZustand;
    std::cin >> meinZustand;
    std::cout << meinZustand;
    std::cout << "Mir geht es genauso.";

    // realize input of user
    // ---------------------
    int eineZahl; // declaration
    std::cout << "Bitte eine Ganzahl eingeben: ";
    std::cin >> eineZahl;
    std::cout << "Sie haben " << eineZahl << " eingegeben" << std::endl;

    // string variables for texts
    // --------------------------
    std::cout << "========== strings ==========" << std::endl;
    std::string meinText; // declaration
    meinText = "Das ist meinText1"; // asign
    std::cout << meinText << std::endl;
    std::string meinText2 = "Das ist meinText2";
    // initialize variable = declaration + assignment in one step
    std::cout << meinText2 << std::endl;
    std::string meinText3("Das ist mein Text 3"); // works only if declaration and definition in one line
    // assign value. this style exists as well
    std::cout << meinText3 << std::endl;
    std::string meinText4{ "Das ist meinText4" };
    std::cout << meinText4 << std::endl;
    std::cout << "====================================================" << std::endl;
    // AltGr + cursor ...
    std::cout << "Hallo, eine Eingabe" << std::endl;
    std::cout << "Hallo, eine Eingabe" << std::endl;
    std::cout << "Hallo, eine Eingabe" << std::endl;
    std::cout << "Hallo, eine Eingabe" << std::endl;
    std::cout << "Hallo, eine Eingabe" << std::endl;

    // integers
    // --------
    // size of memory is different from compiler to compiler
    // 32 bit are the half of the memory. with 32 bit got half of memory. number of bits is little less: 32 1er and 0er are next to each other.
    short a = 1; // zahlenbereich is shorter and consumes less memory // minimum 1 byte 
    int b = 5; // minimum 4 byte
    long c = 8;
    long long wert = 7;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << wert << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;

    // floatng point numbers
    // ---------------------
    float zahl1 = 4.343432;
    double zahl2 = 5.8;
    long double einWert = 2.3;
    // why different datatypes? they can take different values. Depending on 
    // the array of value we put in different values.
    // why taking care of size? becuase on smlaler devices ther is not that much
    // memory available. On smaller devices we do not have that much memory.
    // read out memory:
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << INT_MAX << std::endl; // capitalized types are called macros
    // macros help to replace characters
    std::cout << FLT_MAX << std::endl;
    std::cout << DBL_MAX << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    // page with list where this types can be checked: 
    // https://en.cppreference.com/w/c/types/limits
    
    // characters
    // ----------
    char menZeichen = 'a'; // always write single commata
    // a single character is 1 byte = 8 bits
    std::cout << menZeichen << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    // read size of datatype
    std::cout << sizeof(int) << std::endl;
    // it is 4-times of a single character, an example of a byte
    unsigned int gewicht = 20;
    // unsigned means that the data type can not be negative, instead double size of holdable value

    // print out plus line breaks
    // --------------------------
    system("chcp 125");
    // underneath
    // hello
    // Felix
    // print out
    std::cout << "Hallo" << std::endl; // endline bed. fuer uns, dass hier ein Zeilenwechsel ausgegeben wird.
    // Bedeutet der Cursor wird hier um eines runtergesetzt.
    std::cout << "Felix" << std::endl;
    // Mit \n einen Zeilenumbruch erzwingen
    std::cout << "Max\n";
    std::cout << "Mustermann" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Max\nMustermann" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Max\n";
    std::cout << "Mustermann" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    // Hier wird die Moeglichkeit gegeben Umlaute auszugeben.
    // std::cout << ""; // Standardmaessig koennen diese Zeichen nicht ausgegeben werden.
    system("pause");

    // first main program and print out
    // --------------------------------
	// main : Hauptprogramm
	// () : Anzeichen, dass es sich um eine Funktion handelt
	// main is the entry point of the function.
	// { } : codblock. everything coded is written inside.
	// #include : means including/adding/attache/import
	// iostream : standard library in C++
	// void : void is a return type = void means the function returns nothing
	std::cout << "Willkommen zu meinem Programm!"; // start application with F5!
    std::cout << "Hallo Felix!\n";
}
