<?php
class Elektronik {
    protected $id;
    protected $nama;
    protected $merek;
    protected $harga;
    protected $gambar;

    public function __construct($id, $nama, $merek, $harga, $gambar = '') {
        $this->id = $id;
        $this->nama = $nama;
        $this->merek = $merek;
        $this->harga = $harga;
        $this->gambar = $gambar;
    }

    // Getter
    public function getId() { return $this->id; }
    public function getNama() { return $this->nama; }
    public function getMerek() { return $this->merek; }
    public function getHarga() { return $this->harga; }
    public function getGambar() { return $this->gambar; }

    // Setter
    public function setNama($nama) { $this->nama = $nama; }
    public function setMerek($merek) { $this->merek = $merek; }
    public function setHarga($harga) { $this->harga = $harga; }
    public function setGambar($gambar) { $this->gambar = $gambar; }
}
?>
