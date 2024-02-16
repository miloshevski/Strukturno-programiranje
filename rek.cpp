#include <iostream>
using namespace std;
void rek(int n)
{
    cout << n << " ";
    if (n <= 0)
    {
        return;
    }
    rek(n - 5);
    cout << n << " ";
}
int main()
{
    int n, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        rek(b);
    }
}