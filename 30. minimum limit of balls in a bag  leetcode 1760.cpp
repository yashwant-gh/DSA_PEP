
//Brute-force: TLE
int minimumSize(vector<int>& arr, int mo) {
    int j=1;
    int sum=0;
    int i=0;

    //sum: number of operations needed for panalty of j
    //j:minimum panalty  (only do operation on value greater than 1)
    while(i<arr.size()){
        if(arr[i]>j)sum=sum+((arr[i]-1)/j);
        if(sum>mo){
            i=0;
            j++;
            sum=0;
            continue;
        }
        i++;
    }
    return j;
    }
