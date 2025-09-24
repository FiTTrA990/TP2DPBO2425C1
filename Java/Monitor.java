public class Monitor extends Elektronik {
    protected String ukuranLayar;
    protected String layar;
    protected String resolusi;

    public Monitor() {
        super();
        this.ukuranLayar = "";
        this.layar = "";
        this.resolusi = "";
    }

    public Monitor(int id, String nama, String merek, String harga, String gambar,
                   String ukuranLayar, String layar, String resolusi) {
        super(id, nama, merek, harga, gambar);
        this.ukuranLayar = ukuranLayar;
        this.layar = layar;
        this.resolusi = resolusi;
    }
}
