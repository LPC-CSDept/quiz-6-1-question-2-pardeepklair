#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
void getInput(int &, int &, int &);
void printResult(int, int, int, int);
int  findMin(int, int, int); 
// ******************************

void getInput(int &n1, int &n2, int &n3) {
	cout << "Enter Number 1: ";
	cin >> n1;
	cout << "Enter Number 2: ";
	cin >> n2;
	cout << "Enter Number 3: ";
	cin >> n3;

}

int  findMin(int n1, int n2, int n3) {
	if(n1 < n2 && n1 < n3)
    	return n1;

    else if(n2 < n3 && n2 < n1)
    	return n2;

    else
		return n3;

}


// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format

void printResult(int n1, int n2, int n3, int min) {
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;

}

int main() {
	int n1, n2, n3, min;

	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);

}