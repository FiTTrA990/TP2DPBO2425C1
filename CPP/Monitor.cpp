#include "Elektronik.cpp"

class Monitor : public Elektronik {
private:
    //atribut pada monitor
    string ukuran_layar, layar, resolusi;

public:
    //meanggil pada Elektronik 
    Monitor() : Elektronik(), ukuran_layar(""), layar(""), resolusi("") {}
    Monitor(int i, string n, string m, string h, string g, string u, string l, string r)
        : Elektronik(i, n, m, h, g), ukuran_layar(u), layar(l), resolusi(r) {}

    //getter akses data
    string getUkuranLayar() const{ 
        return ukuran_layar; 
    }
    string getLayar() const{ 
        return layar; 
    }
    string getResolusi() const{ 
        return resolusi; 
    }

    //setter ubah data
    void setUkuranLayar(string u){ 
        ukuran_layar = u; 
    }
    void setLayar(string l){ 
        layar = l; 
    }
    void setResolusi(string r){ 
        resolusi = r; 
    }
};


