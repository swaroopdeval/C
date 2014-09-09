#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,arr[100]={0};
    scanf("%d",&n);
    
    while(n!=0){
        scanf("%d",&i);
        arr[i]++;
        n--;
    }
    for(i=0;i<100;i++){
        if(arr[i]==0) continue;
        printf("%d ",i);
        arr[i--]--;
    }
    printf("\n");
    return 0;
}
