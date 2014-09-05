#include <stdio.h>
#include <string.h>
         
int checkFrequency(char string[],char ch,int index)
{
    int i,counter=0;
    for(i=0;i<=index;i++)
        if(ch==string[i])
        counter++;
        if(counter>1)
        return 0;
        else
        return 1;
}
int main(void)
{
    int i,j,n;
    int counter=0;
    int freq[26];
    
    scanf("%d",&n);     
    char rockList[n][100],ch;
    for(i=0;i<n;i++)
        scanf("%s",rockList[i]);
    for(i=0;i<26;i++)
        freq[i]=0;
    
    for(i=0;i<n;i++)
        for(j=0;j<strlen(rockList[i]);j++)
        if(freq[rockList[i][j]-'a']<=i && checkFrequency(rockList[i],rockList[i][j],j))
        freq[rockList[i][j]-'a']++;

    for(i=0;i<26;i++)
        if(freq[i]==n) counter++;
    printf("%d",counter);
    return 0;
}

