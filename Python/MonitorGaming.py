from Monitor import Monitor

class MonitorGaming(Monitor):
    def __init__(self, id=0, nama="", merek="", harga="", gambar="",
                 ukuran_layar="", layar="", resolusi="",
                 refresh_rate="", tambahan_kabel="", mode=""):
        super().__init__(id, nama, merek, harga, gambar,
                         ukuran_layar, layar, resolusi)
        self.refresh_rate = refresh_rate
        self.tambahan_kabel = tambahan_kabel
        self.mode = mode

    def to_list(self):
        """Return data dalam bentuk list untuk tabulate"""
        return [self.id, self.nama, self.merek, self.harga, self.gambar,
                self.ukuran_layar, self.layar, self.resolusi,
                self.refresh_rate, self.tambahan_kabel, self.mode]
