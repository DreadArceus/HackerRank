if __name__ == '__main__':
    N = int(input())
    a = []
    for i in range(N):
        m, *line = input().split()
        l = list(map(int,line))
        if(m == "print"):
            print(a)
        elif(m == "pop"):
            a.pop()
        elif(m == "sort"):
            a.sort()
        elif(m == "reverse"):
            a.reverse()
        elif(m == "append"):
            a.append(l[0])
        elif(m == "remove"):
            a.remove(l[0])
        else:
            a.insert(l[0], l[1])
