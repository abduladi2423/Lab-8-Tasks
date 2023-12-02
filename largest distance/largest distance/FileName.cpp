#include<iostream>
using namespace std;

double larger(double length_one,double length_two);

int main() {
	double length_one;
	double length_two;
	double greatest;
	cout << "Enter the First distance :\n";
	cin >> length_one;
	cout << "Enter the second distance :\n";
	cin >> length_two;

	greatest = larger(length_one, length_two);
	cout << "The Largest of the Two distances is = " << greatest;

	return 0;
}
double larger(double length_one, double length_two) {
	double greatest;
	if (length_one >= length_two) {
		greatest = length_one;
	}
	else if (length_two > length_one) {
		greatest=length_two;
	}
	
	return greatest;
}