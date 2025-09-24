import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static ArrayList<MonitorGaming> daftar = new ArrayList<>();

    // Header tabel
    static void tampilHeader() {
        System.out.printf("%-5s %-12s %-10s %-10s %-10s %-12s %-10s %-10s %-12s %-15s %-10s\n",
                "ID","Nama","Merek","Harga","Gambar","Uk.Layar","Layar","Resolusi","Refresh","TambahanKabel","Mode");
        System.out.println("--------------------------------------------------------------------------------------------------------------");
    }

    // Tambah data
    static void tambahData(Scanner sc) {
        System.out.print("Masukkan ID: ");
        int id = sc.nextInt(); sc.nextLine();

        System.out.print("Nama: "); String nama = sc.nextLine();
        System.out.print("Merek: "); String merek = sc.nextLine();
        System.out.print("Harga: "); String harga = sc.nextLine();
        System.out.print("Gambar: "); String gambar = sc.nextLine();
        System.out.print("Ukuran Layar: "); String ukuran = sc.nextLine();
        System.out.print("Jenis Layar: "); String layar = sc.nextLine();
        System.out.print("Resolusi: "); String resolusi = sc.nextLine();
        System.out.print("Refresh Rate: "); String rr = sc.nextLine();
        System.out.print("Tambahan Kabel: "); String kabel = sc.nextLine();
        System.out.print("Mode: "); String mode = sc.nextLine();

        MonitorGaming mg = new MonitorGaming(id, nama, merek, harga, gambar,
                                             ukuran, layar, resolusi,
                                             rr, kabel, mode);
        daftar.add(mg);
        System.out.println("Data berhasil ditambahkan!");
    }

    // Tampil data
    static void tampilData() {
        if (daftar.isEmpty()) {
            System.out.println("Belum ada data!");
            return;
        }
        tampilHeader();
        for (MonitorGaming mg : daftar) {
            mg.tampil();
        }
    }

    public static void main(String[] args) {
        // 5 data awal
        daftar.add(new MonitorGaming(1,"UltraGear","LG","2000","LG.png","27inch","IPS","2K","165Hz","HDMI","Gaming"));
        daftar.add(new MonitorGaming(2,"ROG Swift","Asus","2500","Asus.png","24inch","TN","1080p","144Hz","DP","Office"));
        daftar.add(new MonitorGaming(3,"Nitro","Acer","1800","Acer.png","32inch","VA","4K","120Hz","HDMI","Gaming"));
        daftar.add(new MonitorGaming(4,"Mesin","MSI","3000","MSI.png","27inch","IPS","1440p","240Hz","DP","Esport"));
        daftar.add(new MonitorGaming(5,"Odyssey","Samsung","2200","Samsung.png","34inch","OLED","UWQHD","175Hz","USB-C","Multimedia"));

        Scanner sc = new Scanner(System.in);
        int pilih;

        do {
            System.out.println("\nMenu:");
            System.out.println("1. Tambah Data");
            System.out.println("2. Tampil Data");
            System.out.println("0. Keluar");
            System.out.print("Pilih: ");
            pilih = sc.nextInt(); sc.nextLine();

            switch (pilih) {
                case 1: tambahData(sc); break;
                case 2: tampilData(); break;
                case 0: System.out.println("Keluar..."); break;
                default: System.out.println("Pilihan salah!");
            }
        } while (pilih != 0);

        sc.close();
    }
}

