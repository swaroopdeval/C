#[Pangrams](https://www.hackerrank.com/challenges/pangrams/copy-from/10449446)
###Problem Statement

Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "*The quick brown fox jumps over the lazy dog*" repeatedly because it is a pangram ( pangrams are sentences constructed by using every letter of the alphabet at least once).

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.

###Input Format
```shell
Input consists of a line containing s.
```
###Constraints 
```shell
Length of s can be atmost 103 (1≤|s|≤103) and it may contain spaces, lowercase and uppercase letters. Lowercase and uppercase instances of a letter are considered same.
```
###Output Format
```shell
Output a line containing pangram if s is a pangram, otherwise output not pangram.
```
#####Sample Input #1
```shell
We promptly judged antique ivory buckles for the next prize    
```
#####Sample Output #1
```shell
pangram
```
#####Sample Input #2
```shell
We promptly judged antique ivory buckles for the prize    
```
#####Sample Output #2
```shell
not pangram
```
###Explanation
```shell
In the first testcase, the answer is pangram because the sentence contains all the letters.
```
