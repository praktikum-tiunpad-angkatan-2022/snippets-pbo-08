class InvalidNumberException(Exception):
    def __init__(self):
        super().__init__("Angka yang dimasukkan melanggar ketentuan")


def cekAngka(angka):
    if angka < 0 or angka > 20:
        return True
    else:
        raise InvalidNumberException()


try:
    cekAngka(20)
except Exception as e:
    print("Terjadi error:\n", str(e))
