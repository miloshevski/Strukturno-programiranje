#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void change(char recenica[], char prva[], char vtora[])
{
    for (int i = 0; i < strlen(recenica); i++)
    {
        for (int j = 0; j < strlen(prva); j++)
        {
            if (recenica[i] == prva[j])
            {
                recenica[i] = vtora[j];
            }
        }
    }
}
int main()
{
    char prva[10];
    char vtora[10];
    int n;
    cin.getline(prva, 10);
    cin.getline(vtora, 10);
    cin >> n;
    cin.ignore();
    char recenica[100];
    for (int i = 0; i < n; i++)
    {
        cin.getline(recenica, 100);
        change(recenica, prva, vtora);
        cout << recenica << endl;
    }
}