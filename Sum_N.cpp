#include<iostream>
using namespace std;

void Sum(int n,int sum){
    if(n < 1){
        cout << sum;
        return;
    }
    Sum(n-1 , sum+n); 
}

int main(){
    int n;
    cout<<"Enter "<<endl;
    cin >> n;
    Sum(n,0);
}