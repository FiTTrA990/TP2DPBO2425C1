#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Elektronik {
private:
    int id;
    string nama, merek, harga, gambar;

public:
    Elektronik() : id(0), nama(""), merek(""), harga(""), gambar("") {}
    Elektronik(int i, string n, string m, string h, string g)
        : id(i), nama(n), merek(m), harga(h), gambar(g) {}

    int getId() const{ 
        return id; 
    }
    string getNama() const{ 
        return nama; 
    }
    string getMerek() const{ 
        return merek; 
    }
    string getHarga() const{ 
        return harga; 
    }
    string getGambar() const{ 
        return gambar; 
    }

    void setId(int i){ 
        id = i; 
    }
    void setNama(string n){ 
        nama = n; 
    }
    void setMerek(string m){ 
        merek = m; 
    }
    void setHarga(string h){ 
        harga = h; 
    }
    void setGambar(string g){ 
        gambar = g; 
    }
};

