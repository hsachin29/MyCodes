/* A coding competiton was conducted in company with e employees. Data of employees who participated and who did not participated in the competition is 
available. There were 3 problems in the coding competiton data as mentioned below is available. The number of employee who have solved only first, only
second, only third problem are equal.
- p1 employee who solved first and second problem
- p2 employee who solved second and third problem
- p3 employee who solved third and first problem
- q employee who solved all problems
- r employee who did not participated.
Answer the following questions:
-How many employee have solved the first problem?
-HOw many employee have solved exactly one of the 3 problem? */

#include<bits/stdc++.h>
using namespace std;
int helper(int p1, int p2, int p3, int q, int e, int r){
    int second = e - r + 2 * q - p1 - p2 - p3;
    int x = second/3;

    int first = x + p1 - q + q + p3 - q;

    cout<<first<<endl;
    cout<<second;

    return 0;
}

int main(){

    int p1,p2,p3,q,e,r;
    cin>>p1>>p2>>p3>>q>>e>>r;
    helper(p1,p2,p3,q,e,r);

    return 0;
}
/* input will be 
p1 = 30
p2 = 26
p3 = 28
q = 14
e = 345
r = 43
Output will be : 
126
246*/