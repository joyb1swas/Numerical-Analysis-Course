// Problem 2: Monte Carlo Estimation of π

#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));

    int trials[] = {1000, 10000, 100000};
    int size = 3;

    for (int i = 0; i < size; i++)
    {
        int N = trials[i];

        int inside = 0;
        for (int j = 0; j < N; j++)
        {
            double x = (double)rand() / RAND_MAX;
            double y = (double)rand() / RAND_MAX;
            if (x * x + y * y <= 1.0)
                inside++;
        }

        double pi_est = 4.0 * inside / N;
        cout << "N = " << N << " PI = " << pi_est << endl;
    }

    return 0;
}

/*

Q1. How does the estimate change with larger N?
= The estimate change is increasing with larger N. When n is 1000 the value is closer to π, but when n is increases the value becomes much closer to π.

Q2. How close does it get to actual π?
= It depends on the value of x,y as we generating random axis pair so the difference if 3 trial of N is different but the estimation is get pretty close to π. After checking different estimation the difference when n is 1000 = ±0.1 and when n is 10000/100000 = ±0.03/±0.01. It might be different as we said we consider (x,y) as random axis pair so the difference is different.

*/
