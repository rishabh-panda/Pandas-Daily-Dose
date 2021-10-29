int multiply(int arr[], int n)
{
    int leftsum=0, rightsum=0;
        for(int i=0; i<=(n/2)-1; i++)
       {
          leftsum+=arr[i];
       }
       
       for(int i=n/2; i<n; i++)
       {
          rightsum+=arr[i];
       }
       
       return leftsum*rightsum;
    
}
