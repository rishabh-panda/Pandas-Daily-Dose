//Returns value equal to index value in an integer array

vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> v;
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] == (i + 1))
	            v.push_back(i+1);
	    }
    return v;
	}
