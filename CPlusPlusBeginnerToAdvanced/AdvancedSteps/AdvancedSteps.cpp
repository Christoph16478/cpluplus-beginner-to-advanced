#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cassert>
// #include "BMR.h"
#include "bubbleSort.h"
#include "myPrintFunction.h"
#include "binarySearchFunctions.h"
#include "CarDealer.cpp"

const int CAPACITY = 100;
const int ROWS = 13;
const int COLS = 13;
const char WHITESPACE = ' ';
const char STAR = '*';
const double pi = 3.141592;
const int NUM_ELEMENTS = 6;
// const  double pi = 3.141592;
const int n = 22;

using namespace std;

string studentName[CAPACITY];
string subject[CAPACITY];
int studentScore[CAPACITY];

inline float radian(float degree);
typedef double(*function)(double);
inline double function_1(double);
inline double function_2(double);
function arrayFunctionPointer[] = { function_1, function_2 };
inline void tabularValue(function, double, double, double);
inline void studentInfo(string, string, int);
inline void lookUpStudent();
inline void addStudent();
inline void editStudent();
inline void deleteStudent();
inline void defineVector(vector<vector<int> >&);
// inline void printVector(const vector<vector<int> >&);
inline int calculateSum(vector<vector<int> >&);
typedef double(*function)(double);
double usualIntegral(double);
inline double exponentialIntegral(double);
inline double simpsonsRule(double, double, function);
//threshold value for the convergence criterion
const double tolerance = 1e-6; //0.00001
typedef double(*funct)(double);
//trigonometric functions
inline double function_3(double x) { return sin(x); }
inline double function_4(double x) { return cos(x); }
inline int counter(int);
//filling the vector
//inline void fillVector(vector<int>&);
//printing the vector
// inline void printVector(const vector<int>&);
//boolean-function for checking whether the number already exists or not
inline bool searchVector(int, vector<int>&);
inline void DisplayA();
inline void DisplayI();
inline void DisplayC();
inline void DisplayPlus();
inline void DisplayX();
inline int getScore(string);
inline void findHighestScore(int, int, int, int); inline
inline void findLowestScore(int, int, int, int);
inline void findAverageScore(int, int, int, int);
inline double infiniteSeries(int);

class numericalDifferentiation
{
private:
	//point where the derivative is evaluated
	double x;
	//step size
	double n;
	funct Function;

public:
	numericalDifferentiation(double X, funct f) { x = X; Function = f; n = 1.0 / 2; }
	double differenceQuotient(void);
	void extrapolation(void);

};

