#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(char []);
int main() {

    int T;
    char arr[100000];
    scanf("%d",&T);
    while(T!=0){
        scanf("%s",arr);
        func(arr);
        T--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
void func(char arr[]){
    int i,l=strlen(arr),count=0;;
    char last,curr;
    last=arr[0];
    for(i=1;i<l;i++){
        curr=arr[i];
        if(last==curr) count++;
        else last=curr;  
    }
    printf("%d\n",count);
    return ;
}
