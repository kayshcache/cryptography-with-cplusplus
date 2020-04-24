// Euler's Totient Function

#include <iostream>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// A simple method to evaluate Euler Totient Function
int phi(unsigned int n)
{
    unsigned int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
 
// Driver program to test above function
int main(int argc, char *argv[])
{
    int n;
    int m = atoi(argv[1]);
    for (n = 1; n <= m; n++)
        cout << "phi(" << n << ") = " << phi(n) << endl;
    return 0;
}
