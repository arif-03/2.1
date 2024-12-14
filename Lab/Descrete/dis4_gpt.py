INF = float(1e9)

def floyd_warshall(graph):
    num_vertices = len(graph)
    
    # Initialize the distance matrix with the graph's adjacency matrix
    distance = [[float('inf')] * num_vertices for i in range(num_vertices)]
    
    #setting distance
    for i in range(num_vertices):
        for j in range(num_vertices):
            if i == j:
                distance[i][j] = 0
            elif graph[i][j] != 0:
                distance[i][j] = graph[i][j]
    
    #finding minimum distance            
    for k in range(num_vertices):
        for i in range(num_vertices):
            for j in range(num_vertices):
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j])
                
    return distance

# Example usage:
graph = [
    [0, 5, 1, INF, INF, 8],
    [2, 0, 2, INF, 4, INF],
    [INF, INF, 0, 2, INF, INF],
    [INF, INF, INF, 0, 4, 2],
    [INF, 1, INF, INF, 0, INF],
    [INF, INF, INF, INF, 1, 0]
]

shortest_paths = floyd_warshall(graph)

print("Shortest Paths:")
for row in shortest_paths:
    print(row)
