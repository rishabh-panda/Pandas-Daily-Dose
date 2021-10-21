bool checkTriplet(int arr[], int n) {
	    sort(arr, arr+n);
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            for(int k=j+1; k<n; k++)
	            {
	                if(1LL*arr[i]*arr[i]
	                   +1LL*arr[j]*arr[j]
	                  ==1LL*arr[k]*arr[k])
	                  {
	                      return true;
	                  }
	            }
	        }
	    }
	    return false;
	}
