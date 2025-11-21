#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return x * x - 4;
}

int main()
{

    double x1, x2, x0, f0, f1;
    double tol = 0.0001;

    cout << endl;
    cout << "Enter x0: ";
    cin >> x0;
    cout << "Enter x1: ";
    cin >> x1;
    cout << endl;

    int maxIter = 20, iter = 0;
    cout << "\n            Iteration Table for Secant Method      \n";
    cout << "------------------------------------------------------------------------------------------";
    cout << endl;
    cout << "Iter\t x0\t     x1\t     x2\t     f(x1)\t Error\n";

    while (iter < maxIter)
    {
        f0 = f(x0);
        f1 = f(x1);

        x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
        double error = fabs(x2 - x1);

        cout << iter + 1 << "\t "
             << x0 << "\t " << x1 << "\t "
             << x2 << "\t " << f1 << "\t "
             << error << endl;

        if (error < tol)
        {
            cout << "------------------------------------------------------------------------------------------";
            cout << endl;
            cout << "\nRoot = " << x2 << endl;
            cout << endl;
            break;
        }

        x0 = x1;
        x1 = x2;
        iter++;
    }

    return 0;
}

// 1, 3