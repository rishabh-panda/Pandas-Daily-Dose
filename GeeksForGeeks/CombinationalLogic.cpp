int logicalOperation(int A,int B,int C,int D,int E,int F){
        int res = 0;
        res = (~A)&B|C&D|E&(~F);
        return res;
    }