#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void print(char a[][100],int n,int m)
{
    system("cls");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int n,m,zi=0,zj=0,ji,jj;
    cin>>n>>m>>ji>>jj;
    char a[100][100];
    memset(a,'#',sizeof(a));
    a[ji][jj]='$';
    a[0][0]='O';
    char c;
    bool end=0;
    int nasoka=0;
    while(!end){
        a[zi][zj]='o';
        cin>>c;
        if(c=='W'){
            if(nasoka==0){
                zi++;
            }
            else if(nasoka==1){
                zj++;
            }
            else if(nasoka==2){
                zi--;
            }
            else if(nasoka==3){
                zj--;
            }
        }
        if(c=='A'){
            if(nasoka==0){
                zj++;
            }
            else if(nasoka==1){
                zi--;
            }
            else if(nasoka==2){
                zj--;
            }
            else if(nasoka==3){
                zi++;
            }
            nasoka=(nasoka+1)%4;
        }
        if(c=='D'){
            if(nasoka==0){
                zj--;
            }
            if(nasoka==1){
                zi++;
            }
            if(nasoka==2){
                zj++;
            }
            if(nasoka==3){
                zi--;
            }
            nasoka=(nasoka+3)%4;
        }
        if(zi<0||zj<0||zi>=n||zj>=m){
                cout<<"GAME OVER Out"<<endl;
                end=1;
                return 0;
            }
            if(a[zi][zj]=='o'){
                cout<<"GAME OVER Ouch"<<endl;
                end=1;
                return 0;
            }else{
                a[zi][zj]='O';
            }
            if(zi==ji && zj==jj){
                cout<<"NJAM"<<endl;
                end=1;
                return 0;
            }
            print(a,n,m);
    }
    system("PAUSE");
}