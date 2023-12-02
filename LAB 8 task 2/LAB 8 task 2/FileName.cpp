#include<iostream>
using namespace std;

double power(double n, int p = 2);

int main() {
    double n;
    int p;

    cout << "ENTER THE NUMBER: ";
    cin >> n;
    cout << "ENTER THE POWER: (Press Enter to use the Default value) ";


    cin >> p;

    double result = power(n, p);
    cout << "THE RESULT OF THE NUMBER RAISED TO ITS POWER IS = " << result;

    return 0;
}

double power(double n, int p=2) {
    double result = 1.0;
    for (int i = 1; i <= p; i++) {
        result *= n;
    }
    return result;
}
