#include<iostream>
using namespace std;
bool same(int n)
{
    int m=n%10;
    while(n>0){
        if(n%10!=m){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int num_dig(int n)
{
    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    return c;
}
int devet(int n)
{
    int tmp=0;
    for(int i=0;i<n-1;i++){
        tmp*=10;
        tmp+=9;
    }
    return tmp;
}
int get_dig(int a[],int n, bool& skrati)
{
    skrati =0;
    int maks=a[0];
    if(a[0]>a[1]){
        maks--;
    }else if(a[0]==a[1]){
        for(int i=0;i<n-1;i++){
            if(maks<a[i+1]){
                maks=a[0];
            }
        }
    }
    if(maks==0){
        maks=9;
        skrati=1;
    }
    return maks;
}
int niza(int& n)
{
    int nn=n;
    bool skrati=0;
    int m=num_dig(n);
    int arr[m];
    for(int i=m-1;i>=0;i--){
        arr[i]=n%10;
        n/=10;
    }
    bool dev=0;
    int fill=get_dig(arr,m,skrati);
    for(int i=0;i<m;i++){
        arr[i]=fill;
    }
    int tmp=0;
    for(int i=0;i<m;i++){
        tmp*=10;
        tmp+=arr[i];
    }
    if(skrati){
        tmp/=10;
    }
    n=nn-tmp;
    
    return tmp;
}
int main()
{
    int n;
    cin>>n;
    int zlato[50];
    int i=0;
    int c=0;
    while(!same(n)){
        zlato[i++]=niza(n);
        c++;
    }
    zlato[i++]=n;
    c++;
    for(int j=i-1;j>=0;j--){
        cout<<zlato[j]<<" ";
    }
    cout<<endl<<c;
}