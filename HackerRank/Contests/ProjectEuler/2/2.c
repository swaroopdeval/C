#include<stdio.h>
#include<stdlib.h>
void function(long long int );
int main(){
    int T;
    long long N;
    scanf("%d",&T);
    
    while(T!=0){
        scanf("%lld",&N);
        function(N);
        T--;
    }
    return 0;
}

void function(long long int n){
    long long int i,fib,fib1,fib2,sum=0;
    fib1 = 1;
    fib2 = 0;
    fib = fib1 + fib2;
    while(fib<n){
        if(fib%2==0) sum+=fib;
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }
    printf("%lld\n",sum);
}
