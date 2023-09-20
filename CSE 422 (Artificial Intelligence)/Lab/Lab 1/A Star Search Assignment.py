source = input("Start node: ")
destination = input("Destination: ")

input_file = open("Input file.txt", "r")
heuristic_cost = {}  #storing the heuristic cost of each node
parent_child_node = {}      #To store the child node of a parent with its graph cost

for node in input_file:
    node = node.split()
    heuristic_cost[node[0]] = int(node[1])
    #print(Heuristic_cost)
    node_track = []   #tracking each node of a parent
    for i in range(2, len(node), 2):
        node_track.append((node[i], int(node[i + 1])))
        #print(node_track)
    parent_child_node[node[0]] = node_track
    #print(parent_child_node)


def a_star_search(source, destination):
    discovered_nodes = {source}     #discovered but not fully explored. At first source
    explored_nodes = set([])
    g = {source: 0}                 #for g(n) function. For root node graph cost is 0
    parent_node = {source: source}  #for root node it is parent of itself
    #print(parent_node)
    while len(discovered_nodes) > 0:
        temp = None
        for i in discovered_nodes:
            if temp == None or g[i] + heuristic_cost[i] < g[temp] + heuristic_cost[temp]:
                temp = i
        if temp == destination:
            path = []   #to track the destination path
            while parent_node[temp] != temp:
                path.append(temp)
                temp = parent_node[temp]
            path.append(source)
            path.reverse()
            print("Path: {}".format((" -> ").join(path)))
            print("Total distance: {} km".format(g[destination]))
            return path
        for (vertex, weight) in parent_child_node[temp]:
            if vertex not in discovered_nodes and vertex not in explored_nodes:
                discovered_nodes.add(vertex)  #discovered new node
                parent_node[vertex] = temp
                g[vertex] = g[temp] + weight
            else:
                if g[vertex] > g[temp] + weight:   #checking less cost
                    g[vertex] = g[temp] + weight
                    parent_node[vertex] = temp
                    if vertex in explored_nodes:
                        discovered_nodes.append(vertex)
                        explored_nodes.remove(vertex)
        explored_nodes.add(temp)
        discovered_nodes.remove(temp)
    print("NO PATH FOUND")
    return None

a_star_search(source, destination)