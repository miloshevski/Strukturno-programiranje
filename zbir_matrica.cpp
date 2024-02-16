#include <iostream>
using namespace std;

bool prost(int n, int i)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        if (i * i >= n)
        {
            return 1;
        }
        else if (n % i == 0)
        {
            return 0;
        }
        return prost(n, i + 1);
    }
}
int prv_prost(int n)
{
    if (prost(n, 3))
    {
        return n;
    }
    else
    {
        return prv_prost(n + 1);
    }
}
int main()
{
    int n, razlika;
    cin >> n;
    int broj = prv_prost(n + 1);
    razlika = broj - n;
    cout << broj << " - " << n << " = " << razlika << endl;

    return 0;
}