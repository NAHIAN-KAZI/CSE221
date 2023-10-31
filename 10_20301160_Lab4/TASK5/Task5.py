from queue import PriorityQueue
import math
def Network(graph, source):
    size = len(graph)
    queue1 = PriorityQueue()
    shortest = [-math.inf] * size
    check = [False] * size
    shortest[source] = math.inf
    queue1.put((shortest[source] * -1, source))
    while not queue1.empty():
        f = queue1.get()[1]
        if check[f]:
            continue
        check[f] = True
        for v in graph[f]:
            temp = min(v[1], shortest[f])
            if temp > shortest[v[0]]:
                shortest[v[0]] = temp
                queue1.put((shortest[v[0]] * -1, v[0]))
    for i in range(size):
        if(shortest[i] == -math.inf):
            shortest[i] = -1
        if(shortest[i] == math.inf):
            shortest[i] = 0
    outputfile.write(str(shortest[1:]) + "\n")
inputfile = open("input5.txt", "r")
outputfile = open("output5.txt", "w")
for _ in range(int(inputfile.readline())):
    one, two = map(int, inputfile.readline().split())
    ad_list = [[] for x in range(one + 1)]
    for i in range(two):
        u, v, titans = map(int, inputfile.readline().split())
        ad_list[u].append((v, titans))
    Network(ad_list, int(inputfile.readline()))
