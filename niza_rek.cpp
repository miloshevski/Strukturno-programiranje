#include <iostream>
using namespace std;

float xn(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return (n - 1) * xn(n - 1) / n + xn(n - 2) / n;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << xn(n);
}