#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int c=1;
        for(int k=1;k<=i;k++){
            cout<<c<<"  ";
            c=c*(i-k)/k;
        }
        cout<<endl;
    }
    return 0;
}
