int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
        int i=n-1;
       while(arr[i]==arr[i-1]){
       i--;
      }
        if(i!=0)
    return arr[i-1];
    return -1;
	}