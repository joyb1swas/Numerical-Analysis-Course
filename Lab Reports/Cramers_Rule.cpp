#include <iostream>
using namespace std;

int main()
{
    double a1, b1, c1, a2, b2, c2;
    cout << endl;
    cout << "Enter values for the system a1*x + b1*y = c1\n";
    cout << "Enter values of a1 b1 c1 = ";
    cin >> a1 >> b1 >> c1;
    cout << endl;
    cout << "Enter values for the system a2*x + b2*y = c2\n";
    cout << "Enter values of a2 b2 c2 = ";
    cin >> a2 >> b2 >> c2;

    double D = a1 * b2 - a2 * b1;
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    if (D == 0)
    {
        cout << "\nNo unique solution (D = 0)." << endl;
        cout << endl;
        return 0;
    }

    double x = Dx / D;
    double y = Dy / D;

    cout << "\nDeterminants:\n";
    cout << "D  = " << D << endl;
    cout << "Dx = " << Dx << endl;
    cout << "Dy = " << Dy << endl;

    cout << "\nSolution using Cramer's Rule:\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << endl;

    return 0;
}

/*
2 3 8
1 -2 -3
*/
