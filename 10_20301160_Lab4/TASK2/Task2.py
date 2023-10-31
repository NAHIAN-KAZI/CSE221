from queue import PriorityQueue
import math
def Dijkstra(graph, source):
    size = len(graph)
    queue1 = PriorityQueue()
    shortest = [math.inf] * size
    if_visited = [False] * size         # for checking visited
    shortest[source] = 0
    minimum = [-1] * size
    queue1.put((shortest[source], source))
    while not queue1.empty():
        f = queue1.get()[1]
        if if_visited[f]:
            continue
        if_visited[f] = True
        for v in graph[f]:
            temp = shortest[f] + v[1]
            if temp < shortest[v[0]]:
                minimum[v[0]] = f
                shortest[v[0]] = temp
                queue1.put((shortest[v[0]], v[0]))
    count = size - 1
    minimum_path = []
    while(count != 1):
        minimum_path.append(count)
        count = minimum[count]
    minimum_path.append(1)
    minimum_path.reverse()
    outputfile.write(str(minimum_path) + "\n")
inputfile = open("input2.txt", "r")
outputfile = open("output2.txt", "w")
for _ in range(int(inputfile.readline())):
    one, two = map(int, inputfile.readline().split())
    ad_list = [[] for x in range(one + 1)]
    for k in range(two):
        u, v, titans = map(int, inputfile.readline().split())
        ad_list[u].append((v, titans))
    Dijkstra(ad_list, 1)

