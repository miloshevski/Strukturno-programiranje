#include <iostream>
using namespace std;

int nzd(int n, int m)
{
    if (n % m == 0)
    {
        return m;
    }
    return nzd(m, n % m);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int NZD = nzd(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
    {
        NZD = nzd(NZD, arr[i]);
    }

    cout << "NZD na broevite od nizata e " << NZD;
}