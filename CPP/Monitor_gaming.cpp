#include "Monitor.cpp"
#include <iomanip> 
#include <iostream>
using namespace std;

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

    // Getter
    string getRefreshRate() const { 
        return refresh_rate; 
    }
    string getTambahanKabel() const { 
        return tambahan_kabel; 
    }
    string getMode() const { 
        return mode; 
    }

    // Setter
    void setRefreshRate(string rr) { 
        refresh_rate = rr; 
    }
    void setTambahanKabel(string tk) { 
        tambahan_kabel = tk; 
    }
    void setMode(string md) { 
        mode = md; 
    }

    // tampilkan data
    void tampil() const {
        cout << left << setw(5)  << getId()          
             << setw(12) << getNama()                 
             << setw(10) << getMerek()                
             << setw(10) << getHarga()             
             << setw(10) << getGambar()              
             << setw(12) << getUkuranLayar()         
             << setw(10) << getLayar()                
             << setw(10) << getResolusi()              
             << setw(12) << refresh_rate          
             << setw(15) << tambahan_kabel             
             << setw(10) << mode                       
             << endl;
    }
};
