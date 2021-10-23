void logicOp(int a, int b)
{
    int one=a&&b;
    int two=a||b;
    int three=((!a)&&(!b));
    
    cout<<one<<" "<<two<<" "<<three<<endl;
}
