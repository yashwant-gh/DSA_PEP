//Sieve of Eratosthenes
// Time: O(nlog(log(n)))
int main(){
    int n;
    cin>>n;
    vector<bool>arr(n+1,true);
    arr[0]=arr[1]=false;
    for(int i=2;i*i<=n;i++){
      if(arr[i]){ // only marking the multiples of primes to false because:
                   // fundamental therorem of arithmetic: Every composite number \(C\) has at least one prime factor \(p\) such that \(p<C\).
        for(int j=i*i;j<=n;j+=i){
            arr[j]=false; // marking the multiples of prime numbers to non primes 
        }
      }
    }
}
