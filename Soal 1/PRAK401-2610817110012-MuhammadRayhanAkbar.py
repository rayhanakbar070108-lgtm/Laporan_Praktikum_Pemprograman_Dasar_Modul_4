n,simbol = input().split()
n = int(n)

hasil = []
for i in range(1, 51):
    if i % n == 0:
        hasil.append(simbol)
    else:
        hasil.append(str(i))

print(" ".join(hasil))