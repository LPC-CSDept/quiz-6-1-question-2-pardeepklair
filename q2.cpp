#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
void getInput(int &, int &, int &);

// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format



void getInput(int &n1, int &n2, int &n3) {
	cout << "Enter Number 1: ";
	cin >> n1;
	cout << "Enter Number 2: ";
	cin >> n2;
	cout << "Enter Number 3: ";
	cin >> n3;

}






void printResult(int n1, int n2, int n3, int min) {
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;

}