int nthTermOfAP(int A1, int A2, int N) {
        int d = A2-A1;
        int nthTerm = A1 + (N-1)*d;
        return nthTerm;
    }