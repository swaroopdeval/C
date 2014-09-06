#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int hcf(long int ,int );
void function(int );
int main() {
    int T,N;
    scanf("%d",&T);
    while(T!=0){
        scanf("%d",&N);
        function(N);
        T--;
    }  
    return 0;
}

void function(int n){
    int i;
    long int ans=1;
    
    for(i=1;i<=n;i++) ans=hcf(ans,i);
    printf("%ld\n",ans);
}

long int hcf(long int a,int b){
    int i=2;
    long int ans=1;
    if(a%b==0) return a;
    if(b%a==0) return b;
    while(1){
        if((a==1)&&(b==1)) break;
        if((a%i==0)&&(b%i==0)){
            while((a%i==0)&&(b%i==0)){
                ans=ans*i;
                a=a/i;
                b=b/i;
            }
        }
        if ((a%i==0)&&(b%i!=0)){
            while(a%i==0){
                ans=ans*i;
                a=a/i;
            }
        }
        if ((a%i!=0)&&(b%i==0)){
            while(b%i==0){
                ans=ans*i;
                b=b/i;
            }
        }
        i++;
    }
    return ans;
}
