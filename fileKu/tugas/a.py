umur = int(input("masukan umur anda : "))

if umur >= 18:
    status = input("apakah anda terpilih [y/n]")
    if status == 'y' or status == 'Y' :
        print("Anda sudah berhak memilih")
    elif status == 'n' or status == 'N':
        print("Status anda belum terdaftar")
    else:
        print("anda salah menginputkan")
else:
    print("anda belu. berhak memilih")
