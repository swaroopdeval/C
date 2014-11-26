#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char line[1001];
    int arr[26]={0},count=0;
    scanf("%[^\n]",line);
    int len = strlen(line),i=0;
    //printf("%s\n%d\n",line,len);
    while(i<len){
        if((line[i]-'a'>=0 && line[i]-'z'<=0) && arr[line[i]-'a'] == 0){
            arr[line[i]-'a'] = 1;
            count++;
        }
        if((line[i]-'A'>=0 && line[i]-'Z'<=0) && arr[line[i]-'A'] == 0){
            arr[line[i]-'A'] = 1;
            count++;
        }
        if(count == 26) break;
        i++;
    }
    if(count == 26) printf("pangram");
    else printf("not pangram");
    return 0;
}
