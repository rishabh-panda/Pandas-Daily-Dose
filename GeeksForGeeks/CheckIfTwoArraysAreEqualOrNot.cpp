bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        return A==B;
    }
