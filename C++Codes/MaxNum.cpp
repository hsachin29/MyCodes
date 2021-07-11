#include<iostream>
using namespace std;
int main() {

    int a, b, c;

    cout<<"Enter the numbers : ";
    cin>>a>>b>>c;
    if(a>b) {
        if(a>c)
        cout<<"Max is "<<a<<endl;
        else
        cout<<"Max is "<<c<<endl;
    }
    else {
        if(b>c){
            cout<<"max is "<<b<<endl;
        }
        else {
            cout<<"Max is "<<c<<endl;
        }
    }
    return 0;
        
    }