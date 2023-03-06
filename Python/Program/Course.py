#   Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
#   dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#   maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#IMPORT CLASS DOSN+EN
from Dosen import Dosen

#DEKLARASI KELAS
class Course:
    #PRIVATE ATRIBUT
    __namaMatkul = ""

    #COMPOSITE KELAS DOSEN DAN MAHASISWA
    __dosen = Dosen()

    #ARRAY OF OBJECT DARI MAHASISWA
    __mahasiswa = []

    #KONSTRUKTOR
    def __init__ (self, namaMatkul="", dosen=Dosen(), mahasiswa = []):
        self.__namaMatkul = namaMatkul
        self.__dosen = dosen
        self.__mahasiswa = mahasiswa

    #GETTER SETTER NAMA MANKUL
    def get_namaMatkul(self):
        return self.__namaMatkul

    def set_namaMatkul(self, namaMatkul):
        self.__namaMatkul = namaMatkul

    #GETTER SETTER DOSEN
    def get_dosen(self):
        return self.__dosen

    def set_dosen(self, dosen):
        self.__dosen = dosen

    #GETTER SETTER MAHASISWA
    def get_mahasiswa(self):
        return self.__mahasiswa

    def set_mahasiswa(self, mahasiswa):
        self.__mahasiswa.append(mahasiswa)
 