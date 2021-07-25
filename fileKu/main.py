n = int(input(">> "))

for i in range(0, n*2, 2):
    for j in range(i):
        print(" ", end="")
    for k in range(n, i, -1):
        print("x", end="")
    print()
