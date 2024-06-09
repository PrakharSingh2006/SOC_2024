class Solution {
private:
double solve(double &x, int n){
    if(n==0)return 1 ;
    double d=solve(x,n/2);
    if(n%2==0)d=d*d;
    else d=d*(d*x);
// x=d;
return d;
}

public:
    double myPow(double x, int n) {
        int m=n;
        m=abs(m);
      double j=    solve(x,m);
        if(n>0)return j;
        else return 1.0/j;
        // return x;
        // return pow(x,n);
    }
};
