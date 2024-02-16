#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[80],b[80],c[81];
    cin.getline(a,80);
    cin.getline(b,80);
    for(int i=0;i<strlen(a);i++){
        if(a[i]==b[i]){
            c[i]='=';

            
        }else{
            c[i]='-';
            for(int j=0;j<strlen(b);j++){
                if(a[i]==b[j]){
                    c[i]='+';
                }
            }
        }
    }
    cout<<c;
    return 0;
}