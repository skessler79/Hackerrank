def count_substring(string, sub_string):
    ctr = 0
    for i in range(0, len(string) - len(sub_string) + 1):
        if string[i:].startswith(sub_string):
            ctr += 1
    return ctr

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)