//Finding factorial of the given number
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;
    for(i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}
