public class MonitorGaming extends Monitor {
    private String refreshRate;
    private String tambahanKabel;
    private String mode;

    public MonitorGaming() {
        super();
        this.refreshRate = "";
        this.tambahanKabel = "";
        this.mode = "";
    }

    public MonitorGaming(int id, String nama, String merek, String harga, String gambar,
                         String ukuranLayar, String layar, String resolusi,
                         String refreshRate, String tambahanKabel, String mode) {
        super(id, nama, merek, harga, gambar, ukuranLayar, layar, resolusi);
        this.refreshRate = refreshRate;
        this.tambahanKabel = tambahanKabel;
        this.mode = mode;
    }

    public void tampil() {
        System.out.printf("%-5d %-12s %-10s %-10s %-10s %-12s %-10s %-10s %-12s %-15s %-10s\n",
                id, nama, merek, harga, gambar,
                ukuranLayar, layar, resolusi,
                refreshRate, tambahanKabel, mode);
    }
}
