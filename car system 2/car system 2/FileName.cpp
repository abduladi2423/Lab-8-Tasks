#include<iostream>
using namespace std;

double charge_one(double hours_one);
double charge_two(double hours_two);
double charge_three(double hours_three);

double charge_one(double hours_one) {

	double bill;
	double per_hour = 2.00;
	double extra_time = 0.50;
	double all_day = 10.0;

	if (hours_one < 3.0) {

		 bill =  per_hour;
		
	}
	else if (hours_one > 3.0 && hours_one < 24.0) {

		double total_hours = hours_one - 3.0;
		total_hours *= 0.5;
		 bill = total_hours + per_hour;

		
	}
	else if (hours_one == 24.0) {
		 bill = all_day;
		
	}
	else {
		cout << "Invalid input";
	}

	return bill;

}

double charge_two(double hours_two) {
	double bill_one;
	double per_hour = 2.00;
	double extra_time = 0.50;
	double all_day = 10.0;

	if (hours_two < 3.0) {

		bill_one = per_hour;
	}
	else if (hours_two > 3.0 && hours_two < 24.0) {

		double total_hours = hours_two - 3.0;
		total_hours *= 0.5;
		 bill_one = total_hours + per_hour;

		
	}
	else if (hours_two == 24.0) {
		 bill_one = all_day;
		
	}
	else {
		cout << "Invalid input";
	}

	return bill_one;
}

double charge_three(double hours_three) {
	double bill_two;
	double per_hour = 2.00;
	double extra_time = 0.50;
	double all_day = 10.0;

	if (hours_three < 3.0) {

		 bill_two = per_hour;
		
	}
	else if (hours_three > 3.0 && hours_three < 24.0) {

		double total_hours = hours_three - 3.0;
		total_hours *= 0.5;
		 bill_two = total_hours + per_hour;

		
	}
	else if (hours_three == 24.0) {
	 bill_two = all_day;
	
	}
	else {
		cout << "Invalid input";
	}

	return bill_two;
}
int main() {
	
	double hours_one;
	double hours_two;
	double hours_three;
	

	cout << "How Many Hours Have You Parked The Car 1:\n";
	cin >> hours_one;
	cout << "How Many Hours Have You Parked The Car 2:\n";
	cin >> hours_two;
	cout << "How Many Hours Have You Parked The Car 3:\n";
	cin >> hours_three;

	double bill = charge_one(hours_one);
	double bill_one = charge_two(hours_two);
	double bill_two = charge_three(hours_three);

	cout << "  Cars          " << "Hours          " << "Charges\n";
	cout << "   1                 " << hours_one << "                 " << bill<<"$"<<"\n";
	cout << "   2                 " << hours_two << "                 " << bill_one<< "$" << "\n";
	cout << "   3                 " << hours_three << "                 " << bill_two<< "$" << "\n";

	cout<<"     Total      " << hours_one + hours_two + hours_three << "            " << bill + bill_one + bill_two<<"$";

	return 0;
}
	
