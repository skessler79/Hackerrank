

if __name__ == '__main__':
    h, w = input().split()
    h = int(h)
    w = int(w)

    for i in range(h):
        if i == (h - 1) / 2:
            output = 'WELCOME'
        elif i > (h - 1) / 2:
            output = '.|' + (2 * (h - i - 1)) * '..|' + '.'
        else:
            output = '.|' + (2 * i) * '..|' + '.'
        remaining = w - len(output)
        output = (int)(remaining / 2) * '-' + output + (int)(remaining / 2) * '-'
        print(output)