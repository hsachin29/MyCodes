/* Given a square matrix, calculate the absolute difference between the sums of its diagonals.
         1 2 3
         4 5 6 
         9 8 9
    the left to right diagonal = 1+5+9=15 and the right to left diagonal = 3+5+7=17
     absolute difference = |15-17|=2
Sample input 
3
11 2 4 
4 5 6
10 8 -12

sample output
15
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;

    int mat[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int suml=0;
    int sumr=0;

    i=0;
    j=0;

    while(i!=n && j!=n){
        suml+=mat[i][j];
        i++;
        j++;
    }
    i=0;
    j=n-1;
    while(i!=n && j>=0){
        sumr+=mat[i][j];
        i++;
        j--;
    }


    cout<<abs(suml-sumr)<<endl;

    return 0;
}