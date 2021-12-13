int minDist(int a[], int n, int x, int y)
    {
        int distance1=-1, distance2=-1, result=-1;
        
        for(int i=0; i<n; i++)
        {
            //calculate first target element distance
            if(a[i]==x)
            {
                distance1=i;
            }
            
            //calculate second target element distance
            if(a[i]==y)
            {
                distance2=i;
            }
            
            //compute their distance value in between
            if(distance1!=-1 && distance2!=-1 && result==-1)
            {
                result=abs(distance1-distance2);
            }
            
            //iterate for other possible cases
            if(distance1!=-1 && distance2!=-1)
            {
                result=min(result, abs(distance1-distance2));
            }
        }
        
        return result;
    }
