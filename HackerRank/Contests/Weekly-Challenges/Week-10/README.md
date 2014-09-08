#[Alternating Characters](https://www.hackerrank.com/contests/w10/challenges/alternating-characters)
Shashank likes strings in which consecutive characters are different. For example, he likes **_ABABA_**, while he doesn't like **_ABAA_**. Given a string containing characters **_A_** and **_B_** only, he wants to change it into a string he likes. To do this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

######Input Format 
The first line contains an integer **_T_** i.e. the number of test cases. 
Next **_T_** lines contain a string each.

######Output Format 
Print minimum number of required steps for each test case.

######Constraints
```shell
1≤T≤10 
1≤length of String≤105 
```
######Sample Input
```shell
5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
```
######Sample Output
```shell
3
4
0
0
4
```
######Explanation
```shell
AAAA ==>A, 3 deletions
BBBBB ==> B, 4 deletions
ABABABAB ==> ABABABAB, 0 deletions
BABABA ==> BABABA, 0 deletions
AAABBB ==> AB, 4 deletions
```
