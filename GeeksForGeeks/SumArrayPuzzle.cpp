void SumArray(int arr[], int n)
{
    int sum=0;
    
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    
    for(int i=0; i<n; i++)
    {
        arr[i]=sum-arr[i];
    }
}
