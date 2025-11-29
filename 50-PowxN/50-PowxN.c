// Last updated: 29/11/2025, 19:22:39
// double myPow(  double x, long long int n) {
//      double i,result=1.0;
//     if(n==0)
//     return 1;
//     else if (x==1)
//     return 1;

//     else if (n<0){
//     n=-n;
//     for (i=0;i<n;i++){
//        result=result*x;
//     }
//     return 1/result;
//     }
//     else{
//     for (i=0;i<n;i++)
//        result=result*x;
//        return result;}

// }
double myPow(double x, int n) {
    long long exp = n;   // use long long to avoid overflow
    if (exp < 0) {
        x = 1.0 / x;
        exp = -exp;      // safe now
    }

    double result = 1.0;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= x;
        }
        x *= x;          // square the base
        exp /= 2;        // halve exponent
    }
    return result;
}
