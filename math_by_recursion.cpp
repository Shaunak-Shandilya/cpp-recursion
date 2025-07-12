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
