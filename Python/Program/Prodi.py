#   Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
#   dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#   maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#DEKLARASI KELAS PRODI
class Prodi:
    __namaProdi = ""
    __kode = ""
    #COMPOSITE DARI KELAS COURSE
    __course = [] 

    #KONSTRUKTOR
    def __init__(self, namaProdi="",  kode="", course=[]):
        self.__namaProdi = namaProdi
        self.__kode = kode
        self.__course = []

    #GETTER DAN SETTER

    def get_namaProdi(self):
        return self.__namaProdi

    def set_namaProdi(self, namaProdi):
        self.__namaProdi = namaProdi

    def get_kode(self):
        return self.__kode

    def set_kode(self, kode):
        self.__kode = kode

    def get_course(self):
        return self.__course

    def set_course(self, course):
        self.__course.append(course)
