#   Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
#   dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#   maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#IMPORT FILE SIVITAS SEBAGAI PARENT
from Sivitas import Sivitas

#KELAS MAHASISWA ADALAH CHILD SIVITAS
class Mahasiswa(Sivitas):
    ## private class
    __nim = ""
    __fakultas = ""

    #KONSTRUKTOR
    def __init__(self, nik="", nama="", gender="", asalUniv = "", email="", nim="", fakultas=""):
        super().__init__(nik, nama, gender, asalUniv, email)
        self.__nim = nim
        self.__fakultas = fakultas

    #GETTER SETTER NIM
    def get_nim(self):
        return self.__nim

    def set_nim(self, nim):
        self.__nim = nim

    #GETTER SETTER FAKULTAS
    def get_fakultas(self):
        return self.__fakultas

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas