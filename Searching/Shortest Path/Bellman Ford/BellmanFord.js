// Javascript program for Bellman-Ford's single source
// shortest path algorithm.

// The main function that finds shortest
// distances from src to all other vertices
// using Bellman-Ford algorithm. The function
// also detects negative weight cycle
// The row graph[i] represents i-th edge with
// three values u, v and w.
function BellmanFord(graph, V, E, src) {
    // Initialize distance of all vertices as infinite.
    var dis = Array(V).fill(1000000000);

    // initialize distance of source as 0
    dis[src] = 0;

    // Relax all edges |V| - 1 times. A simple
    // shortest path from src to any other
    // vertex can have at-most |V| - 1 edges
    for (var i = 0; i < V - 1; i++) {
        for (var j = 0; j < E; j++) {
            if ((dis[graph[j][0]] + graph[j][2]) < dis[graph[j][1]])
                dis[graph[j][1]] = dis[graph[j][0]] + graph[j][2];
        }
    }

    // check for negative-weight cycles.
    // The above step guarantees shortest
    // distances if graph doesn't contain
    // negative weight cycle. If we get a
    // shorter path, then there is a cycle.
    for (var i = 0; i < E; i++) {
        var x = graph[i][0];
        var y = graph[i][1];
        var weight = graph[i][2];
        if ((dis[x] != 1000000000) &&
            (dis[x] + weight < dis[y]))
            document.write("Graph contains negative" +
                " weight cycle<br>");
    }

    document.write("Vertex Distance from Source<br>");
    for (var i = 0; i < V; i++)
        document.write(i + "" + dis[i] + "<br>");
}

// Driver code
var V = 5; // Number of vertices in graph
var E = 8; // Number of edges in graph

// Every edge has three values (u, v, w) where
// the edge is from vertex u to v. And weight
// of the edge is w.
var graph = [[0, 1, -1], [0, 2, 4],
[1, 2, 3], [1, 3, 2],
[1, 4, 2], [3, 2, 5],
[3, 1, 1], [4, 3, -3]];
BellmanFord(graph, V, E, 0);
