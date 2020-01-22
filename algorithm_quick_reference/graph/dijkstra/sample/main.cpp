
#include <iostream>

using namespace std;

#define V (9)
#define IMAX (1<<30)

int minDistance(int dist[], bool sptSet[])
{
    int min (IMAX), min_index;

    for (int v=0; v<V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

int printSolution(int dist[])
{
    for (int i=0; i<V; i++)
        cout << i << ' ' << dist[i] << endl;
}

void dijkstra(int graph[V][V], int src)
{
    int dist [V];
    bool sptSet[V];

    for (int i=0; i<V; i++)
        dist[i] = IMAX, sptSet[i] = false;

    dist[src] = 0;

    for (int c=0; c<V-1; c++)
    {
        int u = minDistance(dist, sptSet);

        sptSet[u] = true;

        for (int v= 0; v<V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != IMAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
    }
    printSolution(dist);
}

int main()
{
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0); 
  
    return 0;
}
