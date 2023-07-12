#include<iostream>
using namespace std;

int Sum(int n){
    if(n == 0){
        return 0;
    }
    return n+Sum(n-1); 
}

int main(){
    int n;
    cout<<"Enter "<<endl;
    cin >> n;
    cout<<Sum(n);
}