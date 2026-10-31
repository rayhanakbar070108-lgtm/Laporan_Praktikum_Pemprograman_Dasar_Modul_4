a, b = map(int, input().split())

langkah = 1 if a < b else -1
jumlah = abs(b - a) + 1

hasil = []
for k in range(jumlah):
    x = a + k * langkah
    y = b - k * langkah
    hasil.append(f"{x} {y}")

print(" - ".join(hasil))