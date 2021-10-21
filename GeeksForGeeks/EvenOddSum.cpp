vector<int> EvenOddSum(int N, int Arr[]) {
        int sumEven = 0; int sumOdd = 0;
        vector<int> V;
        for(int i=0;i<N;i++)
        {
            if(i%2==0)
            {
                sumEven+=Arr[i];
            }
            if(i%2!=0)
            {
                sumOdd+=Arr[i];
            }
        }
        V.push_back(sumEven);
        V.push_back(sumOdd);
        return V;
    }