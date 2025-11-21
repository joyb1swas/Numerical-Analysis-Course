#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    double x[n], y[n], h;
    cout << "Enter x values: ";
    for (int i = 0; i < n; i++)
        cin >> x[i];
    cout << "Enter y values: ";
    for (int i = 0; i < n; i++)
        cin >> y[i];

    double diff[n][n];
    for (int i = 0; i < n; i++)
        diff[i][0] = y[i];

    for (int j = 1; j < n; j++)
    {
        for (int i = n - 1; i >= j; i--)
        {
            diff[i][j] = diff[i][j - 1] - diff[i - 1][j - 1];
        }
    }

    double xp, u, yp;
    cout << "Enter x to interpolate: ";
    cin >> xp;

    h = x[1] - x[0];
    u = (xp - x[n - 1]) / h;
    yp = diff[n - 1][0];

    double u_term = 1;
    for (int i = 1; i < n; i++)
    {
        u_term *= (u + i - 1) / i;
        yp += u_term * diff[n - 1][i];
    }

    cout << "\n              Backward Difference Table       \n";
    cout << "-------------------------------------------------------------------";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << "\t";
        for (int j = 0; j <= i; j++)
            cout << diff[i][j] << "\t";
        cout << "\n";
    }

    cout << "-------------------------------------------------------------------";
    cout << endl;
    cout << "\nInterpolated value at x = " << xp << " is y = " << yp << endl;
    cout << endl;
    cout << endl;

    return 0;
}

/*
 5
 1 2 3 4 5
 1 8 27 64 125
 2.5
*/
