/* sample input
   3 3 2
   85 75 95
   70 80 45
   output
   -62 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,r;
    cin>>n>>m>>r;
    int in[n];
    int out[m];

    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    for(int i=0;i<m;i++){
        cin>>out[i];
    }

    int sumin = 0;
    int sumout = 0;

    for(int i =0;i<n;i++){
        sumin+=in[i]-r;
    }
    for(int i =0;i<m;i++){
        sumout+=out[i]-r;
    }

    if(sumin==sumout){
        cout<<"BALANCED"<<endl;
        return 0;
    }
    if(sumin>sumout){
        int diff=(sumin-sumout+r);
        cout<<-1*diff<<endl;
        return 0;
    }
    if(sumout>sumin){
        int diff=(sumout-sumin+r);
        cout<<diff<<endl;
        return 0;
    }
    return 0;
}