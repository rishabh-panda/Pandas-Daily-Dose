string toLower(string S) {
        transform(S.begin(),S.end(),S.begin(),::tolower);
        return S;
    }