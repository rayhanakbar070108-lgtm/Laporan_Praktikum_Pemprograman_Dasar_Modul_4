n, k = map(int, input().split())

total_semua_baris = 0

for i in range(1, n + 1):
    jumlah_baris = 0

    for j in range(i, 0, -1):
        if j != i:
            print(" + ", end="")

        print(f"({j} * {k})", end="")
        jumlah_baris += j * k

    print(" =", jumlah_baris)
    total_semua_baris += jumlah_baris

print(total_semua_baris)