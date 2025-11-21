#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
      return x * x - 4;
}

int main()
{
      double x1, x2, x0, f1, f2, f0;
      double E = 1e-6;

      cout << endl;
      cout << "Enter x1: ";
      cin >> x1;
      cout << "Enter x2: ";
      cin >> x2;
      cout << endl;

      f1 = f(x1);
      f2 = f(x2);

      if (f1 * f2 > 0)
      {
            cout << "No root in this interval!" << endl;
            return 0;
      }

      cout << "\n            Iteration Table for Bisection Method     \n";
      cout << "-----------------------------------------------------------------------";
      cout << endl;
      cout << "Iter\t x1\t\t x2\t\t x0\t\t f(x0)\n";

      int iter = 1;
      while (fabs((x2 - x1) / x2) > E)
      {
            x0 = (x1 + x2) / 2.0;
            f0 = f(x0);

            cout << iter << "\t " << x1 << "\t " << x2 << "\t "
                 << x0 << "\t " << f0 << endl;

            if (f0 == 0)
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

            iter++;
      }

      cout << "-----------------------------------------------------------------------";
      cout << "\nApproximate Root = " << x0 << endl;
      cout << endl;

      return 0;
}

// 1,3