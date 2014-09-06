#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,i;
    char a[501][501];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    
    int ones,j,k,count=0,maxones=0;
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            ones=0;
            for(k=0;k<m;k++)
                if((a[i][k]-'0')||(a[j][k]-'0')) ones++;
                
            if(ones>maxones){
                maxones=ones;
                count=1;
            }
            else if(ones==maxones) count++;
        }
    }
    printf("%d\n%d\n",maxones,count);   
    return 0;
}
