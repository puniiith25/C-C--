#include <iostream>
using namespace std;
int main()
{
    int n;

    if (n <= 1)
    {
       cout << "Enter a number greater than 1." << endl;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number." << endl;
                break;
            }
        }
    }
}