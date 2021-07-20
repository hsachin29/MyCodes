#include<bits/stdc++.h>
using namespace std;
int main(){
    int teams;
    cin>>teams;

    string str;
    getline(cin,str);

    int scores[teams]={0};
    for(int i = 0;i<(teams*(teams-1)/2);i++){
        string matchinfo;
        getline(cin, matchinfo);

        char home=matchinfo[0];
        char away=matchinfo[2];
        string scorehome="";
        string scoreaway="";
        
        int j =4;
        while (matchinfo[j]!='-')
        {
            scorehome+=matchinfo[j];
            j++;
        }
        int x = stoi(scorehome);
        
        while(j<matchinfo.length())
        {
            scoreaway+=matchinfo[j];
            j++;
        }
        int y = stoi(scoreaway);

        if(x<y){
            scores[away-'A']+=3;
        }
        else if(x==y){
            scores[away-'A']+=1;
            scores[home-'A']+=1;
        }
        else
        {
           scores[home-'A']+=3;
        }
        
    }
    int index =-1;
    int maxv = INT16_MIN;
    for(int i=0;i<teams;i++){
        if(scores[i]){
            maxv=scores[i];
            index=i;
        }
    }
    cout<<char('A'+index);
    return 0;
}