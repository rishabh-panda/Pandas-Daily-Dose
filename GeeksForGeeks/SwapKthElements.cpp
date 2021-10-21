void swapKth(int *arr, int n, int k) {
	    int temp=0;
	    temp=arr[k-1];
	    arr[k-1]=arr[n-k];
	    arr[n-k]=temp;
	}