## Eulerian Path Algorithm 

### Introduction
This code implements to find an Eulerian path in a given directed graph. An Eulerian path is a path that traverses each edge of the graph exactly once.

### Algorithm Overview
1. **Initialization**: Determine a starting vertex for the Eulerian path.
2. **Hierholzer's Algorithm**:
   - While there are unexplored edges in the graph:
     - Select a vertex with unexplored edges and start a new cycle from that vertex.
     - Traverse the edges of the cycle, removing them from the graph as they are visited.
     - Append the vertices and edges of the cycle to the Eulerian path.
3. **Return**: Once all edges are explored, return the Eulerian path.

### Code Overview
- The code defines functions for depth-first search (DFS) and for finding Eulerian paths.
- It reads input to construct the directed graph and computes the Eulerian path using the provided functions.
- Macros are used for shorthand notation and to improve code readability.
- The main function initializes I/O and calls the `solve` function.

### Working
The provided code implements Hierholzer's algorithm to find an Eulerian path in a directed graph. Here's how it works:
1. **Initialization**: The algorithm selects a starting vertex to begin the traversal.
2. **Hierholzer's Algorithm**:
   - It iteratively constructs cycles in the graph by traversing unexplored edges.
   - Each cycle starts from a vertex with unexplored edges and continues until it returns to the starting vertex, forming a closed loop.
   - As edges are traversed, they are removed from the graph to avoid revisiting them.
   - The cycles are merged to form the final Eulerian path.
3. **Return**: Once all edges are explored, the algorithm returns the Eulerian path, which traverses each edge exactly once.

The code utilizes macros and functions to streamline the implementation. It reads input for the directed graph, computes the Eulerian path, and outputs the result. If the graph does not contain an Eulerian path, it returns -1.
