if __name__ == '__main__':
    N = int(input())

    arr = []

    for _ in range(N):
        user_input = input()
        if user_input == 'print':
            print(arr)
            continue
        lst = user_input.split()
        operation = lst[0]
        arg = lst[1:]

        operation = operation + "(" + ",".join(arg) + ")"
        eval("arr" + "." + operation)