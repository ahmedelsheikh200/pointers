def main():
    x, y = 2, 28
    print(f'x = {x}, y = {y}')
    x, y = swap(x, y)
    print(f'x = {x}, y = {y}')

def swap(a, b):
    temp = a
    a = b
    b = temp
    return a, b

if __name__ == "__main__":
    main()