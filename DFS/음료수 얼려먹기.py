# 음료수 얼려먹기


# DFS - 연결되어있다면 그래프 형태로 모델링 가능 

# N,M 을 공백으로 구분하여 입력받기

n,m = map(int,input().split())

# 2차원 리스트의 맵정보 입력받기

graph = []

for i in range(n):
    graph.append(list(map(int, input())))


# DFS 로 특정한 노드를 방문한 뒤에 연결된 모든 노드들도 방문

def dfs(x,y):

    #주어진 범위를 벗어나는 경우에는 즉시 종료
    if x <=-1 or x >= n or y <= -1 or y >=m:
        return False

    # 현재 노드를 아직 방문하지 않았다면 
    if graph[x][y] == 0:
        # 해당 노드를 방문 처리
        graph[x][y] = 1

        # 상하좌우의 위치도 모두 재귀적으로 호출
        dfs(x-1,y) 

        #하
        dfs(x,y-1) 

        #상
        dfs(x+1,y) 

        #좌
        dfs(x,y+1) 
        #우
        return True
        
    return False

# 모든 노드(위치)에 대하여 음료수 채우기

result = 0

for i in range(n):
    for j in range(m):
        # 현재 위치에 대하여 dfs 수행
        if dfs(i,j) == True:
            result +=1

print(result) # 정답 출력
