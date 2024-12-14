# Function to color graph using Welch-Powell's algorithm
def coloured(graph):
    color_map = {}  # Dictionary to store vertex-color pairs

    # Consider nodes in descending degree
    for node in sorted(graph, key=lambda x: len(graph[x]), reverse=True):
        neighbor_colors = set(color_map.get(neigh)
                              for neigh in graph[node])  # Get colors of neighbors
        # Find the first available color not used by neighbors
        color_map[node] = next(color for color in range(
            len(graph)) if color not in neighbor_colors)

    return color_map  # Return the dictionary of vertex-color assignments


# Adjacency list of given graph
graph = {'a': list('bcd'), 'b': list('de'), 'c': list('de'),
         'd': list('ce'), 'e': list('de')}

# Call the function to color the graph using Welch-Powell's algorithm
colored_vertices = coloured(graph)

# Print the header
print("vertex\tcolour")

# Print the solution
for vertex, color in colored_vertices.items():
    print(f"{vertex}\t{color}")
