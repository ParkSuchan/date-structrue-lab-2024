# 프로젝트 문제 3번
input = [[4, 3, 2, 1],
         [0, 0, 0, 0],
         [0, 0, 9, 0],
         [1, 2, 3, 4]]
N = 4

forest = []

def problem3(input):
    bear_size = 2
    honeycomb_count = 0
    time = 0
    bear_x, bear_y = 0, 0
    # 입력 힌트

    # forest 리스트를 input 리스트로 초기화
    forest = [row[:] for row in input]
    
    # 곰의 초기 위치 찾기
    for i in range(N):
        for j in range(N):
            if forest[i][j] == 9:
                bear_x, bear_y = i, j
                forest[i][j] = 0
    print("곰의 초기 위치 x : {0}, y : {1}".format(bear_x, bear_y))

    #여기에서부터 코드를 작성하세요.

    visited = [[False] * N for _ in range(N)]

    def dfs(x, y, current_size, current_time):
        nonlocal time

        visited[x][y] = True

        if current_size >= bear_size:
            return current_time
        
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)] 

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                if not visited[nx][ny] and input[nx][ny] <= current_size:

                    result = dfs(nx, ny, current_size, current_time + 1)
                    if result:
                        return result
            
        return None

    result = 0
    result = dfs(bear_x, bear_y, bear_size, time)
    return result

result = problem3(input)

assert result == 14
print("정답입니다.")