int main()
{
	cout << "================================= VERIFICATION TECHNIQUE ALGORITHM =================================\n" << endl;

	int i, j;
	cout << "please enter two non-negative numbers: ";
	cin >> i >> j;
	// precondition: i >= 0 && j >= 0 
	int x = i, y = j, z = 0;
	assert(z + x * y == i * j); // assertion
	while (x > 0)	// example: 2 1
	{
		if (x % 2 == 1)
		{
			z += y;
		}
		y *= 2;	// first cycle: x = i = 2; y = j = 1 --> (0 + 2*1 == 2*1)
		x /= 2;	// second cycle: z = 2, y = 4, x = 0 --> (2 + 0*4 == 2*1)
		assert(z + x * y == i * j); // while loop invariant 

	}
	assert(z + x * y == i * j); //Postcondition 
	cout << "The product is: " << z << endl;



	cout << "================================= VALUE TABLE OF TWO FUNCTIONS =================================\n" << endl;

	// for the first called function: starting at i = 0 and is incremented up to i = 1
	for (int i = 0; i < 2; i++)
	{
		tabularValue(arrayFunctionPointer[i], i, i + 1, 0.2);
		cout << endl;
	}

	cout << "================================= SUM OF VECTOR ELEMENTS =================================\n" << endl;

	int menuChoice = 0;
	do {
		cout << "\twelcome to the main menu for transcripts of students\t" << endl;
		cout << "1. look up the scores of any student!" << endl;
		cout << "2. add the name of student, subject and the exam score!" << endl;
		cout << "3. edit the name of student, subject and the exam score!" << endl;
		cout << "4. delete the name of student, subject and the exam score!" << endl;
		cout << "5. exit!" << endl;

		cout << "please enter your choice: ";
		cin >> menuChoice;

		while (menuChoice < 1 || menuChoice > 5)
		{
			cout << "your choice has to be in the range of 1-4" << endl;
			cout << "please re-enter your choice: ";
			cin >> menuChoice;
		}

		switch (menuChoice)
		{
		case 1:
			lookUpStudent();
			break;
		case 2:
			addStudent();
			break;
		case 3:
			editStudent();
			break;
		case 4:
			deleteStudent();
			break;
		default:
			cout << "You exited the program!" << endl;
			break;
		}


	} while (menuChoice != 5);

	// -----------------------------------------------------------------------------------------
	// SUM OF VECTOR ELEMENTS
	// -----------------------------------------------------------------------------------------
	//vector<vector<int> > matrix;
	//defineVector(matrix);
	// printVector(matrix);
	//cout << "The sum is: " << calculateSum(matrix) << endl;

	// -----------------------------------------------------------------------------------------
	// SUM OF EACH ROW IN MULTIDIMENSIONAL ARRAY
	// -----------------------------------------------------------------------------------------
	//vector<vector<int> > matrix;
	//defineVector(matrix);
	//printVector(matrix);
	//cout << "The sum is: " << calculateSum(matrix) << endl;

	cout << "================================= SIMPSONS RULE OF DEFINITION INTEGRAL =================================\n" << endl;

	assert(n % 2 == 0);
	cout << "Solution to the first integral: " << fixed << setprecision(6) << simpsonsRule(0, 3, usualIntegral) << endl;
	cout << "Solution to the second integral: " << fixed << setprecision(6) << simpsonsRule(0.1, 1.3, exponentialIntegral) << endl;

	cout << "================================= RICHARD EXTRAPOLATION =================================\n" << endl;

	numericalDifferentiation differentiate_f1(1.0, function_1);
	numericalDifferentiation differentiate_f2(1.0, function_2);
	differentiate_f1.extrapolation();
	differentiate_f2.extrapolation();


	cout << "================================= RECURSIVE FACTORIAL =================================\n" << endl;

	int number;
	cout << "Please type in an integer to calculate the factorial of it: ";
	cin >> number;
	cout << counter(number) << endl;

	cout << "================================= READING CSV =================================\n" << endl;

	// boolean-variable to decide which section of the csv-file should be read in
	bool foundStringDelimiter = false;
	// vector of vectors for holding the data
	vector<vector<double> > data;
	ifstream myFile("C:\\Temp\\data_csv.txt", ios::in);
	if (myFile.is_open())
	{
		cout << "Successfully opened the csv-file!" << endl;

		while (!myFile.eof())
		{
			// hold the read in line
			string line;
			// read line from csv-file into line
			getline(myFile, line);

			if (foundStringDelimiter)
			{
				if (line == "Values #2")
				{
					// here the relevant part of the csv-file ends
					foundStringDelimiter = false;
				}
				else
				{
					// array for holding the position of the comma
					int commaPos[2];
					int posIndex = 0;

					for (int i = 0; i < line.length(); i++)
					{
						if (line[i] == ',')
						{
							commaPos[posIndex] = i;
							posIndex++;
						}

					}
					// temporary variables for the strings representing x, y and z points
					string x_string, y_string, z_string;
					double x_temp, y_temp, z_temp;

					// extracting values by making use of the substr-function
					x_string = line.substr(0, commaPos[0]);
					y_string = line.substr(commaPos[0] + 1, commaPos[1] - commaPos[0] - 1);
					z_string = line.substr(commaPos[1] + 1);

					// conversion of string into a double datatype
					x_temp = atof(x_string.c_str());
					y_temp = atof(y_string.c_str());
					z_temp = atof(z_string.c_str());

					// temporary double vector variable
					vector<double> temp;
					//add x_temp, y_temp as well as z_temp to the temporary vector
					temp.push_back(x_temp);
					temp.push_back(y_temp);
					temp.push_back(z_temp);
					// push the temporary vector onto the vector of vectors 
					data.push_back(temp);

				}

			}
			else
			{
				if (line == "Values #1")
				{
					// here the relevant part in our csv-file starts
					foundStringDelimiter = true;
				}
			}

		}

	}
	else
	{
		cout << "Unable to open the csv-file!" << endl;
	}

	// close the csv-file
	myFile.close();

	// printing the double values
	for (int i = 0; i < data.size(); i++)
	{
		cout << fixed << setprecision(2) << "x = " << data[i][0] << ", y = " << data[i][1] << ", z = " << data[i][2] << endl;
	}

	cout << "================================= POINTERS =================================\n" << endl;

	// initialize the first part of the array
	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	// int* arrayPointer = enlargeArray(array, CAPACITY);
	for (int i = 0; i < CAPACITY * 2; i++)
	{
		// cout << arrayPointer[i] << " ";
	}
	cout << endl;


	cout << "================================= MULTIPLY EVEN AND ODD NUMBERS =================================\n" << endl;
	
	// alternative solution without functions
	int productOfOddNumbers = 1;
	int productOfEvenNumbers = 1;
	int counter = 0;

	for (int counter = 1; counter <= 7; counter++)
	{
		if (counter % 2 != 0)
		{
			productOfOddNumbers *= counter;
		}
		else
		{
			productOfEvenNumbers *= counter;
		}

	}

	cout << "The product of even numbers is: " << productOfEvenNumbers << endl;
	cout << "The product of odd numbers is: " << productOfOddNumbers << endl;

	/*int numbers = 0;
	cout << "The product of even numbers is: " << evenNumbers(numbers) << endl;
	cout << "The product of odd numbers is: " << oddNumbers(numbers) << endl;*/

	cout << "================================= LINESPACE METHOD =================================\n" << endl;

	// declaration of column-arrays 
	double col_1[CAPACITY];
	double col_2[CAPACITY];
	// initialization of all elements in these two arrays to zeros
	for (int i = 0; i < CAPACITY; i++)
	{
		col_1[i] = 0;
		col_2[i] = 0;
	}
	// declaration of linspace-array holding 10 elements
	double linspace[10];

	for (int i = 0; i < 10; i++)
	{
		linspace[i] = 0;
	}
	// linspace-array producing 10 elements ranging from 0.0 to 1.0
	double start, end = 0.0;
	// adjust the ranges
	start = 0.0;
	end = 1.0;
	for (int i = 0; i < 10; i++)
	{
		double I = static_cast<double>(i);
		double n = static_cast<double>(10) - 1;
		// x_1 + ( (x_2 - x_1) / n) * i
		linspace[i] = start + ((end - start) / n) * I;
		// cout << "Values produced by the linspace-function: " << linspace[i] << endl;
	}
	// distribute linspace-function in column 1
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			// iteration scheme: i, j = 0 yield col_1[0] = linspace[0] --> 0.0 
			// i = 1, j = 0 yield col_1[1] = linspace[0] --> 0.0
			col_1[j * 10 + i] = linspace[j];
		}

	}
	// distribute linspace-function in column 2 using a modulo-operator
	for (int i = 0; i < CAPACITY; i++)
	{
		// iteration scheme: col_2[0] = linspace[0 % 10] = linspace[0] --> 0.0
		// col_2[1] = linspace[1 % 10] = linspace[1] --> 0.11
		// ...
		// col_2[10] = linspace[10 % 10] = linspace[0] --> 0.0
		col_2[i] = linspace[i % 10];
	}
	// printing the two columns 
	for (int i = 0; i < CAPACITY; i++)
	{
		cout << setprecision(3) << fixed << col_1[i] << "\t" << col_2[i] << endl;
	}

	cout << "================================= DISPLAY =================================\n" << endl;

	vector<int> myVector;
	// fillVector(myVector);
	printVector(myVector);
	int enteredNumber = 0;
	cout << "Please type in an int to compare with the numbers in the list: ";
	cin >> enteredNumber;
	if (searchVector(enteredNumber, myVector) == true)
	{
		cout << "The number already exists!" << endl;
	}
	else
		cout << "The number was not typed in before!" << endl;

	cout << "================================= DISPLAY =================================\n" << endl;

	char pattern[ROWS][COLS];
	DisplayA();
	DisplayI();
	DisplayC();
	DisplayPlus();
	DisplayX();

	cout << "================================= EXAM SCORE =================================\n" << endl;

	int examM, examP, examC, examE;
	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0:
			examM = getScore("Maths");
			break;
		case 1:
			examP = getScore("Physics");
			break;
		case 2:
			examC = getScore("Chemistry");
			break;
		default:
			examE = getScore("English");
			break;

		}
	}
	findLowestScore(examM, examP, examC, examE);
	findHighestScore(examM, examP, examC, examE);
	findAverageScore(examM, examP, examC, examE);

	cout << "================================= EULERS NUMBER =================================\n" << endl;

	int number2;
	cout << "Please type in a value for approximating Euler's number: ";
	cin >> number2;

	//uncomment for using recursive function
	/*float e = 1.0f;
	double value = 0.0;
	for (int i = 1; i <= number; i++)
	{
		value = infiniteSeries(i);
		e += 1.0 / value;
	}
	cout << e << endl;*/
	cout << "The approximated value for Euler's number is: " << infiniteSeries(number2) << endl;

	cout << "================================= DEGREE TO RADIAN =================================\n" << endl;

	float r = 0.0f;
	cout << "Conversion of 1 - 360 degrees to radians: " << endl;
	for (int i = 1; i <= 360; i++)
	{
		r = radian(i);
		cout << i << " Degree equals to " << setprecision(6) << fixed << r << " radians\n";
	}

	// -----------------------------------------------------------------------------------------
	// CAR DEALER
	// -----------------------------------------------------------------------------------------
	//CarDealer* C;
	//Ferrari F(2);
	//Audi A(4);
	//int sum = 0;
	////C is set equal to the address of Ferrari 
	//C = &F;
	//cout << "The type of the polymorphic object is: " << typeid(*C).name() << endl;
	//sum += (*C).value();
	////sum += C -> value();
	//C = &A;
	//cout << "The type of the polymorphic object is: " << typeid(*C).name() << endl;
	//sum += (*C).value();
	//cout << "The total price of all ordered cars is: " << sum << " Euros\n";

	cout << "================================= BUBBLE SORT ALGORITHM =================================\n" << endl;

	int array1[NUM_ELEMENTS];
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		array1[i] = (17 * i + 5) % 10;
	}
	cout << "current array filled with arbitrary numbers: " << endl;
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		cout << array1[i] << " ";
	}
	cout << endl;
	bubbleSort(NUM_ELEMENTS, array1, ascendingSort);
	cout << "sorted in an ascending way: " << endl;
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		cout << array1[i] << " ";
	}
	cout << endl;
	bubbleSort(NUM_ELEMENTS, array1, descendingSort);
	cout << "sorted in an descending way: " << endl;
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		cout << array1[i] << " ";
	}
	cout << endl;

	cout << "================================= BINARY TO DECIMAL =================================\n" << endl;

	string line = "";
	cout << "please enter a binary number to convert to its decimal equivalent: ";
	getline(cin, line);
	int decimalNumber = 0;
	int binaryNumber = 0;
	int multiplier = 1;
	for (int i = line.length(); i > 0; i--)
	{
		//extract one number per each iteration from typed in binary number in a reversed order
		string number = line.substr(i - 1, 1);
		//convert number using c_str-funct. from string to int and assign it to binaryNumber
		//in the video "atof"-funct. was used which also works but the correct funct. is "stoi"
		binaryNumber = stoi(number.c_str());
		//calculate decimalNumber by using following calculation scheme (from right to left) 
		//1100 = 0*1 + 0*2 + 1*4 + 1*8 = 12
		//110011 = 1*1 + 1*2 + 0*4 + 0*8 + 1*16 + 1*32 = 51
		decimalNumber += binaryNumber * multiplier;
		multiplier *= 2;
	}
	cout << "The converted decimal number is: " << decimalNumber << endl;

	// -----------------------------------------------------------------------------------------
	// BINARY SEARCH
	// -----------------------------------------------------------------------------------------
	//vector<int> myVector;
	//fillVector(myVector);
	//printVector(myVector);
	//sortVector(myVector);
	//// int enteredNumber = 0;
	//cout << "Please type in an int to compare with the numbers in the list: ";
	//cin >> enteredNumber;
	//if (binarySearchAlgorithm(enteredNumber, myVector) == true)
	//	cout << "The number already exists! " << endl;
	//else
	//	cout << "The number was not typed in before! " << endl;

	cout << "================================= BODYMAS INDEX =================================\n" << endl;
	
	int age;
	int height;
	double weight;
	char input;
	cout << "Please type in the gender of the person you want to calculate the BMR for by typing 'm' or 'f': ";
	cin >> input;

	if (input == 'f')
	{
		cout << "Please type in the age: ";
		cin >> age;

		cout << "Please type in the height [cm]: ";
		cin >> height;

		cout << "Please type in the weight [kg]: ";
		cin >> weight;

		// passing the parameters in using the Overload constructor
		// BMR Female(age, height, weight);
		// cout << "The age of the patient is: " << Female.getAge() << endl;
		// cout << "The height of the patient is: " << Female.getHeight() << endl;
		// cout << "The weight of the patient is: " << Female.getWeight() << endl;
		// cout << "The BMR rate of the patient is: " << Female.calculateBMRFemale() << " [kcal]\n";
	}
	else
	{
		cout << "Please type in the age: ";
		cin >> age;

		cout << "Please type in the height [cm]: ";
		cin >> height;

		cout << "Please type in the weight [kg]: ";
		cin >> weight;

		// BMR Male;
		// passing in the parameters using the Mutator function
		// Male.setAge(age);
		// Male.setHeight(height);
		// Male.setWeight(weight);

		// cout << "The age of the patient is: " << Male.getAge() << endl;
		// cout << "The height of the patient is: " << Male.getHeight() << endl;
		// cout << "The weight of the patient is: " << Male.getWeight() << endl;
		// cout << "The BMR rate of the patient is: " << Male.calculateBMRMale() << " [kcal]\n";
	}

	cout << "================================= 2D ARRAYS =================================\n" << endl;

	//int row, col;
	//// declare array as a pointer to pointers
	//int** array0;
	//// ask for user input
	//cout << "Enter number of rows: ";
	//cin >> row;
	//cout << "Enter number of cols: ";
	//cin >> col;
	//// creation of an array of int pointers
	//array0 = new int* [row];
	//// whatever the value for row/col will be, so many times the array is created
	//// e.g. if row, col = 2 then we will get a 2x2-matrix (4 integers)
	//for (int i = 0; i < row; i++)
	//{
	//	array0[i] = new int[col];
	//}
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		// initialize all elements to zero
	//		// array[i][j] = 0;
	//		array0[0][0] = 0;
	//		// array0[0][1] = 1; // C6386 Buffer overrun while writting to <COMPLEX_EXPR>
	//		array0[1][0] = 2;
	//		array0[1][1] = 3;

	//	}

	//}
	//// memory deallocation: deleting the dynamically created array 
	//for (int i = 0; i < row; i++)
	//{

	//	delete[] array0[i];
	//	delete[] array0;

	//	// delete also pointer itself from memory
	//	array0 = NULL;
	//}
	//// print the matrix
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		// cout << array0[i][j] << " "; // C6011 Dereferencing NULL pointer <COMPLEX_EXPR>
	//	}
	//	cout << endl;
	//}
	//// memory deallocation: deleting the dynamically created array 
	//for (int i = 0; i < row; i++)
	//{
	//	delete[] array0[i];
	//	delete[] array0;

	//	// delete also pointer itself from memory
	//	array0 = NULL;
	//}

	cout << "================================= FIRST FUNCTION CALL =================================\n" << endl;

	system("chcp 125");
    setlocale(LC_ALL, "German");

    print_hello_world();
    
    return 0;
}

