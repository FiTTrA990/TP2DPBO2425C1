public class Elektronik {
    protected int id;
    protected String nama;
    protected String merek;
    protected String harga;
    protected String gambar;

    public Elektronik() {
        this.id = 0;
        this.nama = "";
        this.merek = "";
        this.harga = "";
        this.gambar = "";
    }

    public Elektronik(int id, String nama, String merek, String harga, String gambar) {
        this.id = id;
        this.nama = nama;
        this.merek = merek;
        this.harga = harga;
        this.gambar = gambar;
    }
}
