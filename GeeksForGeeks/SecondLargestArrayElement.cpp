int print2largest(int arr[], int arr_size)
    {
        //sort array in ascending order
        sort(arr, arr+arr_size);
        
        //store the last array element
        int last_element=arr[arr_size-1];
        
        //iterate in descending order
        for(int i=arr_size-1; i>=0; i--)
        {
            if(arr[i] != last_element)
            {
                return arr[i];
            }
        }
      //if no 2nd largest element exists  
      return -1;
    }
