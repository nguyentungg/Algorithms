# Searching
## Sequential Search
In this, the list or array is traversed sequentially and every element is checked.

## Interval Search
These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear Search as they repeatedly target the center of the search structure and divide the search space in half.



### When to use BFS or DFS
//If you know a solution is not far from the root of the tree:
BFS

//If the tree is very deep and solutions are rare, 
BFS (DFS will take long time. )

//If the tree is very wide:
DFS (BFS will need too much memory)

//If solutions are frequent but located deep in the tree
DFS

//determining whether a path exists between two nodes
DFS

//Finding the shortest path
BFS