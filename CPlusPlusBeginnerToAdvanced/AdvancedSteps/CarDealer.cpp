#include <iostream>
#include <string>

using namespace std;

//static class CarDealer {
//protected:
//	int numberOfCars;
//
//public:
//	//user-defined default constructor
//	CarDealer(int number = 0) :numberOfCars(number) {}
//	//virtual Destructor
//	virtual ~CarDealer() {};
//	//virtual function
//	virtual int value() const = 0;
//
//};
//
//class Ferrari : public CarDealer {
//public:
//	//price per ordered cars
//	static int price;
//	Ferrari(int number) : CarDealer(number) { cout << "We bought so many Ferraris: " << number << endl; }
//	virtual int value() const { return numberOfCars * price; }
//};
////set the static int price to 200.000
//int Ferrari::price = 200000;
//
//class Audi : public CarDealer {
//public:
//	static int price;
//	Audi(int number) : CarDealer(number) { cout << "We bought so many Audis: " << number << endl; }
//	virtual int value() const { return numberOfCars * price; }
//};