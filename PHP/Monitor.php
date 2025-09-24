<?php
require_once "Elektronik.php";

class Monitor extends Elektronik {
    protected $ukuranLayar;
    protected $resolusi;

    public function __construct($id, $nama, $merek, $harga, $gambar, $ukuranLayar, $resolusi) {
        parent::__construct($id, $nama, $merek, $harga, $gambar);
        $this->ukuranLayar = $ukuranLayar;
        $this->resolusi = $resolusi;
    }

    public function getUkuranLayar() { return $this->ukuranLayar; }
    public function getResolusi() { return $this->resolusi; }

    public function setUkuranLayar($ukuranLayar) { $this->ukuranLayar = $ukuranLayar; }
    public function setResolusi($resolusi) { $this->resolusi = $resolusi; }
}
?>
