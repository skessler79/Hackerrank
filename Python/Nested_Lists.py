if __name__ == '__main__':
    arr = []
    lowest = 1000
    second = 1500
    names = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        arr.append([name, score])
        if score < lowest:
            second = lowest
            lowest = score
        elif score < second and score > lowest:
            second = score

    for i in arr:
        if i[1] == second:
            names.append(i[0])

    names = sorted(names)
    for i in names:
        print(i)
