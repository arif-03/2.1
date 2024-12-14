INF = float(1e9)

def floyd_warshall(vertex, adjacency_matrix):
    dist = [[adjacency_matrix[i][j]
             for j in range(vertex)] for i in range(vertex)]
    
    for i in range(vertex):
        for j in range(vertex):
            for k in range(vertex):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

    print("Shortest distances between all pairs of vertices:")
    for i in range(vertex):
        for j in range(vertex):
            if dist[i][j] == INF:
                print("X", end=" ") #x Means infinity
            else:
                print(dist[i][j], end=" ")
        print()


adjacency_matrix = [
    [0, 5, 1, INF, INF, 8],
    [2, 0, 2, INF, 4, INF],
    [INF, INF, 0, 2, INF, INF],
    [INF, INF, INF, 0, 4, 2],
    [INF, 1, INF, INF, 0, INF],
    [INF, INF, INF, INF, 1, 0]
]
vertex = 6
floyd_warshall(vertex, adjacency_matrix)