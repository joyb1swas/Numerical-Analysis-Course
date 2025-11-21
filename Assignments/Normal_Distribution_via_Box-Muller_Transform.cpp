// Problem 3: Normal Distribution via Box-Muller Transform

#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    double sum = 0, sum_sq = 0;
    int n = 20000;

    for (int i = 0; i < 10000; i++)
    {
        double U1 = (rand() + 1.0) / (RAND_MAX + 1.0);
        double U2 = (rand() + 1.0) / (RAND_MAX + 1.0);

        double Z0 = sqrt(-2.0 * log(U1)) * cos(2 * M_PI * U2);
        double Z1 = sqrt(-2.0 * log(U1)) * sin(2 * M_PI * U2);

        //  cout << "Z0 = " << Z0 << ", Z1 = " << Z1 << endl;

        /*  its printing over the limit so i have to comment out the values of Z0,Z1 but
        it can be run if we limit the loop input size 1000 and n = 2000 */

        sum += Z0 + Z1;
        sum_sq += Z0 * Z0 + Z1 * Z1;
    }

    double mean = sum / n;
    double variance = (sum_sq / n) - (mean * mean);
    double stddev = sqrt(variance);

    cout << "Mean = " << mean << endl;
    cout << "Stddev = " << stddev << endl;

    return 0;
}

/*

Q1. Does your distribution resemble a bell curve?
= Yes
Q2. What is the mean and stddev? Are the mean and stddev close to 0 and 1?
= The mean and stddev are known as mean and standard deviation.
Yes, they are close to 0 and 1 respectively.
Since we working with random variables so the answer is not accurate all the
time it varies because of random inputs,
but after running multiple times we are seeing that the mean and standard
deviation are close to 0 and 1 and its different all the time.

*/