double function_1(double x)
{
	return sqrt(x);
}

double function_2(double x)
{
	return exp(x);
}


void tabularValue(function f, double a, double b, double n)
{
	//For the first iteration of the first called function: x = a = 0, b = 1 --> 1 < 1.1
	//For the first iteration of the second called function: x = a = 1, b = 2 --> 2 < 2.1
	for (double x = a; x < b + n / 2; x += n)
	{
		cout << x << "\t" << f(x) << endl;
	}

}

void studentInfo(string studentName, string subject, int studentScore)
{
	cout << "Student's name: " << studentName << endl;
	cout << "Subject: " << subject << endl;
	cout << "Student's exam score: " << studentScore << endl;

}

void lookUpStudent()
{
	bool foundRecord = false;
	int arrIndex = 0;
	string searchStudent;
	cin.ignore();

	cout << "Enter the student's name: ";
	getline(cin, searchStudent);

	while (!foundRecord && arrIndex < CAPACITY)
	{
		if (studentName[arrIndex] == searchStudent)
		{
			foundRecord = true;
		}
		else
			arrIndex++;
	}

	if (foundRecord)
	{
		studentInfo(studentName[arrIndex], subject[arrIndex], studentScore[arrIndex]);
		cout << endl << endl;
	}
	else
		cout << "The name of the student could not be found!" << endl;

}

