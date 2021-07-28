#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int prevfact=fact(n-1);
    return n*prevfact;
}
int main(){
    int n;
    cout<<"Enter the number for factorial\n";
    cin>>n;
    cout<<fact(n);
    return 0;
}