n = int(input(">> "))

for i in range(1, n+1):
    for j in range(i):
        print(" ", end="")
    for k in range(n, i, -1):
        print("x", end="")
    print()
