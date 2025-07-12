//factorial
include <iostream>

int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}

//power
#include <iostream>

int pow(int m, int n){
    if(n==0){
        return(1);
    }
    if(n%2==0){
        return pow(m*m,n/2);
    }
    else{
        return m*pow(m*m,(n-1)/2);
    }
}

//taylor series find e^x
double e(int x, int n){
    static double p = 1, f = 1;
    double r;

    if (n==0)
        return 1;
    r=e(x,n-1);
    p*=x;
    f*=n;
    return r+p/f;
}

int main(){
    printf("%lf\n",e(4,15));
    return 1;
}
