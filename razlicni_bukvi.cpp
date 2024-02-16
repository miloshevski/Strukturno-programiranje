#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void init(int arr[])
{
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    char red[100];
    int maks = 0;
    int arr[26];
    char maks_red[100];
    int br = 0;
    int index;
    bool p = false;
    while (cin.getline(red, 100) && red[0] != '#')
    {
        init(arr);
        for (int i = 0; i < strlen(red); i++)
        {
            if (isalpha(red[i]))
            {
                arr[tolower(red[i]) - 'a']++;
                p = true;
            }
        }
        int tmp = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                tmp++;
            }
        }
        if (tmp > maks)
        {
            maks = tmp;
            strcpy(maks_red, red);
            index = br;
        }
        br++;
    }
    if (p)
    {
        cout << "Najmnogu razlicni bukvi ima vo " << index << " red " << maks << " razlicni bukvi ";
    }
    else
    {
        cout << "Nema red so najmnogu bukvi";
    }
    system("PAUSE");
}