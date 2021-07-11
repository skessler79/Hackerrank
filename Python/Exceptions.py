

if __name__ == '__main__':
    num = int(input())
    values = []
    for i in range(num):
        values += input().split()
    
    for i in range(0, num * 2, 2):
        try:
            print(int(values[i]) // int(values[i+1]))
        except Exception as e:
            print("Error Code:", e)

