#include<iostream>
using namespace std;

char uppercase(char lower_case);

int main() {

	char lower_case;
	char result;
	cout << "Enter a Alphabet :";
	cin >> lower_case;

	uppercase(lower_case);

	

	return 0;
	
}
char uppercase(char lower_case ) {

	if (islower(lower_case)) {
		cout << "As the letter is Lower case therefore .\n" << "It is converted to ( " << char (toupper(lower_case) )<< " )";
	}
	else if ( isupper(lower_case)) {
		cout << "The Letter is upper case :";
	}
	else {
		cout << "The input is not an Alphabet :";
	}
	return 0;
}