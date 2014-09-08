#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void partition(int ar_size, int *  ar) {
    int i,temp,pivot=ar[0];
    int left[ar_size],right[ar_size];
    int r,l;
    r=0;
    l=0;
    for(i=1;i<ar_size;i++){
        if(ar[i]<ar[0])
            left[l++] = ar[i];
        else
            right[r++] = ar[i];
    }
    for(i=0;i<l;i++)
        ar[i]=left[i];
    ar[i]=pivot;
    for(i=0;i<r;i++)
        ar[l+i+1]=right[i];

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);

    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
    { 
        printf("%d ", _ar[_ar_i]); 
    }
    printf("\n"); 
   return 0;
}
