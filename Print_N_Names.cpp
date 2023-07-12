#include<iostream>
using namespace std ;

void print(int i,int n){
    if(i > n){
        return;
    }
    cout<<"JD"<<" ";
    print(i+1,n);
}

int main(){
    int n;
    cout<<"Enter";
    cin >> n;
    print(1,n);
}