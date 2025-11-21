// Problem 1: Linear Congruential Generator (LCG)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, x, c, m;
    cin >> a >> x >> c >> m;
    for (int i = 1; i <= 10; i++)
    {
        x = (a * x + c) % m;
        cout << x << " ";

        /* normalizing the generated random numbers to the range [0, 1)
        double r = (double)x / m;
        cout << r << " ";   */
    }
    return 0;
}

/*

1. What is the sequence of generated random numbers?
= 8 11 10 5 12 15 14 9 0 3

2. Normalize them to the range [0, 1).
= 0.5 0.6875 0.625 0.3125 0.75 0.9375 0.875 0.5625 0 0.1875

3. Are there any repetitions in the sequence?
= No

*/
