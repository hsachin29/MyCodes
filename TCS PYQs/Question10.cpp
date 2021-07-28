/*Display Fibonacci series with the following conditions
if number is greater than 5 and less than or equal to 20 print series
otherwise print INVALID INPUT
if input is alphabet or special symbol
print INVALID INPUT */
#include<iostream>
using namespace std;
void fibo(int n){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=0;i<n;i++){
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the number for Fibonacci series : ";
    cin>>n;
    if(n<6 || n>20){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }
    fibo(n);
    return 0;
}