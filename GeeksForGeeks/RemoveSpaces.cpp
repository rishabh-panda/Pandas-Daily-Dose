string modify (string s)
    {
        s.erase(remove(s.begin(), s.end(),' '),s.end());
        return s;
    }