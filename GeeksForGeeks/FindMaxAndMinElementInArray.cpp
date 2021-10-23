pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long big = *max_element(a, a+n);
    long long small = *min_element(a, a+n);
    
    return make_pair(small, big);
    
}
