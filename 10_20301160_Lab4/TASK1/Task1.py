from queue import PriorityQueue
import math
def Dijkstra(graph,source):
    size = len(graph)
    queue1 = PriorityQueue()
    shortest = [math.inf]*size
    if_visited = [False]*size
    shortest[source] = 0
    queue1.put((shortest[source],source))
    while not queue1.empty():
        f = queue1.get()[1]
        if if_visited[f]:
            continue
        if_visited[f] = True
        for i in graph[f]:
            temp = shortest[f] + i[1]
            if temp < shortest[i[0]]:
                shortest[i[0]] = temp
                queue1.put((shortest[i[0]],i[0]))
    outputfile.write(str(shortest[size-1])+"\n")
inputfile = open("input1.txt","r")
outputfile = open("output1.txt","w")
for _ in range(int(inputfile.readline())):
    one,two = map(int,inputfile.readline().split())
    ad_list = [[]for x in range(one+1)]
    for k in range(two):
        u,v,titans = map(int,inputfile.readline().split())
        ad_list[u].append((v,titans))
    Dijkstra(ad_list,1)





