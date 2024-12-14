def floyd(graph):
    l=len(graph)
    color_list=["red","green","blue","white"]
    map={}
    s_graph=sorted(graph,key=lambda x:len(graph[x]),reverse=True)
    for n in s_graph:
        neigh=set(map.get(nn) for nn in graph[n])
        avai=[color for color in range(l)if color not in neigh]
        map[n]=avai[0]

    for l,c in map.items():
        print(l+"\t"+color_list[c])

graph = {
    '0': list('125'), '1': list('024'), '2': list('013'), '3': list('245'),
   '4':list('135'), '5': list('034')
}
floyd(graph)