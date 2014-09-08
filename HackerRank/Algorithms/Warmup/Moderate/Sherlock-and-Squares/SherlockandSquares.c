#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int function(long int,long int);
int main() {
    int T;
    long int a,b;
    scanf("%d\n",&T);
    while(T!=0){
        scanf("%ld%ld",&a,&b);
        printf("%ld\n",function(a,b));
        T--;
    }
    return 0;
}

long int function(long int a,long int b){
    long int sqrtA,sqrtB;
    sqrtA=sqrt(a);
    sqrtB=sqrt(b);
    
    if(a==sqrtA*sqrtA) return sqrtB-sqrtA+1;
    return sqrtB-sqrtA;
}
