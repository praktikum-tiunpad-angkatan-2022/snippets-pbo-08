def bacaFile():
    raise FileNotFoundError("File tidak ditemukan")


try:
    bacaFile()
except FileNotFoundError as e:
    print("Terjadi suatu error:", e)
