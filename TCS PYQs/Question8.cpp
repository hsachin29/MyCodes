//Program to check whether given string is Pangram or not
//Pangram string "The Quick brown fox jumps over the lazy dog"

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str;
    getline(cin,str);

    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]+=32;
        }
    }
    int freq[26]={0};
    for(int i=0;i<str.size();i++){
        char ch =str[i];
        int index = ch-'a';
        freq[index]++;
    }
    bool pangram = true;
    for(int i=0;i<26;i++){
        if(freq[i]==0){
            pangram=false;
            break;
        }
    }
    cout<<pangram<<endl;
    return 0;

}