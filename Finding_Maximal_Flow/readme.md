
### Max Flow Algorithm using Ford-Fulkerson

### Introduction
This code implements the Ford-Fulkerson algorithm to find the maximum flow in a given flow network. The algorithm is based on the concept of augmenting paths and residual graphs.

### Algorithm Overview
1. **Initialization**: Start with an initial flow of 0.
2. **Augmenting Path Search**:
   - While there exists an augmenting path from the source to the sink:
     - Find an augmenting path using breadth-first search (BFS).
     - Determine the maximum flow that can be sent along the augmenting path, which is the minimum residual capacity along the edges of the path.
     - Increase the flow along the augmenting path by the determined amount.
3. **Return**: Once no augmenting path exists, return the maximum flow.

### Code Overview
- It includes a function `bfs` to find augmenting paths using BFS.
- The `fordFulk` function implements the Ford-Fulkerson algorithm.
- The `solve` function reads input, constructs the graph, and finds the maximum flow.
- The main function initializes I/O and calls the `solve` function.

### Working
The provided code implements the Ford-Fulkerson algorithm to find the maximum flow in a flow network. It follows these main steps:

1. **Initialization**: The algorithm starts with an initial flow of 0.
2. **Augmenting Path Search**: It iteratively finds augmenting paths from the source to the sink using breadth-first search (BFS).
3. **Flow Augmentation**: Along each augmenting path, it determines the maximum flow that can be sent and increases the flow accordingly.
4. **Termination**: The algorithm terminates when no augmenting path exists, and returns the maximum flow found.

The code uses a combination of macros and functions to streamline the implementation. It reads input for the flow network, computes the maximum flow, and outputs the result along with the execution time.
