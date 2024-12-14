def color_nodes(graph):
    color_names = ['Green', 'White',  'Red',
                   'Yellow', 'Orange','Black']
    color_map = {}
    sorted_nodes = sorted(graph, key=lambda x: len(graph[x]), reverse=True)

    for i in sorted_nodes:
        neighbor_colors = set(color_map.get(j) for j in graph[i])
        available_colors = [color for color in range(
            len(graph)) if color not in neighbor_colors]
        color_map[i] = available_colors[0]

    print("Vertex\tColor")
    for x, color in color_map.items():
        print(x + "\t" + color_names[color])

graph = {
    'A': ['B', 'C', 'D'],
    'B': ['A', 'C'],
    'C': ['A', 'B', 'D', 'E'],
    'D': ['A', 'C', 'E'],
    'E': ['C', 'D']
}
color_nodes(graph)