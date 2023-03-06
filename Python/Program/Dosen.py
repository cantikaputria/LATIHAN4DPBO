#   Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
#   dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#   maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#IMPORT FILE SIVITAS SEBAGAI PARENT
from Sivitas import Sivitas

#KELAS DOSEN ADALAH CHILD SIVITAS
class Dosen(Sivitas):
    #PRIVATE ATRIBUT
    __nip = ""
    __fakultas = ""
    __pendTerakhir = ""
    __skill = ""

    #KONSTRUKTOR
    def __init__ (self, nip="", nama="", gender="", fakultas="", pendTerakhir="", skill=""):
        super().__init__(nama=nama, gender=gender)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pendTerakhir = pendTerakhir
        self.__skill = skill

    #GETTER DAN SETTER NIP
    def get_nip(self):
        return self.__nip

    def set_nip(self, nip):
        self.__nip = nip

    #GETTER DAN SETTER FAKULTAS
    def get_fakultas(self):
        return self.__fakultas

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
    
    #GETTER DAN SETTER PENDIDIKAN TERAKHIR
    def get_pendTerakhir(self):
        return self.__pendTerakhir

    def set_pendTerakhir(self, pendTerakhir):
        self.__pendTerakhir = pendTerakhir

    #GETTER DAN SETTER SKILL
    def get_skill(self):
        return self.__skill

    def set_skill(self, skill):
        self.__skill = skill