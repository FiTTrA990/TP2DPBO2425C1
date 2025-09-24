#include <iostream>
#include <vector>
#include "Monitor_gaming.cpp"
using namespace std;

vector<Monitor_gaming> daftar;

// Header tabel
void tampilHeader() {
    cout << left << setw(5) << "ID"
         << setw(12) << "Nama"
         << setw(10) << "Merek"
         << setw(10) << "Harga"
         << setw(10) << "Gambar"
         << setw(12) << "Uk.Layar"
         << setw(10) << "Layar"
         << setw(10) << "Resolusi"
         << setw(12) << "Refresh"
         << setw(15) << "TambahanKabel"
         << setw(10) << "Mode" << endl;
    cout << string(116, '-') << endl;
}

// Menambah data (input user)
void tambahData() {
    int id;
    string nama, merek, harga, gambar;
    string ukuran, layar, resolusi;
    string rr, kabel, mode;

    cout << "Masukkan ID: "; cin >> id;
    cout << "Nama: "; cin >> nama;
    cout << "Merek: "; cin >> merek;
    cout << "Harga: "; cin >> harga;
    cout << "Gambar: "; cin >> gambar;
    cout << "Ukuran Layar: "; cin >> ukuran;
    cout << "Jenis Layar: "; cin >> layar;
    cout << "Resolusi: "; cin >> resolusi;
    cout << "Refresh Rate: "; cin >> rr;
    cout << "Tambahan Kabel: "; cin >> kabel;
    cout << "Mode: "; cin >> mode;

    Monitor_gaming mg(id, nama, merek, harga, gambar,
                      ukuran, layar, resolusi,
                      rr, kabel, mode);

    daftar.push_back(mg);
    cout << "Data berhasil ditambahkan!\n";
}

// Menampilkan semua data
void tampilData() {
    if (daftar.empty()) {
        cout << "Belum ada data!\n";
        return;
    }
    tampilHeader();
    for (auto &d : daftar) {
        d.tampil();
    }
}

int main() {
    // 5 objek awal
    daftar.push_back(Monitor_gaming(1,"UltraGear","LG","2000","LG.png","27inch","IPS","2K","165Hz","HDMI","Gaming"));
    daftar.push_back(Monitor_gaming(2,"ROG Swift ","Asus","2500","Asus.png","24inch","TN","1080p","144Hz","DP","Office"));
    daftar.push_back(Monitor_gaming(3,"Nitro","Acer","1800","Acer.png","32inch","VA","4K","120Hz","HDMI","Gaming"));
    daftar.push_back(Monitor_gaming(4,"Mesin","MSI","3000","MSI.png","27inch","IPS","1440p","240Hz","DP","Esport"));
    daftar.push_back(Monitor_gaming(5,"Odyssey ","Samsung","2200","Samsung.png","34inch","OLED","UWQHD","175Hz","USB-C","Multimedia"));

    int pilih;
    do {
        cout << "\nMenu:\n1. Tambah Data\n2. Tampil Data\n0. Keluar\nPilih: \n";
        cin >> pilih;
        switch(pilih) {
            case 1: tambahData(); break;
            case 2: tampilData(); break;
            case 0: cout << "Keluar...\n"; break;
            default: cout << "Pilihan salah!\n";
        }
    } while(pilih != 0);

    return 0;
}

