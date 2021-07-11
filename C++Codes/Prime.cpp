#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number to check Prime or Non Prime : ";
    cin>>n;
    bool flag=0;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<n<<" is a Non-Prime Number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n<<" is a Prime Number"<<endl;
    }



    return 0;
}