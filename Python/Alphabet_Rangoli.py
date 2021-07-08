def print_rangoli(size):
    length = 4 * size - 3
    rows = 2 * size - 1
    for i in range(2 * size - 1):
        output = '-' + chr(ord('`') + size) + '-'

        if i >= size:
            for j in range(1, rows - i):
                output += chr(ord('`') + size - j) + '-'
            for j in range(rows-i-2, -1, -1):
                output += chr(ord('`') + size - j) + '-'
        else:
            for j in range(1, i + 1):
                output += chr(ord('`') + size - j) + '-'
            for j in range(i-1, -1, -1):
                output += chr(ord('`') + size - j) + '-'

        remaining = length - len(output)
        output = int(remaining / 2) * '-' + output + int(remaining / 2) * '-'
        if(i == size - 1):
            output = output[1:-1]
        print(output)

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)