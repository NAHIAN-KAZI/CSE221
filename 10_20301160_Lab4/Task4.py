Graph():


def __init__(self, vertices):
    self.V = vertices
    self.graph = [[0 for column in range(vertices)]
                  for row in range(vertices)]


def printS(self, dist):
    print("Vertex \tDistance from Source")
    for node in range(self.V):
        print(node, "\t", dist[node])


def minDistance(self, dist, sptSet):
    min = maxsize

    for u in range(self.V):
        if dist[u] < min and sptSet[u] == False:
            min = dist[u]
            min_index = u

    return min_index


def dijkstra(self, src):
    dist = [maxsize] * self.V
    dist[src] = 0
    sptSet = [False] * self.V

    for cout in range(self.V):
        x = self.minDistance(dist, sptSet)
        sptSet[x] = True