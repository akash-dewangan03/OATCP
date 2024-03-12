# README

## About the Algorithm

The provided code implements a dynamic programming solution to solve a grid-based problem. In this problem, we are given a grid of size `n x n`, where each cell is either blocked (`'*'`) or unblocked (`'.'`). We need to find the number of ways to reach the bottom-right cell from the top-left cell, moving only right or down, and without visiting any blocked cells.

The algorithm initializes a 2D dynamic programming array `dp[][]` where `dp[i][j]` represents the number of ways to reach cell `(i, j)` from the top-left corner `(0, 0)`. It iterates through each cell of the grid and updates the `dp[][]` array accordingly. If a cell `(i, j)` is unblocked, it adds the number of ways to reach `(i, j)` from its left cell `(i-1, j)` and top cell `(i, j-1)`.

Finally, the algorithm outputs `dp[n-1][n-1]`, which represents the number of ways to reach the bottom-right cell from the top-left cell modulo `1e9 + 7`.


## Code Explanation

- It defines macros for commonly used types and operations to simplify code writing.
- The `solve()` function implements the dynamic programming algorithm to solve the problem.
- The `main()` function handles input/output and test case execution.


## Complexity Analysis

- Time Complexity: The time complexity of the algorithm is O(n^2), where n is the size of the grid.
- Space Complexity: The space complexity of the algorithm is O(n^2) to store the dynamic programming array.

