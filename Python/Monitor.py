from Elektronik import Elektronik

class Monitor(Elektronik):
    def __init__(self, id=0, nama="", merek="", harga="", gambar="",
                 ukuran_layar="", layar="", resolusi=""):
        super().__init__(id, nama, merek, harga, gambar)
        self.ukuran_layar = ukuran_layar
        self.layar = layar
        self.resolusi = resolusi
