#Kendall tau distance between permutations
A permutation (or ranking) is an array of **_n_** integers where each of the integers between **_1_** and **_n_** appears exactly once. The Kendall tau distance between the two rankings is the number of pairs that are in different order in the two rankings. For example, the Kendall tau distance between 0 3 1 6 2 5 4 and 1 0 3 6 4 2 5 is 4 because the pairs (0, 1), (3, 1), (2, 4), (5, 4) are in different relative order in the two rankings but all other
pairs are in the same relative order.

1. Design an efficient O(n log n) time algorithm for computing the Kendall tau distance between a given permutation and the identity permutation (that is, 1 2 . . . n). (Hint:Modify Merge-sort.)
2. Extend the above algorithm to give an O(n log n) time algorithm for computing the Kendall tau distance between two permutations.
