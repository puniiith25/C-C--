#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10; 
       sum+=digit;
        n = n / 10; 
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
