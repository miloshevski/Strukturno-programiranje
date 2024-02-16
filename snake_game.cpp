#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a[100][100], n, m, ji, jj, zi = 0, zj = 0, nasoka = 0; // 0-nadole 1-desno 2-gore 3 levo
    char potezi[1000];
    a[0][0] = -1;
    cin >> n >> m >> ji >> jj;
    cin.ignore();
    cin.getline(potezi, 1000);
    for (int i = 0; i < strlen(potezi); i++)
    {
        if (potezi[i] == 'F')
        {
            if (nasoka == 0)
            {
                zi++;
            }
            else if (nasoka == 1)
            {
                zj++;
            }
            else if (nasoka == 2)
            {
                zi--;
            }
            else if (nasoka == 3)
            {
                zj--;
            }
        }
        if (potezi[i] == 'L')
        {
            if (nasoka == 0)
            {
                zj++;
                nasoka = 1;
            }
            else if (nasoka == 1)
            {
                zi--;
                nasoka = 2;
            }
            else if (nasoka == 2)
            {
                zj--;
                nasoka = 3;
            }
            else if (nasoka == 3)
            {
                zi++;
                nasoka = 0;
            }
        }
        if (potezi[i] == 'R')
        {
            if (nasoka == 0)
            {
                zj--;
                nasoka = 3;
            }
            else if (nasoka == 1)
            {
                zi++;
                nasoka = 0;
            }
            else if (nasoka == 2)
            {
                zj++;
                nasoka = 1;
            }
            else if (nasoka == 3)
            {
                zi--;
                nasoka = 2;
            }
        }
        if (zi < 0 || zj < 0 || zi >= n || zj >= m)
        {
            cout << "GAME OVER Out" << endl;
            return 0;
        }
        if (a[zi][zj] == -1)
        {
            cout << "GAME OVER Ouch" << endl;
            return 0;
        }
        if (zi == ji && zj == jj)
        {
            cout << "NJAM" << endl;
            return 0;
        }
        a[zi][zj] = -1;
    }
    cout << "GAME OVER";
}