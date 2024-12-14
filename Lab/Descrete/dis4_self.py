INF = 1e9
def floyd(mat):
    l=len(mat)
    dist=[[float('inf')]*l for i in range(l)]
    for i in range(l):
        for j in range(l):
            if i==j:
                dist[i][j]=0
            elif mat[i][j]!=0:
                dist[i][j]=mat[i][j]

    for k in range(l):
        for i in range(l):
            for j in range(l):
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j])
    for i in dist:
        print(i)
adjacency_matrix = [
    [0, 5, 1, INF, INF, 8],
    [2, 0, 2, INF, 4, INF],
    [INF, INF, 0, 2, INF, INF],
    [INF, INF, INF, 0, 4, 2],
    [INF, 1, INF, INF, 0, INF],
    [INF, INF, INF, INF, 1, 0]
]
floyd(adjacency_matrix)