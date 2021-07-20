#include<iostream>
using namespace std;

void smallest(int a);

int main(){
    int a;
    cin>>a;
    smallest(a);
    return 0;
}
void smallest(int a){
    int i, j=0;
    int small[10000];
    if(a<10){
        cout<<a+10<<endl;
        return;
    }
    for(i=9;i>1;i--){
        while (a%i==0)
        {
            a=a/i;
            small[j]=i;
            j++;
        }
    }
    if(a>10){
        cout<<"Not possible"<<endl;
        return;
    }
    for(i=j-1;i>=0;i--){
        cout<<small[i];
    }
}