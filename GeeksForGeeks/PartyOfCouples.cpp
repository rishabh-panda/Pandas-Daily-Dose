int findSingle(int N, int arr[]){
        int result = 0;
        for(int i=0;i<N;i++)
        {
            result^=arr[i];
        }
        return result;
    }