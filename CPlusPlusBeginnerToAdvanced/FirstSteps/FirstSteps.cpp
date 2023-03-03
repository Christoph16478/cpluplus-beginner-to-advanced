// FirstSteps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// include external libraries
#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>
#include "mainFunctions.cpp"

// macros
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#define VATFAKTOR 0.2
#define BIS 10

// global variables
int i = 222;

// bring entire std namespace in current scope
using namespace std;

// declarations
inline void retIntVal();

// namespaces
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
    string brand = "";

    Car(string brand, int year)
    {
        this->brand = brand;
        this->year = year;
    }

    // public methods
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

    // private variables only internally reachable, used only inside the class "Person"
private:
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

// derived class
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

// derived class
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
    cout << "================================= FIRST PRINTING =================================\n" << endl;

    // windows code page 1252 entspricht ISO-Latin-1 bzw. -15
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    setlocale(LC_ALL, "English");
    
    cout << "Run program: Ctrl + F5 or Debug > Start Without Debugging menu" << endl <<
            "Debug program: F5 or Debug > Start Debugging menu" << endl <<
            "Tips for Getting Started:" << endl <<
            "1. Use the Solution Explorer window to add/manage files" << endl <<
            "2. Use the Team Explorer window to connect to source control" << endl <<
            "3. Use the Output window to see build output and other messages" << endl <<
            "4. Use the Error List window to view errors" << endl <<
            "5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project" << endl <<
            "6. In the future, to open this project again, go to File > Open > Project and select the .sln file\n" << endl;
    
    cout << "Print your first string : 'hello developer'!\n" << endl;

    cout << "general overview" << endl <<
        "------------------" << endl <<
        "main = main program" << endl <<
        "() = sign, that it is about a function" << endl <<
        "main is afunction here" << endl <<
        "{ } = codeblock" << endl <<
        "#include = include / import / add / attache" << endl <<
        "iostream = std lib in c++" << endl <<
        "void = void is the return value for the function\n" << endl;
    
    cout << "Welcome to your first program with multi-line output!\n";
    cout << "--------------------------------------------------------" << endl;
    cout << "Max\n";
    cout << "Example" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Max\nMustermann" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Max\n";
    cout << "Example" << endl;
    cout << "------------------------------------------\n" << endl;
    
    cout << "possibility to add special characters : � � � � � � �\n" << endl; // symbols are not printed per default
    
    // system("pause"); // pasue the system, terminal stays open

    cout << "================================= DATATYPES =================================\n" << endl;

    cout << "why different datatypes ? because the types can hold different" << endl << 
            "values and in former days, devices had very little memory." << endl <<
            "especially small devices got a small memory\n" << endl;

    cout << "size of memory it differs from compiler to compiler" << endl <<
            "with 32bit you got half of the memory, number of bits" << endl <<
            "are getting less and less : 32 ones and zeros are next" << endl <<
            "to each other\n" << endl;
    
    short a0 = 1; // number space is shorter and consumes less memory (min. 1 byte)
    cout << "short a0 = " << a0 << endl;

    int b0 = 5; // min. 4 bytes
    cout << "int b0 = " << b0 << endl;

    long c0 = 8;
    cout << "long c0 = " << c0 << endl;
    
    long long value0 = 7;
    cout << "long long value0 = " << value0 << endl;

    float number1 = 4.343432F; // floating point values
    cout << number1 << endl;
    
    double number2 = 5.8;
    cout << number2 << endl;

    long double aValue = 2.3;
    cout << aValue << endl;


    cout << "print out memory areas:" << endl <<
            "capitalized text is called 'macros'" << endl <<
            "https://en.wikipedia.org/wiki/Macro_(computer_science)" << endl <<
            "website with specific sizes of datatypes :" << endl <<
            "https://en.cppreference.com/w/c/types/limits" << endl;
    
    cout << INT_MAX << endl; 
    cout << FLT_MAX << endl;
    cout << DBL_MAX << endl;

    // chars always with ''
    char myChar = 'a'; 
    // 1 char == 1 byte (8 bits)
    cout << myChar << endl;

    // 4 times of a sign (here 1 byte)
    cout << "size of datatype int : " << sizeof(int) << endl;
    
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

    // alt gr plus mouseclick set multiple cursors and move them
    // all at the same time in the same direction
    //cout << "hello, an input" << endl;
    //cout << "hello, an input" << endl;
    //cout << "hello, an input" << endl;
    //cout << "hello, an input" << endl;
    //cout << "hello, an input" << endl;

    cout << "--------------------------------- NUMBER INPUT ---------------------------------" << endl;
    int eineZahl; // declaration
    cout << "please insert a number : ";
    cin >> eineZahl;
    cout << "input : " << eineZahl << "\n" << endl;

    cout << "----------------------------- USER INPUT -----------------------------" << endl;
    cout << "exercise0 :" << endl <<
        "user asks for name" << endl <<
        "second person answers" << endl <<
        "do the same again" << endl;
       
    cout << "'what is your name : ";
    string myName;
    cin >> myName;
    cout << "hello " << myName;
    cout << ". how are you? : ";
    string myState;
    cin >> myState;
    cout << myState;
    cout << ", I feel the same.";

    cout << "exercise1 :" << endl <<
            "calculate are of rectangle :" << endl <<
            "formula : A = a * b" << endl;
    
    int a1;
    int b1;
    int A1;
    cout << "\n------ calculate are of rectangle ------" << endl;
    cout << "set length a : ";
    cin >> a1;
    cout << "set width b : ";
    cin >> b1;
    A1 = a1 * b1;
    cout << "calculated area is : ";
    cout << A1;

    cout << "exercise2" << endl <<
    "calculate circumference of a circle, radius read-in from user, calculate and output" << endl <<
    "formula: u = 2 * pi * r" << endl <<
    "r = 20" << endl <<
    "u = 125.6" << endl;

    int r;
    float u;
    cout << "Bitte Radius eingeben: ";
    cin >> r;
    u = r * 2 * M_PI;
    cout << "Umfang des Kreises beträgt " << u << "\n" << endl;

    cout << "================================= PARAMS AND DEFAULT VALUES =================================\n" << endl;

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

    cout << "================================= SCOPES OF VALIDITY =================================\n" << endl;

    cout << "scope of values" << endl <<
            "------------------" << endl <<
            "varaibles are valid in certain areas" << endl <<
            "variables can have the same naem in own" << endl <<
            "memory and do not overlap" << endl;

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

    cout << "================================= ARRAYS =================================\n" << endl;

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
    int numToPoint = 5; // assign value
    cout << "value of numToPoint : " << numToPoint << endl; // print value
    // output memory address of i. Each time I run the application, a different memory address is assigned
    cout << "memory address of numToPoint : " << &numToPoint << endl;
    // memory address is transferred to another variable/that is transferred to another variable.
    // a pointer is able to take over an address. Through this pointer we can access the address.
    int* pointer1 = &numToPoint; // Wert wurde in p gespeichert
    cout << "pointer1 shows mem address of &numToPoint : " << pointer1 << endl;
    cout << pointer1 << endl;
    cout << "*pointer1 shows value saved in address of numToPoint (&numToPoint) : " << *pointer1 << endl;
    // *p = 10; // Here i is overwritten and also the address
    // *(pointer1 + 1) = 10; // (004FF7EC + 1) = 10 // Run-Time Check Failure #2 - Stack around the variable 'str' was corrupted."
    cout << *pointer1 << endl;
    
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
        *(anfang + i) = 10 + i; // 10, 11, 12, 13, 14, ... here everything about the pointer values can be stored in the addresses.
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

    cout << "================================= NAMESPACES =================================\n" << endl;

    // back to the header files and prototypes. In addition, the files must also be classified. This worked great.
    // but if you try to outsource several files and the files have different functionalities. This grouping
    // this grouping is only understood when different namespaces are created. 
    abc::printCout("print with printCout in namespace abc");
    xyz::printCout("print with printCout in namespace xyz");
    cout << ("title3");

    cout << "================================= OOP =================================\n" << endl;

    // create an object of class Car
    Car firstCar("Bentley", 2001);
    // access attributes and set values
    firstCar.drive(30);
    
    // create object of class LivingBeing
    LivingBeing livingBeing1;
    // access public attributes and set public values
    livingBeing1.running();
    
    // humans can speak an run as well
    Human human1("first last");
    human1.speaking();
    human1.running();
   
    // create object of class Dog
    // Dog h("Beni");
    // h.barking();
}

void retIntVal()
{
    cout << i << endl; // 222
    i = 444;
    cout << i << endl; // 444
}