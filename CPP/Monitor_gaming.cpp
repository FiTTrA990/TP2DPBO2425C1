#include "Monitor.cpp"

class Monitor_gaming : public Monitor {
private:
    string refresh_rate, tambahan_kabel, mode;

public:
    Monitor_gaming()
        : Monitor(), refresh_rate(""), tambahan_kabel(""), mode("") {}

    Monitor_gaming(int i, string n, string m, string h, string g,
                   string u, string l, string r,
                   string rr, string tk, string md)
        : Monitor(i, n, m, h, g, u, l, r),
          refresh_rate(rr), tambahan_kabel(tk), mode(md) {}

    string getRefreshRate() const{ 
        return refresh_rate; 
    }
    string getTambahanKabel() const{ 
        return tambahan_kabel; 
    }
    string getMode() const{ 
        return mode; 
    }

    void setRefreshRate(string rr){ 
        refresh_rate = rr; 
    }
    void setTambahanKabel(string tk){ 
        tambahan_kabel = tk; 
    }
    void setMode(string md){ 
        mode = md; 
    }

    void tampil() const {
        cout << left << setw(5) << id
             << setw(12) << nama
             << setw(10) << merek
             << setw(10) << harga
             << setw(10) << gambar
             << setw(12) << ukuran_layar
             << setw(10) << layar
             << setw(10) << resolusi
             << setw(12) << refresh_rate
             << setw(15) << tambahan_kabel
             << setw(10) << mode
             << endl;
    }
};
