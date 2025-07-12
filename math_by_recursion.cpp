#include <iostream>
#include <stdio.h>

//factorial
int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}

//power
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

//taylor series find e^x O(n^2)
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

//taylor series horners rule O(n)
double e(int x, int n){
    static double s;
    if (n==0){
        return s;
    s = 1+x*s/n;
    return e(x,n-1);    
    }
}

//compact recursive fibonacci series
//excessive recursion
//O(2^n)

int fib(int n){
    if (n<=1) return 1;
return fib(n-2)+fib(n-1);
}


