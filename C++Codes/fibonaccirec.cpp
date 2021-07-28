#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0||n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n,i=0;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<"\nFibonacci series : ";
    while(i<n){
        cout<<" "<<fibo(i);
        i++;
    }
    return 0;
}