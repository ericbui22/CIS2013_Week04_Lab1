#include <iostream>
using namespace std;

int large_number = 0; 
void printStuff(int);
void printStuff(int, int);

int main() {
	for (int i=0; i < 10;i++) {
		large_number = large_number + i;
		printStuff(i, large_number);
		cout << "Printing with one argument" << endl;
		printStuff(i);
	}

	return 0;
}

void printStuff(int num) {
	cout << "Printing x5 " << (num * 5) << " and no total was given " << endl;
}


void printStuff(int num, int total) {
	cout << "Printing x5 " << (num * 5) << " and total " << total <<endl;
	
}