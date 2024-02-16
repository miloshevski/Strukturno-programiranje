#include <iostream>
#include <cstring>
using namespace std;
int izbroj(char zbor[], int z, char rec[], int r)
{
    int b = 0;
    for (int i = 0; i < r; i++)
    {
        if (rec[i] == zbor[0])
        {
            int x = i, c = 0;
            for (int j = 0; j < z; j++)
            {
                if (zbor[j] != rec[x])
                {
                    break;
                }
                x++;
                c++;
            }
            if (c == z)
            {
                b++;
            }
        }
    }
    return b;
}
int main()
{
    char zbor[20];
    char rec[150];
    int n;
    char tmp[10];
    cin.getline(tmp, 10);
    for (int i = 0; i < 2 * strlen(tmp); i++)
    {
        zbor[i] = tmp[i % strlen(tmp)];
    }
    cin >> n;
    int arr[n] = {0};
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin.getline(rec, 150);
        arr[izbroj(zbor, strlen(zbor), rec, strlen(rec))]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << ": " << arr[i] << endl;
    }
}