#include <iostream>
using namespace std;

int maks(int arr[], int n)
{
    if (n == 0)
    {
        return arr[0];
    }
    return max(arr[n], maks(arr, n - 1));
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
    cout << maks(arr, n - 1);
}