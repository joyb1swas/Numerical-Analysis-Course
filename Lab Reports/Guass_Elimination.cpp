#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a[3][4];
    cout << endl;
    cout << "Enter the augmented matrix (3 equations)\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            double ratio = a[j][i] / a[i][i];
            for (int k = i; k < 4; k++)
            {
                a[j][k] -= ratio * a[i][k];
            }
        }
    }

    double x[3];
    x[2] = a[2][3] / a[2][2];
    x[1] = (a[1][3] - a[1][2] * x[2]) / a[1][1];
    x[0] = (a[0][3] - a[0][2] * x[2] - a[0][1] * x[1]) / a[0][0];

    cout << fixed << setprecision(0);

    cout << "\nSolution using Guass Elimination Method :\n";
    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;
    cout << endl;
    return 0;
}
/*
1 1 1 6
2 3 4 20
0 1 1 5
*/