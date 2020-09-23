# 미로찾기
# 가까운 순으로 순차적으로 검색

from collections import deque

# N,M 입력받기

n,m = map(int,input().split())

# 2차원 리스트를 담을 그래프 선언
graph = []

for i in range(n):
    graph.append(list(map(int,input())))

# 상하좌우 움직임이 저장된 배열 선언

dx = [-1,1,0,0]
dy = [0,0,-1,1]

# bfs 선언 
def bfs(x,y):

    queue = deque()
    queue.append((x,y))
    # 반복문으로 계속 반복함 

    # 큐가 빌때까지 반복
    while queue:
        
        x,y = queue.popleft()


        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            # 칸을 넘어가면 무시
            if nx < 0 or nx >= n or ny < 0 or ny >=m:
                continue
            # 0일경우에도 무시
            if graph[x][y] == 0:
                continue

            # 해당 노드를 처음방문하는 경우에만 최단 거리 기록
            if graph[nx][ny] == 1:
                graph[nx][ny] = graph[x][y]+1
                queue.append((nx,ny))

    # 가장 오른쪽 아래의 최단거리 반환
    return graph[n-1][m-1]
        
print(bfs(0,0))
        