void addStudent()
{
	bool foundRecord = false;
	int arrIndex = 0;

	while (!foundRecord && arrIndex < CAPACITY)
	{
		if (studentName[arrIndex] == "")
		{
			foundRecord = true;
		}
		else
			arrIndex++;
	}

	if (foundRecord)
	{
		cin.ignore();
		cout << "Please type in the name of the student: ";
		getline(cin, studentName[arrIndex]);

		cout << "Please type in the subject in which the exam was taken: ";
		getline(cin, subject[arrIndex]);

		cout << "Please type in the score: ";
		cin >> studentScore[arrIndex];
		cout << endl << endl;
	}
	else
		cout << "The size of max. students is exceeded, no more entries allowed" << endl;

}

void editStudent()
{
	bool foundRecord = false;
	int arrIndex = 0;
	int submenuChoice = 0;
	string searchStudent;

	cin.ignore();
	cout << "Enter the student's name to be edited: ";
	getline(cin, searchStudent);

	while (!foundRecord && arrIndex < CAPACITY)
	{
		if (studentName[arrIndex] == searchStudent)
		{
			foundRecord = true;
		}
		else
			arrIndex++;
	}

	if (foundRecord)
	{
		studentInfo(studentName[arrIndex], subject[arrIndex], studentScore[arrIndex]);

		do {
			cout << "You might want to edit the name of the student by chosing: " << endl;
			cout << "1. Student's name" << endl;
			cout << "2. Subject in which the exam was taken" << endl;
			cout << "3. Score of the exam" << endl;
			cout << "4. Exit" << endl;
			cin >> submenuChoice;

			while (submenuChoice < 1 || submenuChoice > 4)
			{
				cout << "Your choice has to be in the range of 1-4" << endl;
				cout << "Please re-enter your choice: ";
				cin >> submenuChoice;
			}

			switch (submenuChoice)
			{
			case 1:
				cout << "Current name of the student: ";
				cout << studentName[arrIndex] << endl;
				cin.ignore();
				cout << "Enter the new name of the student: ";
				getline(cin, studentName[arrIndex]);
				break;
			case 2:
				cout << "Current subject: ";
				cout << subject[arrIndex] << endl;
				cin.ignore();
				cout << "Enter the new subject: ";
				getline(cin, subject[arrIndex]);
				break;
			case 3:
				cout << "Current score of the exam: ";
				cout << studentScore[arrIndex] << endl;
				cin.ignore();
				cout << "Enter the new score: ";
				cin >> studentScore[arrIndex];
				break;
			case 4:
				cout << "You exited the program!" << endl;
				break;
			}
		} while (submenuChoice != 4);
	}
	else
	{
		cout << "The student you are looking for is not in the list!" << endl;
	}
}

