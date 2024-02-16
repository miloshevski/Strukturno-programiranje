#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool cifren(string zbor, int m)
{
    if (m < 0)
    {
        return 1;
    }
    if (!isdigit(zbor[m]))
    {
        return 0;
    }
    return cifren(zbor, m - 1);
}
int main()
{
    string zbor;
    int maks = 0;
    string najgolem;
    int c = 0;
    while (cin >> zbor && zbor[0] != '.')
    {
        if (cifren(zbor, zbor.length() - 1))
        {
            c++;
            if (zbor.length() >= maks)
            {
                maks = zbor.length();
                najgolem = zbor;
            }
        }
    }
    cout << c << endl;
    cout << najgolem;
}