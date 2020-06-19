if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    a , b = -101, -101
    for i in arr:
        if(i > a):
            b, a = a, i
        if(i > b and i < a):
            b = i
    print(b)