void deleteStudent()
{
	bool foundRecord = false;
	int arrIndex = 0;
	int menuChoice = 0;
	string searchStudent;
	char confirmDeletion;

	cin.ignore();
	cout << "Enter the student's name to be deleted: ";
	getline(cin, searchStudent);

	while (!foundRecord && arrIndex < CAPACITY)
	{
		if (studentName[arrIndex] == searchStudent)
		{
			foundRecord = true;
		}
		else
			arrIndex++;
	}

	if (foundRecord)
	{
		studentInfo(studentName[arrIndex], subject[arrIndex], studentScore[arrIndex]);
		cout << "Are you sure that you want to delete this student from the list, press y (yes) or n (no)?";
		cin >> confirmDeletion;

		if (confirmDeletion == 'Y' || confirmDeletion == 'y')
		{
			studentName[arrIndex] = "";
			subject[arrIndex] = "";
			studentScore[arrIndex] = 0;
		}

	}
	else
		cout << "The student you are looking for is not in the list!" << endl << endl;
}

void defineVector(vector<vector<int> >& myVector)
{
	int row, col;
	cout << "Please type in the number of rows: ";
	cin >> row;
	cout << "Please type in the number of cols: ";
	cin >> col;

	for (int i = 0; i < row; i++)
	{
		//temporary vector for i, j
		vector<int> temp;
		for (int j = 0; j < col; j++)
		{
			//add j to the temporary vector
			temp.push_back(j);
		}
		//push the temporary vector back onto the vector of vectors 
		myVector.push_back(temp);
	}

	int input;
	cout << "Please type in the exact amount of numbers matching your matrix dimension (" << row * col << " numbers): ";

	for (int i = 0; i < myVector.size(); i++)
	{
		for (int j = 0; j < myVector[i].size(); j++)
		{
			cin >> input;
			myVector[i][j] = input;
		}

	}

}

