#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
    return x * x - 4;
}

double df(double x)
{
    return 2 * x;
}

int main()
{
    double x0, x1, tol;
    int maxIter;

    cout << endl;
    cout << "Enter initial guess x0: ";
    cin >> x0;
    cout << "Enter tolerance: ";
    cin >> tol;
    cout << "Enter maximum iterations: ";
    cin >> maxIter;
    cout << endl;

    cout << fixed << setprecision(4);
    cout << "\n          Iteration Table for Newton - Raphson Method        \n";
    cout << "-----------------------------------------------------------------------";
    cout << endl;
    cout << "\nIter\t x_n\t\t f(x_n)\t\t f'(x_n)\t x_(n+1)\t Error\n";

    for (int iter = 1; iter <= maxIter; iter++)
    {
        double fx = f(x0);
        double dfx = df(x0);

        if (dfx == 0)
        {
            cout << "Derivative zero. Method fails.\n";
            break;
        }

        x1 = x0 - fx / dfx;
        double error = fabs(x1 - x0);

        cout << iter << "\t " << x0 << "\t " << fx << "\t " << dfx << "\t " << x1 << "\t " << error << endl;

        if (error < tol)
        {
            cout << "-----------------------------------------------------------------------";
            cout << "\nRoot = " << x1 << endl;
            cout << endl;
            break;
        }

        x0 = x1;
    }

    return 0;
}

/*

1
0.0001
20

*/