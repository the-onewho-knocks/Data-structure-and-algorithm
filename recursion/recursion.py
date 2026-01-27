
def func(i ,n):
    if i > n:
        return
    func(i+1, n)
    print(n-i+1)


if __name__ == "__main__":
    func(1 , 4)