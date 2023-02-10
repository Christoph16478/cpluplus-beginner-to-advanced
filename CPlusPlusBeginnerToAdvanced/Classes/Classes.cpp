// Bsp05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

/*
Klasse auto
Baujhar, Marke, KmStand
Fahren, Tanken,
Mit fahren wird Energie weniger.
Mit Tanken wird der Tank hoeher.
Baujahr und Marke in Konstruktor.
*/

class Lebewesen
{
public:
    void Essen()
    {
        cout << "Lebewesen isst" << endl;
    }
    void Laufen()
    {
        cout << "Lebewesen l�uft" << endl;
    }
private:
};

class Mensch : public Lebewesen // public weil es sich um eine �ffentliche Vererbung handelt.
{
public:
    Mensch(string name)
    {
        name = n;
    }
    void Sprechen()
    {
        cout << "Mensch sagt Hallo" << endl;
    }
private:
    string n;
};

class Hund : public Lebewesen
{
public:
    void Bellen()
    {
        cout << "wuff wuff" << endl;
    }
private:

};

class Rechteck
{
public: // Von au�en erreichbar

    // Konstruktor
    Rechteck(double b, double h)
    {
        breite = b;
        hoehe = h;
    }

    // Methoden
    double getFlaeche()
    {
        return breite * hoehe;
    }

private: // Nicht von au�en erreichbar
    double breite, hoehe;
};

class Auto
{
public:
    // variables
    std::string Marke = "";

    // constructor
    Auto(std::string Marke, int Baujahr)
    {
        this->Marke = Marke;
        this->Baujahr = Baujahr;
    }

    // methods
    void fahren(int KmStand)
    {
        if (Tankfuellung > 0)
        {
            Tankfuellung -= KmStand;
            KmStand += KmStand;
        }

        if (Tankfuellung < 0)
        {
            std::cout << "Bitte tanken" << std::endl;
        }
    }

    void tanken(int Tankfuellung)
    {
        this->Tankfuellung += Tankfuellung;
    }

private: // Nur intern erreichbar. Kann nur innerhalb der Klasse Person verwendet werden.
    int Baujahr = 0;
    int Tankfuellung = 50;
    int KmStand = 0;
};

int main()
{
    Lebewesen a;
    a.Laufen();

    Mensch m;
    m.Sprechen();
    m.Laufen();
    // Mensch soll auch Essen und Laufen k�nnen

    Hund h;
    h.

    Rechteck r(3, 4);
    double A = r.getFlaeche();
    cout << "Flaeche : " << A;

    Auto erstesAuto("Bentley", 2001);
    erstesAuto.fahren(30);
}
