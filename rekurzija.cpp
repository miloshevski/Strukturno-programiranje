#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100];
    char b[100];
    int n;
    cin.getline(a, 100);
    cin >> n;
    cin.get();
    cin.getline(b, 100);
    cout << a << endl;
    cout << n << endl;
    cout << b << endl;
}