// C# program for Bellman-Ford's single source
// shortest path algorithm.
using System;

class BellmanFord
{

    // The main function that finds shortest
    // distances from src to all other vertices
    // using Bellman-Ford algorithm. The function
    // also detects negative weight cycle
    // The row graph[i] represents i-th edge with
    // three values u, v and w.
    static void BellmanFord(int[,] graph, int V,
                            int E, int src)
    {
        // Initialize distance of all vertices as infinite.
        int[] dis = new int[V];
        for (int i = 0; i < V; i++)
            dis[i] = int.MaxValue;

        // initialize distance of source as 0
        dis[src] = 0;

        // Relax all edges |V| - 1 times. A simple
        // shortest path from src to any other
        // vertex can have at-most |V| - 1 edges
        for (int i = 0; i < V - 1; i++)
        {
            for (int j = 0; j < E; j++)
            {
                if (dis[graph[j, 0]] = int.MaxValue && dis[graph[j, 0]] + graph[j, 2] <
                    dis[graph[j, 1]])
                    dis[graph[j, 1]] =
                    dis[graph[j, 0]] + graph[j, 2];
            }
        }

        // check for negative-weight cycles.
        // The above step guarantees shortest
        // distances if graph doesn't contain
        // negative weight cycle. If we get a
        // shorter path, then there is a cycle.
        for (int i = 0; i < E; i++)
        {
            int x = graph[i, 0];
            int y = graph[i, 1];
            int weight = graph[i, 2];
            if (dis[x] != int.MaxValue &&
                    dis[x] + weight < dis[y])
                Console.WriteLine("Graph contains negative" +
                                            " weight cycle");
        }

        Console.WriteLine("Vertex Distance from Source");
        for (int i = 0; i < V; i++)
            Console.WriteLine(i + "\t\t" + dis[i]);
    }

    // Driver code
    public static void Main(String[] args)
    {
        int V = 5; // Number of vertices in graph
        int E = 8; // Number of edges in graph

        // Every edge has three values (u, v, w) where
        // the edge is from vertex u to v. And weight
        // of the edge is w.
        int[,] graph = {{ 0, 1, -1 }, { 0, 2, 4 },
                    { 1, 2, 3 }, { 1, 3, 2 },
                    { 1, 4, 2 }, { 3, 2, 5 },
                    { 3, 1, 1 }, { 4, 3, -3 }};

        BellmanFord(graph, V, E, 0);
    }
}

