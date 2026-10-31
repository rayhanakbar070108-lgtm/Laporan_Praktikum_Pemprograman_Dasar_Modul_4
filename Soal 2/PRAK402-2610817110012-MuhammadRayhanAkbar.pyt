n = int(input())

ganjil = [str(i) for i in range(1, n + 1, 2)]

genap_awal = n if n % 2 == 0 else n - 1
genap = [str(i) for i in range(genap_awal, 1, -2)]

print(" ".join(ganjil))
print(" ".join(genap))