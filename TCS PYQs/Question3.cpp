/* sample input 1
3
100
10
output
1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int m;
    cin>>m;

    int p;
    cin>>p;

    int i= 0;
    while(i<n-1){
        m = (p*m)/100;
        i++;
    }
    cout<<m<<endl;
    return 0;
}