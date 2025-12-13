#include <iostream>
using namespace std;
int isPrime(int prime)
{

    for (int i = 2; i <= prime /2; ++i)
    {
       
        if (prime % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int prime;
    cout << "enter the Number to check wheather it is prime or not :";
    cin >> prime;
    if (isPrime(prime))
    {
        cout << "prime Number hai bhai ";
    }
    else
    {
        cout << "nhi hai prime";
    }
    return 0;
}