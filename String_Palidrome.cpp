#include<iostream>
using namespace std;

bool check(int i,string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false;
    return check(i+1,s);
}

int main(){
    string s;
    cin >> s;
    cout<<check(0,s);
}