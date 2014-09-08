#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],N,i,small=1000,temp;
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(small>a[i]) small = a[i];
    }
    
    int count = 0;
    while(1){
        count=0;
        temp=1000;
        for(i=0;i<N;i++){
            if(a[i]!=0){
                a[i]=a[i]-small;
                if((temp>a[i])&&(a[i]>0)) temp=a[i];
                count++;
            }
        }
        small = temp;
        if(count==0) break;
        printf("%d\n",count);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
