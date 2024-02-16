#include <iostream>
using namespace std;

int maks(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return max(n % 10, maks(n / 10));
}
int main()
{
    int n;
    while (cin >> n)
    {
        cout << maks(n) << endl;
    }
}