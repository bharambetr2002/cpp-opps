// Program: Calculate compound interest

#include <iostream>
#include <cmath> // For pow() function // math function
using namespace std;

int main()
{
    double P, r, t, n, A, CI;

    // Taking inputs
    cout << "Enter Principal Amount (P): ";
    cin >> P;
    cout << "Enter Annual Interest Rate (r in %): ";
    cin >> r;
    cout << "Enter Time in Years (t): ";
    cin >> t;
    cout << "Enter Number of Times Interest is Compounded per Year (n): ";
    cin >> n;

    // Convert rate from percentage to decimal
    r = r / 100;

    // Compound Interest formula
    A = P * pow((1 + r / n), (n * t));
    CI = A - P;

    // Output the result
    cout << "Final Amount (A): " << A << endl;
    cout << "Compound Interest (CI): " << CI << endl;

    return 0;
}