//void printVector(const vector<vector<int> >& myVector)
//{
//	cout << "Vector of vector is filled with numbers: ";
//	for (int i = 0; i < myVector.size(); i++)
//	{
//		for (int j = 0; j < myVector[i].size(); j++)
//		{
//			cout << myVector[i][j] << " ";
//		}
//
//	}
//	cout << endl;
//
//}

int calculateSum(vector<vector<int> >& myVector)
{
	int total = 0;
	for (int i = 0; i < myVector.size(); i++)
	{
		for (int j = 0; j < myVector[i].size(); j++)
		{
			total += myVector[i][j];
		}

	}
	return total;
}

double usualIntegral(double x)
{
	if (fabs(x) < DBL_EPSILON)
	{
		return 1.0;
	}
	else
		return 1 / (1 + pow(x, 5));
}

double exponentialIntegral(double x)
{
	if (fabs(x) < DBL_EPSILON)
	{
		return 1.0;
	}
	else
		return 5 * x * exp(-2 * x);
}

double simpsonsRule(double a, double b, function f)
{
	double coefficient = 2.0;
	double delta_x = (b - a) / n; // 3 - 0 / 2 = 3/2
	double simpson = f(a) + f(b);

	for (int i = 1; i < n; i++)
	{
		simpson += (coefficient = 6 - coefficient) * f(a + i * delta_x);
	}
	return simpson * delta_x / 3; // (3/2)/3 * [1*1/(1+0^5) + 4*1/(1+(3/2)^5) + 1*1/(1+3^5)]
}

