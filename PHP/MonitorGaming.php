<?php
require_once "Monitor.php";

class MonitorGaming extends Monitor {
    private $refreshRate;
    private $kabelTambahan; 
    private $modeGaming;

    public function __construct($id, $nama, $merek, $harga, $gambar,
                                $ukuranLayar, $resolusi,
                                $refreshRate, $kabelTambahan, $modeGaming) {
        parent::__construct($id, $nama, $merek, $harga, $gambar, $ukuranLayar, $resolusi);
        $this->refreshRate   = $refreshRate;
        $this->kabelTambahan = $kabelTambahan;
        $this->modeGaming    = $modeGaming;
    }

    public function getRefreshRate()   { return $this->refreshRate; }
    public function getKabelTambahan() { return $this->kabelTambahan; }
    public function getModeGaming()    { return $this->modeGaming; }
}
?>
