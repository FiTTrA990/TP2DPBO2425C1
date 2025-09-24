from tabulate import tabulate
from MonitorGaming import MonitorGaming


daftar = [
    MonitorGaming(1,"UltraGear","LG","2000","LG.png","27inch","IPS","2K","165Hz","HDMI","Gaming"),
    MonitorGaming(2,"ROG Swift","Asus","2500","Asus.png","24inch","TN","1080p","144Hz","DP","Office"),
    MonitorGaming(3,"Nitro","Acer","1800","Acer.png","32inch","VA","4K","120Hz","HDMI","Gaming"),
    MonitorGaming(4,"Mesin","MSI","3000","MSI.png","27inch","IPS","1440p","240Hz","DP","Esport"),
    MonitorGaming(5,"Odyssey","Samsung","2200","Samsung.png","34inch","OLED","UWQHD","175Hz","USB-C","Multimedia")
]



def tambah_data():
    try:
        id = int(input("Masukkan ID: "))
    except ValueError:
        print("ID harus angka!")
        return

    nama = input("Nama: ")
    merek = input("Merek: ")
    harga = input("Harga: ")
    gambar = input("Gambar: ")
    ukuran = input("Ukuran Layar: ")
    layar = input("Jenis Layar: ")
    resolusi = input("Resolusi: ")
    rr = input("Refresh Rate: ")
    kabel = input("Tambahan Kabel: ")
    mode = input("Mode: ")

    mg = MonitorGaming(id, nama, merek, harga, gambar,
                       ukuran, layar, resolusi,
                       rr, kabel, mode)
    daftar.append(mg)
    print("Data berhasil ditambahkan!")



def tampil_data():
    if not daftar:
        print("Belum ada data!")
        return

    header = ["ID","Nama","Merek","Harga","Gambar",
              "Uk.Layar","Layar","Resolusi","Refresh",
              "TambahanKabel","Mode"]
    rows = [d.to_list() for d in daftar]
    print(tabulate(rows, headers=header, tablefmt="grid"))



def main():
    while True:
        print("\nMenu:")
        print("1. Tambah Data")
        print("2. Tampil Data")
        print("0. Keluar")
        pilih = input("Pilih: \n")

        if pilih == "1":
            tambah_data()
        elif pilih == "2":
            tampil_data()
        elif pilih == "0":
            print("Keluar...")
            break
        else:
            print("Pilihan salah!")


if __name__ == "__main__":
    main()

