# 프로젝트 문제 2번
input = ")))()"

def problem2(input):
    # 이 곳에 코드를 작성하세요.
    # 입력 힌트

    stack = []
    result = 0
    
    for char in input:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
            else:
                result += 1

    result += len(stack)
    
    return result   

result = problem2(input)

assert result == 3
print("정답입니다.")
