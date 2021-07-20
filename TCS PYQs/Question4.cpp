/* sample input 
10
output
25

sample input 2
100

output
455 */
#include<bits/stdc++.h>
using namespace std;

int helper(int A){

    if(A<10){
        return A+10;
    }
    stack<int> s;
    for(int i=9;i>=2;i--){
        while(A%i==0){
            s.push(i);
            A=A/i;
        }
    }
    if(A!=1){
        return -1;
    }
    int B = 0;
    while(!s.empty()){
        int x = s.top();
        s.pop();
        B = B*10+x;
    }
    return B;
}

int main(){
    int A;
    cin>>A;
    cout<<helper(A)<<endl;
    return 0;
}