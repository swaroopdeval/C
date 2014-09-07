#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[10000];
int max=2;
int k=0;
int flag = 0;
int prime(int);
void function(int);
int main() {
    int t,n;
    scanf("%d",&t);
    a[0]=2;
    a[1]=3;
    while(t!=0){
        scanf("%d",&n);
        if(max>=n)
            printf("%d\n",a[n-1]);
        else{
            function(n);
            max = n;
        }
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
int prime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

void function(int n){
    int i;
   // printf("k=%d\n",k);
    while(max<n){
        if(flag==0){
            k++;
            i = 6*k-1;
            //printf("i = %d\n",i);
            flag=1;
            if(prime(i)){
                a[max]=i;
                max++;
            }
            
            if(max==n)
                break;
        }
        i = 6*k+1;
        flag=0;
        if(prime(i)){
            a[max]=i;
            max++;
        }
        if(max==n)
            break;
    }
    printf("%d\n",i);
    //for(i=0;i<max;i++) printf("%d %d\n",i+1,a[i]);
}
