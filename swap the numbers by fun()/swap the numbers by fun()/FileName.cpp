#include<iostream>
using namespace std;

int swap(int num ,int dig);

int main() {
	int num;
	cout << "Enter the four digit number : ";
	cin >> num;
	int dig = num;

	swap(num, dig);
	return 0;
}
int swap(int num , int dig) {
	
	
	

	while (num > 0) {

		dig = num % 10;
		cout << "DIGIT = " << dig << "\n";

		num /= 10;
		
	}
	return num;
}