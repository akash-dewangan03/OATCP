# README

## About the Algorithm

The provided code implements a dynamic programming solution to solve a problem that involves counting the number of ways to represent a given number `n` as a sum of integers, where each integer can be chosen from the set `{1, 2, 3, 4, 5, 6}`.

The algorithm initializes a dynamic programming array `dp[]` where `dp[i]` represents the number of ways to represent the number `i` as a sum of integers from the set `{1, 2, 3, 4, 5, 6}`. It iterates from `1` to `n`, and for each `i`, it calculates the number of ways to represent `i` as a sum of the integers from `1` to `6`. This is done by considering all possible previous sums up to `i-1` and adding up the corresponding number of ways stored in the `dp[]` array. 

Finally, the algorithm outputs `dp[n]` modulo `1e9 + 7`, where `n` is the input number.


## Code Explanation

- It defines macros for commonly used types and operations to simplify code writing.
- The `solve()` function implements the dynamic programming algorithm to solve the problem.
- The `main()` function handles input/output and test case execution.


## Complexity Analysis

- Time Complexity: The time complexity of the algorithm is O(n), where n is the input number.
- Space Complexity: The space complexity of the algorithm is O(n) to store the dynamic programming array.