double numericalDifferentiation::differenceQuotient(void)
{
	//centered difference quotient
	return (Function(x + n) - Function(x - n)) / (2.0 * n);
}

void numericalDifferentiation::extrapolation(void)
{
	int i, r = 0;
	//array for holding 10 elements (extrapolated values)
	double prefactor, D[10];
	for (i = 0; i <= 9; i++)
		//initialization of the array
		D[i] = 0.0;

	do {

		if (r >= 1)
		{
			//e.g. r = 4 --> i = 4 -1 = 3 ...
			for (int i = r - 1; i >= 0; i--)
			{
				//We set D[0] to D[1] ...
				D[i + 1] = D[i];
			}

		}
		D[0] = differenceQuotient();
		prefactor = 1.0;
		cout << setw(2) << setprecision(6) << D[0];

		for (i = 1; i <= r; i++)
		{
			prefactor *= 4.0;
			D[i] = (prefactor * D[i - 1] - D[i]) / (prefactor - 1.0);
			cout << setw(10) << setprecision(6) << D[i];
		}
		//step value
		n /= 2.0;
		r++;
		cout << endl;

	} while (r <= 1 || fabs(D[r - 1] - D[r - 2]) > tolerance * fabs(D[r - 1]));
	cout << endl;

}

int counter(int number)
{
	//1! or 0! equal to 1
	if (number == 1 || number <= 0)
	{
		return 1;
	}
	else
	{
		return (number *= counter(number - 1)); //in the first iteration: 5 * (5-1) = 20
		//second iteration: 20 * (4-1) = 60
		//third iteration: 60 * (3-1) = 120 ...
	}
}

int* enlargeArray(int array[], int CAPACITY)
{
	//new pointer points to an array with 4 elements
	int* enlargedArray = new int[CAPACITY * 2];
	int value = 0;
	bool enteredNumberIn = false;

	do {
		for (int i = 0; i < CAPACITY * 2; i++)
		{
			if (i < CAPACITY)
			{
				enlargedArray[i] = array[i];
			}
			else
			{
				cout << "Please fill in the second half of the array by entering 10 numbers greater than 10: ";
				cin >> value;

				//ask for input and validate it
				while (value <= 10 || value == array[i])
				{
					enteredNumberIn = true;
					cout << "Invalid input, please fill in the second half of the array by typing in 10 numbers greater than 10: ";
					cin >> value;
				}
				enteredNumberIn = false;
				if (!enteredNumberIn)
				{
					enlargedArray[i] = value;
				}
			}
		}
	} while (enteredNumberIn); //keep looping while "enteredNumberIn" is true and stays false
	return enlargedArray;
}

//void fillVector(vector<int>& newMyVector)
//{
//	int input;
//	cout << "Please type in the numbers and stop with (-1): ";
//	cin >> input;
//
//	while (input != -1)
//	{
//		newMyVector.push_back(input);
//		cin >> input;
//	}
//}

