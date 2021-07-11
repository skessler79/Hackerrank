def minion_game(string):
    stuart = 0
    kevin = 0
    vowels = 'aeiouAEIOU'
    length = len(string)

    for count, letter in enumerate(string):
        if letter in vowels:
            kevin += length - count
        else:
            stuart += length - count

    if stuart > kevin:
        print("Stuart", stuart)
    elif kevin > stuart:
        print("Kevin", kevin)
    else:
        print("Draw")


if __name__ == '__main__':
    s = input()
    minion_game(s)