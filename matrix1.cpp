#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char recenica[1000];
    char zbor[100];
    int p;
    cin.getline(recenica,1000);
    cin.getline(zbor,100);
    cin>>p;
    int space=0;
    char zamena[100];
    int k=0;
    for(int i=0;i<strlen(recenica);i++){
        if(recenica[i]==' '){
            space++;
        }
        if(space==p){
            i++;
            while(recenica[i]!=' '){
                zamena[k]=recenica[i];
                k++;
                i++;
            }
            break;
        }
    }
    for(int i=0;i<strlen(recenica);i++){
        k=0;
        if(recenica[i]==zbor[0]){
            int j=i;
            while(recenica[j]!=' '){
                if(recenica[j]!=zbor[k]){
                    break;
                }
                k++;j++;
            }
            if(k==strlen(zamena)){
                for(int x=0;x<strlen(zamena);x++){
                    recenica[i]=zamena[x];
                    i++;
                }
            }
        }
    }
    for(int i=0;i<strlen(recenica);i++){
        cout<<recenica[i];
    }
}