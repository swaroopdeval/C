#[ACM ICPC Team](https://www.hackerrank.com/challenges/acm-icpc-team)

You are given a list of **_N_** people who are attending ACM-ICPC World Finals. Each of them are either well versed in a topic or they are not. Find out the maximum number of topics a 2-people team can know. And also find out how many teams can know that maximum number of topics?

######Input Format

The first line contains two integers **_N_**  and **_M_**  separated by a single space, where **_N_**  represents the number of people, and **_M_**  represents the number of topics. **_N_**  lines follow.
Each line contains a binary string of length **_M_** . In this string, 1 indicates that the ith person knows a particular topic, and 0 indicates that the ith person does not know the topic.

######Output Format

On the first line, print the maximum number of topics a 2-people team can know.
On the second line, print the number of teams that can know the maximum number of topics.

######Constraints
```shell
2 ≤ N ≤ 500 
1 ≤ M ≤ 500
```
######Sample Input
```shell
4 5
10101
11100
11010
00101
```
######Sample Output
```
5
2
```
######Explanation
```shell
(1, 3) and (3, 4) know all the 5 topics. So the maximal topics a 2-people team knows is 5,
and only 2 teams can achieve this.
```
