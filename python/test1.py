def is_odd(x):
    return x % 2

num = [x for x in range(1, 11111)]

data = filter(is_odd, num)
data = list(data)
print(data)
