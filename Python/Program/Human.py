#   Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
#   dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#   maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#KELAS HUMAN
class Human:
    ## private class
    __nik = ""
    __nama = ""
    __gender = ""

    #KONSTRUKTOR
    def __init__(self, nik="", nama="", gender=""):
        self.__nik = nik
        self.__nama = nama
        self.__gender = gender

    #GETTER SETTER NIK
    def get_nik(self):
        return self.__nik

    def set_nik(self, nik):
        self.__nik = nik

    #GETTER SETTER NAMA
    def get_nama(self):
        return self.__nama

    def set_nama(self, nama):
        self.__nama = nama

    #GETTER SETTER GENDER
    def get_gender(self):
        return self.__gender

    def set_gender(self, gender):
        self.__gender = gender
