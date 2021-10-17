import os

def getOption():
    os.system("clear")
    print(""" 
======PROGRAM CURD======
|1| Add Mahasiswa
|2| Show Data
|3| Update Mahasiswa
|4| Delate Data Mahasiswa
|5| Exit
          """)
    inputUser = int(input(">>> "))
    return inputUser

def main():
    inputUser = getOption()

    while inputUser != 5:
        if inputUser == 1:
            print("menambahkan data mahasiswa")
        elif inputUser == 2:
            print("Menampilkan data mahasiswa")
        elif inputUser == 3:
            print("merubah data menambahkan")
        elif inputUser == 4:
            print("Menghapus data mahasiswa")
        else :
            print("yang anda masukan salah")
            break;

        is_continue = input("lanjut ? [y/n] : ")

if '__main__' == __name__:
    main()