//void printVector(const vector<int>& newMyVector)
//{
//	cout << "The existing numbers are: ";
//	for (int i = 0; i < newMyVector.size(); i++)
//	{
//		cout << newMyVector[i] << " ";
//	}
//	cout << endl;
//}


bool searchVector(int enteredNumber, vector<int>& newMyVector)
{
	for (int i = 0; i < newMyVector.size(); i++)
	{
		if (enteredNumber == newMyVector[i])
		{
			return true;
		}
	}
	return false;
}

void DisplayA()
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			if (r == 0 || r == ROWS / 2) //in the first iteration: r = 0; c = 0 up to 12 
				//[0][0]...[0][12]
				//r = 6; c = 0 up to 12
			{
				cout << STAR;
			}
			else if (c == 0 || c == COLS - 1) //in this case: c = 0; r = 0 up to 12
				//in the other case: c = 12, r = 0 up to 12
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
		cout << endl;
	}
}

void DisplayI()
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			if (c == COLS / 2) //in the first iteration: c = 6; r = 0 up to 12
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
		cout << endl;
	}
}

void DisplayC()
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			if (r == 0 || r == ROWS - 1) //in the first iteration: r = 0; c = 0 up to 12
				//r = 12; c = 0 up to 12
			{
				cout << STAR;
			}
			else if (c == 0)			//c = 0; r = 0 up to 12
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
		cout << endl;
	}
}

void DisplayPlus()
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			if (r == ROWS / 2)	//in the first iteration: r = 6; c = 0 up to 12
			{
				cout << STAR;
			}
			else if (c == COLS / 2)
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
		cout << endl;
	}
}

void DisplayX()
{
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			if (r == c)		// "\" [0][0], [1][1], [2][2]...
			{
				cout << STAR;
			}
			else if (c == COLS - 1 - r)	// "/" c = 13 - 1 -r (r = 0) --> c = 12, r = 0
				//[0][12]
				//the second iteration: c = 13 - 1 - r (r = 1) --> c = 11, r = 1
				//[1][11]...
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
		cout << endl;
	}
}

int getScore(string subject)
{
	int scores = 0;
	cout << "Please type in your score for " << subject << ": ";
	cin >> scores;

	while (scores < 0)
	{
		cout << "Invalid input, please re-enter your score!" << endl;
		cin >> scores;
	}
	return scores;
}

void findLowestScore(int s1, int s2, int s3, int s4)
{
	int lowest = 0;
	string subject = "";

	if (s1 < s2 && s1 < s3 && s1 < s4)
	{
		lowest = s1;
		subject = "Maths";
	}
	else if (s2 < s1 && s2 < s3 && s2 < s4)
	{
		lowest = s2;
		subject = "Physics";
	}
	else if (s3 < s1 && s3 < s2 && s3 < s4)
	{
		lowest = s3;
		subject = "Chemistry";
	}
	else
	{
		lowest = s4;
		subject = "English";
	}
	cout << "The lowest scores is obtained for " << subject << " with a score of " << lowest << endl;
}

void findHighestScore(int s1, int s2, int s3, int s4)
{
	int highest = 0;
	string subject = "";

	if (s1 > s2 && s1 > s3 && s1 > s4)
	{
		highest = s1;
		subject = "Maths";
	}

	else if (s2 > s1 && s2 > s3 && s2 > s4)
	{
		highest = s2;
		subject = "Physics";
	}

	else if (s3 > s1 && s3 > s2 && s3 > s4)
	{
		highest = s3;
		subject = "Chemistry";
	}

	else
	{
		highest = s4;
		subject = "English";
	}
	cout << "The highest scores is obtained for " << subject << " with a score of " << highest << endl;
}

void findAverageScore(int s1, int s2, int s3, int s4)
{
	int total = 0;
	int avg = 0;

	total += s1 + s2 + s3 + s4;
	avg = total / 4;

	cout << "The total score is: " << total << endl;
	cout << "The average score is: " << avg << endl;
}

double infiniteSeries(int number)
{
	float e = 1.0f;
	int factorial = 1;

	for (int i = 1; i <= number; i++)
	{
		//updates the factorial per each iteration
		factorial *= i;
		//updates the sum of series per each iteration
		e += 1.0 / factorial; //in the first iteration: 1 + 1/1 
		//second iteration: 1 + 1/1 + 1/2!
		//third iteration: 1 + 1/1 + 1/2! + 1/3! + ...
	}
	return e;
}

float radian(float degree) {
	float r = 0.0f;
	r = degree * pi / 180;
	return r;
}