#include<iostream>
#include<cstring>
using namespace std;
void print (int a[][100],int n,int m)
{
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
    int n,m,ji,jj,zi=0,zj=0,nasoka=0;//0-nadole, 1-desno, 2-gore, 3-levo
    int a[100][100];
    a[0][0]=1;
    char potezi[1000];
    cin>>n>>m>>ji>>jj;
    a[ji][jj]=8;
    char c;
    cin.ignore();
    bool end=0;
    while(!end){
        cin>>c;
        if(c=='F'){
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
         if(c=='L'){
            if(nasoka==0){
                zj++;
                nasoka=1;
            }
            else if(nasoka==1){
                zi--;
                nasoka=2;
            }
            else if(nasoka==2){
                zj--;
                nasoka=3;
            }
            else if(nasoka==3){
                zi++;
                nasoka=0;
            }
        }
        if(c=='R'){
            if(nasoka==0){
                zj--;
                nasoka=3;
            }
            if(nasoka==1){
                zi++;
                nasoka=0;
            }
            if(nasoka==2){
                zj++;
                nasoka=1;
            }
            if(nasoka==3){
                zi--;
                nasoka=2;
            }
        }
            if(zi<0||zj<0||zi>=n||zj>=m){
                cout<<"GAME OVER Out"<<endl;
                end=1;
                return 0;
            }
            if(a[zi][zj]==11){
                cout<<"GAME OVER Ouch"<<endl;
                end=1;
                return 0;
            }else{
                a[zi][zj]=1;
            }
            if(zi==ji && zj==jj){
                cout<<"NJAM"<<endl;
                end=1;
                return 0;
            }
        print(a,n,m);

    }
    cout<<"GAME OVER"<<endl;
    return 0;
}