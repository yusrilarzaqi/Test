num = int(input("Berapa jumlah data : "))
data = []
print("\nINPUT")
for i in range(1, 1+num):
    data.insert(i, int(input(f"nilai data ke-{i} : ")))

print("\nOUTPUT")
for k, j in enumerate(data):
    print(f"nilai data ke-{k+1} : {j}")
