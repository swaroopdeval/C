#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x,i,arr[100]={0};
    scanf("%d",&n);
    while(n!=0){
        scanf("%d",&x);
        arr[x]++;
        n--;
    }
    for(i=0;i<100;i++) printf("%d ",arr[i]);
    printf("\n");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
