#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *line;
  size_t len = 0;
  ssize_t read;

    read = getline(&line, &len, stdin);
    int i=0,count=0,arr[26]={0};
    char c;
    c = line[i++];
    while(*line!='\0'){
        if((line[0]-'a'>=0 && line[0]-'z'<=0) && arr[line[0]-'a'] == 0){
            arr[line[0]-'a'] = 1;
            count++;
        }
        if((line[0]-'A'>=0 && line[0]-'Z'<=0) && arr[line[0]-'A'] == 0){
            arr[line[0]-'A'] = 1;
            count++;
        }
        if(count == 26) break;
        line++;
    }
    if(count == 26) printf("pangram");
    else printf("not pangram");
    return 0;
}
