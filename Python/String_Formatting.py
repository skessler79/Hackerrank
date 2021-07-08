def print_formatted(number):
    temp = number
    width = 0
    binary = ''
    octal = ''
    hexa = ''

    while(temp > 0):
        temp = temp // 2
        width += 1

    for i in range(1, number + 1):
        binary = ''
        octal = ''
        hexa = ''
        temp = i

        while(temp > 0):
            binary = str(temp % 2) + binary
            temp = temp // 2
        
        temp = i
        while(temp > 0):
            octal = str(temp % 8) + octal
            temp = temp // 8

        temp = i
        while(temp > 0):
            hexa_temp = temp % 16
            if(hexa_temp <= 9):
                hexa = str(hexa_temp) + hexa
            else:
                hexa = chr(ord('A') + hexa_temp - 10) + hexa
            temp = temp // 16

        print('{} {} {} {}'.format(str(i).rjust(width), octal.rjust(width), hexa.rjust(width), binary.rjust(width)))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)