#include<bits/stdc++.h>
using namespace std;
int gcd(int,int);
int main(){
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b);
}
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else {
        gcd(b,a%b);
    }
}