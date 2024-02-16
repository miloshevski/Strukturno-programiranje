#include<iostream>
#include<cstring>
using namespace std;
int m;
int count_d(int n) {
    int c=0;
    while(n>0) {
        c++;
        n/=10;
    }
    return c;
}
bool same(int n){
    int m=n%10;
    while(n>0){
        if(n%10!=m){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int digit(int a[],int n) {
    int m=a[0];
    if(a[0]<a[1]){
        return a[0];
    }else if(a[0]>a[1]){
        return (a[0]-1);
    }else{
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
               return (a[0]-1); 
            }
        }
    }
    return a[0];
}
int  largestDigit(int& n) {
    int m = count_d(n);
    int num=0;
    int arr[m];
    int tmp=n;
    bool p=0;
    for(int i = m - 1; i >= 0; i--) {
        arr[i] = n % 10;
        n /= 10;
    }
    int maks=digit(arr,m);
    if(arr[0]>arr[1]){
        maks-=1;
        if(maks==0){
            maks=9;
            p=1;
        }
        for(int i=0;i<m;i++){
        num*=10;
        num+=maks;
        }
        if(p){
            num/=10;
            p=0;
        }
    }else if(arr[0]<arr[1]){
        for(int i=0;i<m;i++){
            num*=10;
            num+=arr[0];
        }
    }
    
    n=tmp-num;
    return num;
}

int main() {
    int n;
    cin >> n;
    while(!same(n)){
        cout<<largestDigit(n)<<endl;
    }
    cout<<n;
    return 0;
}
