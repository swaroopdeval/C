#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int mult(int );
void reverse(char [],char []);
void function(int);
int main() {

    int T,N;
    scanf("%d",&T);
    while(T!=0){
        scanf("%d",&N);
        function(N);
        T--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
int mult(int n){
    int i,j;
    for(i=100;i<=1000;i++){
        if(n%i==0){
            j = n/i;
            if((j>99)&&(j<1000)){
                return 1;
            }
        }
    }
    return 0;
}

void reverse(char a[],char b[]){
    int i,j;
    i=0;
    j=2;
    while(i<3){
        b[i]=a[j];
        i++;
        j--;
    }
    b[3] = '\0';
}

void function(int n){
    char temp[7],left[4],right[4];
    int f,i;
    f = n/1000;
    
    while(f!=100){
        sprintf(left, "%d", f);
        reverse(left,right);
        strcpy(temp,left);
        strcat(temp,right);
        i = atoi(temp);
        if(i>=n){
            f--;
            continue;
        }
        if(mult(i)){
            printf("%d\n",i);
            return;
        };
        f--;
    }
}
