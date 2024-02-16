#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maks = min(n, m);
    for (int k = 2; k <= maks; k++)
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (i == 0 || i == k - 1 || i + j == k - 1)
                {
                    sum += arr[i][j];
                }
            }
        }
        cout << sum << endl;
    }
}