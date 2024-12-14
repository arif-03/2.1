def color_nodes(graph):
    color_names = ['Green', 'White',  'Red',
                   'Yellow', 'Orange','Black']
    color_map = {}
    sorted_nodes = sorted(graph, key=lambda x: len(graph[x]), reverse=True)

    for node in sorted_nodes:
        neighbor_colors = set(color_map.get(neigh) for neigh in graph[node])
        available_colors = [color for color in range(
            len(graph)) if color not in neighbor_colors]
        color_map[node] = available_colors[0]

    print("Vertex\tColor")
    for vertex, color in color_map.items():
        print(vertex + "\t" + color_names[color])

graph = {
    '0': list('125'), '1': list('024'), '2': list('013'), '3': list('245'),
   '4':list('135'), '5': list('034')
}
color_nodes(graph)