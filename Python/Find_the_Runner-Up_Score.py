if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    winner = -99
    runnerup = -100
    for i in arr:
        if i > winner:
            runnerup = winner
            winner = i
        elif i > runnerup and i != winner:
            runnerup = i

    print(runnerup)
