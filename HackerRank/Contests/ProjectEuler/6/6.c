#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,n;
    long long int ans,temp;
    scanf("%d",&T);
    while(T!=0){
        scanf("%d",&n);
        temp=n*n;
        ans= ((3*temp)+(2*n))*(temp-1)/12;
        printf("%lld\n",ans);
        T--;
    }
    return 0;
}
