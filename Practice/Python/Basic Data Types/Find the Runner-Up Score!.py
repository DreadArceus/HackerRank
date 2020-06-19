if __name__ == '__main__':
    n = int(input())
    lis = list(map(int, input().split()))
    lisN = []
    for i in lis:
        if(i not in lisN):
            lisN.append(i)
    lisN.sort(reverse = True)
    print(lisN[1])
