## problem statement 
Develop and modify a C++ program to represent campus buildings as vertices and pathways as edges in a graph. Implement Breadth-First Search (BFS) from a starting vertex selected by the user. Display the BFS traversal order, identify reachable and unvisited vertices, count the reachable vertices, and display the BFS level of each reachable vertex.

## Aproch

1.Represent campus buildings as vertices and pathways as edges using an adjacency list.

2.Accept the starting vertex from the user.

3.Apply BFS using a queue to traverse the graph level by level.

4.Store visited vertices in a visited array and record their BFS levels.

5.Display the traversal order, reachable vertices, and unvisited vertices.

6.Count the total number of reachable vertices and display their BFS levels.

## complexity

Let V be the number of vertices (buildings) and E be the number of edges (pathways).
Graph Creation: O(V + E)
BFS Traversal: O(V + E)
Display Reachable and Unvisited Vertices: O(V)
Count Reachable Vertices: O(V)
Display BFS Levels: O(V)
Time Complexity: O(V + E)
Space Complexity: O(V + E)

## Conclusion
Thus, the modified BFS program efficiently traverses the campus building network from a user-selected starting vertex. It displays the traversal order, identifies reachable and unvisited vertices, counts reachable vertices, and determines the BFS level of each reachable vertex. The program has a time complexity of  and a space complexity of  using an adjacency list.
