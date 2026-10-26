## Problem Statement

Develop a C++ program to represent campus buildings as vertices and pathways as edges in a graph. Apply Breadth-First Search (BFS) from a building selected by the user. Display the order in which buildings are visited and the BFS level or distance of each reachable building from the starting building.

## Approach

1.Represent campus buildings as vertices and pathways as edges using an adjacency list.

2.Accept the starting building from the user.

3.Initialize a visited array, BFS level array, and queue.

4.Mark the starting vertex as visited and set its BFS level to 0.

5.Apply Breadth-First Search (BFS) using a queue to visit connected buildings level by level.

6.Display the order in which buildings are visited and the BFS level of each reachable building.

## Complexity Analysis

Let V be the number of vertices (buildings) and E be the number of edges (pathways).

Graph Creation: O(V + E)

BFS Traversal: O(V + E)

Display Traversal Order: O(V)

Display BFS Levels: O(V)

Time Complexity: O(V + E)

Space Complexity: O(V + E)

## Conclusion

Thus, the C++ program successfully implements Breadth-First Search (BFS) to traverse campus buildings represented as a graph. It displays the traversal order and BFS level of each reachable building from the selected starting building. The program helps determine the minimum number of pathways required to reach each building from the starting point.

