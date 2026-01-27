#include<bits/stdc++.h>
using namespace std;

// Time: O(sqrt(n))
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
    if(isprime(n))cout<<n<<" is a prime.";
    else cout<<n<<" is not prime.";
    
}
