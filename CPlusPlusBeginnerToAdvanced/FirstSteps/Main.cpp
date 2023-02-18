// FirstSteps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>

#define _USE_MATH_DEFINES

#define M_PI 3.14159265358979323846 // macro
#define VATFAKTOR 0.2
#define BIS 10

using namespace std;

int i = 222;

inline void retIntVal();
inline void printInt();
inline int max3(int a, int b);
inline int max2(int a, int b);
inline int max1(int a, int b);
inline double calculateVolume(double width, double length, double height);

namespace abc {
    void printCout(string text) { cout << " === " << text << " === " << endl; }
    // void cout(string text) { cout << "===" << text << "==="; }
}

namespace xyz {
    void printCout(string text) { cout << " === " << text << " === " << endl; }
    // void cout(string text) { cout << "===" << text << "==="; }
}

class Car
{
public:
    // variables
    string brand = "";

    // constructor
    Car(string brand, int year)
    {
        this->brand = brand;
        this->year = year;
    }

    // methods
    void drive(int mileage)
    {
        if (fueltank > 0)
        {
            fueltank -= mileage;
            mileage += mileage;
        }

        if (fueltank < 0)
        {
            cout << "Bitte tanken" << endl;
        }
    }

    void refuel(int fueltank)
    {
        this->fueltank += fueltank;
    }

private: // Nur intern erreichbar. Kann nur innerhalb der Klasse Person verwendet werden.
    int year = 0;
    int fueltank = 50;
    int mileage = 0;
};

class LivingBeing
{
public:
    void eating()
    {
        cout << "living being is eating" << endl;
    }
    void running()
    {
        cout << "living being is running" << endl;
    }
private:
};

class Human : public LivingBeing // public, because it is about an public inheritance.
{
public:
    Human(string name)
    {
        name = n;
    }
    void speaking()
    {
        cout << "Human says hallo" << endl;
    }
private:
    string n;
};

class Dog : public LivingBeing
{
public:
    Dog(string name)
    {
        name = n;
    }
    void barking()
    {
        cout << "woof woof" << endl;
    }
private:
    string n;
};

