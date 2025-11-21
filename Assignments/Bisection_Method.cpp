// Lab 01 - To find the roots of non linear equations using Bisection Method

#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
      return 2 * x * x * x + 3 * x - 1;
}

int main()
{
      double x1, x2, x0, f1, f2, f0, E = 1e-8;
      int i = 0;

      cout << "Enter the value of x1: ";
      cin >> x1;
      cout << "Enter the value of x2: ";
      cin >> x2;

      f1 = f(x1);
      f2 = f(x2);

      if (f1 * f2 > 0)
      {
            cout << "No root in this interval!" << endl;
            return 0;
      }

      cout << fixed << setprecision(10);
      cout << "i\t        x1\t\t        x2\t\t        x0\t\t        f(x1)\t\t        f(x2)\t\t        f(x0)\n";
      cout << "------------------------------------------------------------------------------------------------------------------------\n";

      while (fabs((x2 - x1) / x2) >= E)
      {
            i++;
            x0 = (x1 + x2) / 2.0;
            f0 = f(x0);

            cout << i << "\t"
                 << setw(14) << x1 << "\t"
                 << setw(14) << x2 << "\t"
                 << setw(14) << x0 << "\t"
                 << setw(14) << f1 << "\t"
                 << setw(14) << f2 << "\t"
                 << setw(14) << f0 << "\n";

            if (f0 == 0.0)
                  break;

            if (f1 * f0 < 0)
            {
                  x2 = x0;
                  f2 = f0;
            }
            else
            {
                  x1 = x0;
                  f1 = f0;
            }
      }

      double root = (x1 + x2) / 2.0;
      cout << "\nApproximate root = " << root << endl;

      return 0;
}

