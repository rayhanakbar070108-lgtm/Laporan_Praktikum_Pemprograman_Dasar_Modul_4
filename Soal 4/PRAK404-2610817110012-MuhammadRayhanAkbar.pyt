nama = input("Masukkan nama anda : ")

while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5:
        print(f"Terimakasih, telah menggunakan kalkulator, {nama}")
        break
    elif 1 <= pilihan <= 4:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))

        if pilihan == 1:
            print(f"Hasil penjumlahan antara {a:.2f} dengan {b:.2f} adalah {a + b:.2f}")
        elif pilihan == 2:
            print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {a - b:.2f}")
        elif pilihan == 3:
            print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {a * b:.2f}")
        else:
            if b == 0:
                print("Pembagian dengan nol tidak bisa dilakukan")
            else:
                print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {a / b:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")