int main()
{
    // REAL BEGINNER STEPS

    cout << "================================= FIRST STEPS =================================" << endl;

    system("chcp 125");
    setlocale(LC_ALL, "German");
    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
    // Debug program: F5 or Debug > Start Debugging menu

    // Tips for Getting Started: 
    //   1. Use the Solution Explorer window to add/manage files
    //   2. Use the Team Explorer window to connect to source control
    //   3. Use the Output window to see build output and other messages
    //   4. Use the Error List window to view errors
    //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
    //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    cout << "Hallo Felix!\n";

    // main : main program
    // () : sign, that it is about a function
    // main is afunction here
    // { } : codeblock
    // #include : include / import / add / attache
    // iostream : std lib in c++
    // void : void is the return value for the function
    cout << "Willkommen zu meinem Programm!"; // Anwendung wird mit F5 gestartet!

    cout << "-----------------------------------------------------" << endl;

    cout << "Max\n";
    cout << "Mustermann" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Max\nMustermann" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Max\n";
    cout << "Mustermann" << endl;
    cout << "------------------------------------------" << endl;
    // possibility to add special characters
    cout << "� � � � � � �"; // symbols are not printed per default
    system("pause");

    cout << "================================= DATATYPES =================================" << endl;

    // integers
    // size of memory it differs from compiler to compiler
    // with 32bit you got half of the memory, number of bits
    // are getting less and less : 32 ones and zeros are next
    // to each other
    short a0 = 1; // number space is shorter and consumes less memory (min 1 byte)
    int b0 = 5; // min. 4 bytes
    long c0 = 8;
    long long value0 = 7;
    cout << a0 << endl;
    cout << b0 << endl;
    cout << c0 << endl;
    cout << value0 << endl;

    // floating point values
    float number1 = 4.343432F;
    double number2 = 5.8;
    long double aValue = 2.3;
    // why different datatypes? because the types can hold different
    // values and in former days, devices had very little memory.
    // especially small devices got a small memory

    // print out memory areas:
    // capitalized text is called 'macros'
    // https://en.wikipedia.org/wiki/Macro_(computer_science)
    cout << INT_MAX << endl; 
    cout << FLT_MAX << endl;
    cout << DBL_MAX << endl;
    // website with specific sizes of datatypes : 
    // https://en.cppreference.com/w/c/types/limits

    char myChar = 'a'; // chars always with ''
    // 1 char == 1 byte (8 bits)
    cout << myChar << endl;

    // read out size of datatypes
    cout << sizeof(int) << endl;
    // 4 times of a sign (here 1 byte)

    // unsigned : value can not be negative
    unsigned int gewicht = 20;

    // string variable for text
    string myText1; // declaration
    myText1 = "Das ist myText1"; // assignment
    cout << myText1 << endl;
    string myText2 = "Das ist myText2";
    // variable wirt initialized = declaration +
    // assignment : both in one step
    cout << myText2 << endl;
    // works only if declaration and definition in one line
    string myText3("Das ist myText3");
    cout << myText3 << endl;
    string myText4{ "Das ist myText4" };
    cout << myText4 << endl;

    // AltGr plus set multiple cursors and move them
    // all at the same time in the same direction
    cout << "hello, an input" << endl;
    cout << "hello, an input" << endl;
    cout << "hello, an input" << endl;
    cout << "hello, an input" << endl;
    cout << "hello, an input" << endl;

    // user input
    int eineZahl; // declaration
    cout << "please insert a number : ";
    cin >> eineZahl;
    cout << "input : " << eineZahl << endl;

    cout << "================================= USER INPUT =================================" << endl;

    // exercise0 :
    // user asks for name
    // second person answers
    // do the same again
    cout << "what is your name : ";
    string myName;
    cin >> myName;
    cout << "hello" << myName;
    cout << ". how are you? : ";
    string myState;
    cin >> myState;
    cout << myState;
    cout << "I feel the same.";

    // exercise1 :
    // calculate are of rectangle :
    // formula : A = a * b
    int a1;
    int b1;
    int A1;
    cout << "======= Fl�che des Rechtecks berechnen =======" << endl;
    cout << "set length a : ";
    cin >> a1;
    cout << "set width b : ";
    cin >> b1;
    A1 = a1 * b1;
    cout << "calculated area is : ";
    cout << A1;

    /*
    exercise2
    calculate circumference of a circle, radius read-in from user, calculate and output
    formula: u = 2 * pi * r
    r= 20
    u= 125.6
    */
    int r;
    float u;
    cout << "==== Umfang eines Kreises ====" << endl;
    cout << "Bitte Radius eingeben: ";
    cin >> r;
    u = r * 2 * M_PI;
    cout << "Umfang des Kreises betr�gt " << u;

    cout << "================================= PARAMS AND DEFAULT VALUES =================================" << endl;

    // parameter and default values
    double v;
    v = calculateVolume(5.0, 10.0, 3.5);
    cout << "volume = " << v;
    //v = volumen(5.0, 10.0);
    //cout << "Volumen = " << v;
    //v = volumen(5.0);
    //cout << "Volumen = " << v;

    cout << max1(3, 4) << endl;
    cout << max2(3, 4) << endl;
    cout << max3(3, 4) << endl;

    cout << "================================= SCOPES OF VALIDITY =================================" << endl;

    // scope of values
    // varaibles are valid in certain areas
    // variables can have the same naem in own
    // memory and do not overlap
    int i = 333;
    cout << i << endl;
    printInt();
    if (i == 333)
    {
        int j = 22;
        cout << j << endl;
        i = 666;
        {
            i = 111;
            cout << i << endl;
        }
        cout << i << endl;
    }
    cout << i << endl;
    //cout << j << endl;

    cout << i << endl; // 222
    retIntVal();
    cout << i << endl; // 222

    cout << "================================= ARRAYS =================================" << endl;

    // an array of values/varaibles of the same datatype
    // 6 int values -> 6 array fields
    // array starts with index 0 (0-based index)
    // last value in 5th field
    // numbering from 0 to 5
    int lotto[6]; // 0-5 are used
    for (int i = 0; i < 6; i++) {
        lotto[i] = 0;
        //lotto[i] = 10 + i; // 10+0 = 10     10+1 = 11 ....
    }
    // assign values
    lotto[0] = 5; // 1. element
    lotto[1] = 12; // 2. element
    lotto[5] = 44; // 6. element
    for (int i = 0; i < 6; i++) {

        cout << i << " : " << lotto[i] << endl;
    }
    cout << "------------" << endl;
    //lotto[6] = 99;
    // are accessed with unknown value
    // therefore we get a warning message
    cout << " value = " << lotto[6]; 

    // cout << "Hello World!\n";
    // int punkte[5] = { 1, 3, 5 }; // initialization with values
    // int punkte[5] = { }; // 0-initialization
    int punkte[5] = { }; // initialization
    // if empty the areas of the memory will not be cleaned, other values can
    // be located at that address
    for (int i = 0; i < 5; i++) // possibility to iterate over array
        // access single fields and return values
    {
        cout << i << " : " << punkte[i] << endl;
    }

    // 2-dimensional array
    // e.g. chessboard: 8x8
    int field[8][8] = { }; // fields are filled with 0.
    field[2][1] = 1; // set value 1 at loc 2, 1
    field[4][2] = 2;
    field[3][5] = 3;
    field[6][7] = 4;
    for (int y = 0; y < 8; y++) { // y-axis
        for (int x = 0; x < 8; x++) { // x-axis
            cout << field[y][x];
        }
        cout << endl;
    }

    // multi-dimensional array
    int field1[2][2][2] = { };
    field1[1][0][1] = 5;
    // field[0-1][0-1][0-1]
    cout << field1[1][0][1];

    //cout << "Hello World!\n";
    int a2;
    int a3;
    /// 10/2 = 5   D.R: 0
    // 11/2 = 5    D.R: 1
    a2 = 11;
    cout << a2 / 2 << endl;
    cout << a2 % 2 << endl;
    cout << "------------" << endl;
    a3 = 10;
    cout << a3 / 2 << endl;
    cout << a3 % 2 << endl;
    cout << "------------" << endl;
    a3 = 10;
    if (a3 % 2 == 0) {
        cout << "divisable by 2" << endl;
    }

    //double faktor = 0.2;
    double amount = 350;
    double VAT = amount * VATFAKTOR;
    cout << VAT;

    // for-loop
    for (int i = 0; i < BIS; i++) {
        cout << i << endl;
    }

    cout << "================================= POINTER =================================" << endl;

    // Fields in the memory are numbered consecutively
    // one area is reserved in the memory area and this same
    // area also has a number - memory address
    int num0 = 5; // assign value
    cout << "value of num0 : " <<  num0 << endl; // print value
    // output memory address of i. Each time I run the application, a different memory address is assigned
    cout << "memory address of num0 : " << &num0 << endl;
    // memory address is transferred to another variable/that is transferred to another variable.
    // a pointer is able to take over an address. Through this pointer we can access the address.
    int* p = &num0; // Wert wurde in p gespeichert
    cout << "p shows mem address of &num0 : " << p << endl;
    cout << p << endl;
    cout << "*p shows value saved in address of num0 (&num0) : " << *p << endl;
    // *p = 10; // Here i is overwritten and also the address
    *(p + 1) = 10; // (004FF7EC + 1) = 10
    cout << *p << endl;
    
    cout << "------------------------------------------------------------------------" << endl;
    
    int c = 5;
    cout << "c = " << c << endl;
    printInt();
    cout << "c = " << c << endl;
    int list[10];
    cout << list[10] << endl;
    // I get the starting address in the list of my pointer, i.e. at index 0. An array with
    // ten fields also has ten memory fields here.
    int* anfang = list;
    cout << "Begin : " << list << endl;
    cout << "-----------------------------" << endl;
    // now go through pointer step y step.
    for (int i = 0; i < 10; i++)
    {
        *(anfang + i) = 10 + i; // 10, 11, 12, 13, 14, ... Here everything about the pointer values can be stored in the addresses.
    }
    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << " "; // The values newly assigned from above are output here.

    }
    cout << "\n";
    // output the address of the individual fields in the list.
    for (int i = 0; i < 10; i++)
    {
        cout << &list[i] << " "; // The values newly assigned from above are output here.
    }

    cout << "================================= NAMESPACES =================================" << endl;

    // back to the header files and prototypes. In addition, the files must also be classified. This worked great.
    // but if you try to outsource several files and the files have different functionalities. This grouping
    // this grouping is only understood when different namespaces are created. 
    abc::printCout("print with printCout in namespace abc");
    xyz::printCout("print with printCout in namespace xyz");
    cout << ("title3");

    cout << "================================= OOP =================================" << endl;

    // Auto CLASS
    Car firstCar("Bentley", 2001);
    firstCar.drive(30);
    // Lebewesen CLASS
    LivingBeing livingBeing1;
    livingBeing1.running();
    Human human1("first last");
    human1.speaking();
    human1.running();
    // Mensch soll auch Essen und Laufen k�nnen
    Dog h("Beni");
    h.barking();
}

void retIntVal() { // meineFunktion1 

    cout << i << endl; // 222
    int i = 444;
    cout << i << endl; // 444
}

void printInt() { // meineFunktion
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
