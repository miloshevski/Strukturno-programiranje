#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char recenica[100];
    char zbor[20];
    int n;
    cin.getline(recenica, 100);
    cin >> n;
    int wordCount = 0;
    bool inWord = false;
    int s = -1;
    int e = -1;
    for (int i = 0; i < strlen(recenica); i++)
    {
        if (recenica[i] == ' ' || i == strlen(recenica) - 1)
        {
            wordCount++;
            if (wordCount == n - 1)
            {
                s = i + 1;
            }
        }
        if (wordCount == n)
        {
            if (i == strlen(recenica) - 1)
            {
                e = i + 1;
                break;
            }
            e = i;
            break;
        }
    }
    for (int i = s; i < e; i++)
    {
        cout << recenica[i];
    }
    cout << ".";
}
