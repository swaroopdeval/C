#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[10000],b[10000];
    int i,arr[26]={0};
    scanf("%s%s",a,b);
    
    for(i=0;i<strlen(a);i++) arr[a[i]-'a']++;
    for(i=0;i<strlen(b);i++) arr[b[i]-'a']--;
    
    int count=0;
    for(i=0;i<26;i++){
        if(arr[i]<0) count=count-arr[i];
        else count=count+arr[i];
    }
    printf("%d\n",count);
    return 0;
}
