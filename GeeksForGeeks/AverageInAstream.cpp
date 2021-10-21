vector<float> streamAvg(int arr[], int n) {
	    vector<float> v;
	    float sum = 0;
	    for(int i=0; i<n; i++)
	    {
	        sum+=float(arr[i]);
	        float average=sum/(i+1);
	        v.push_back(average);
	    }
	    return v;
	}