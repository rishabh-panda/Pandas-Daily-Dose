int findSum(int arr[], int n)
	{
	    set<int> s;
	    int sum=0;
	    
	    for(int i=0; i<n; i++)
	    {
	        s.insert(arr[i]);
	    }
	    
	    //accumulates adds the set elements
	    //using 3 parameters, starting value
	    //ending value and an initial given value
	    sum = accumulate(s.begin(), s.end(), sum);
	    return sum;
	}
