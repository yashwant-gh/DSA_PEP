#include<bits/stdc++.h>
using namespace std;


bool isprime(int x){
    if(x<=1)return false;
    if(x%2==0)return false;
    for(int i=3;i*i<=x;i+=2){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a=3;
    while((a+6)<=n){
        if(isprime(a) && isprime(a+6))cout<<a<<" and "<<a+6;
        a++;
        cout<<endl;
    }
}
