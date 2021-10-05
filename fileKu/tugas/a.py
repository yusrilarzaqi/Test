umur = int(input("masukan umur anda : "))

if umur >= 18:
    status_pendaftaran = int(input("masukan NIM anda : "))
    if status_pendaftaran == 185512:
        print("Anda sudah berhak memilih")
    else:
        print("Status anda belum terdaftar")
else:
    print("anda belu. berhak memilih")