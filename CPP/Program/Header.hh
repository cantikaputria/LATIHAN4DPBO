//LIBRARY
#include <bits/stdc++.h>

using namespace std;

//DEKLARASI KELAS HUMAN
class Human
{
    //RPIVATE ATRIBUT
    private:
        string NIK;
        string nama;
        string gender;

    public:
        //KONSTRUKTOR
        Human();
        Human(string NIK, string nama, string gender);

        //GETTER
        string get_NIK();
        string get_nama();
        string get_gender();

        //SETTER
        void set_NIK(string NIK);
        void set_nama(string nama);
        void set_gender(string gender);

        //DESTRUKTIR
        ~Human();
};

//DEKLARASI KELAS SIVITAS YANG MERUPAKAN CHILD HUMAN
class Sivitas : public Human
{
    //PRIVATE ATRIBUT
    private:
        string asal_univ;
        string email;

    public:
        //KOSNTRUKTOR
        Sivitas();
        Sivitas(string NIK, string nama, string gender, string asal_univ, string email);

        //GETTER
        string get_asalUniv();
        string get_email();

        //SETTER
        void set_asalUniv(string asal_univ);
        void set_email(string email);

        //DESTRUKTOR
        ~Sivitas();
};

//DEKLARASI KELAS MAHASISWA (CHILD SIVITAS)
class Mahasiswa : public Sivitas
{
    //PRIVATE ATRIBUT
    private:
        string nim;
        string fakultas;

    public:
        //KONSTRUKTOR
        Mahasiswa();
        Mahasiswa(string NIK, string nama, string gender, string asal_univ, string email, string nim, string fakultas);

        //GETTER
        string get_nim();
        string get_fakultas();

        //SETTER
        void set_fakultas(string fakultas);
        void set_nim(string nim);

        //DESTRUKTOR
        ~Mahasiswa();
};

//DEKLARASI KELAS DOSEN (CHILD SIVITAS)
class Dosen : public Sivitas
{
    //PRIVATE ATRIBUT
    private:
        string nip;
        string fakultas;
        string pend_terakhir;
        string skill;

    public:
        //KONSTRUKTOR
        Dosen();
        Dosen(string NIK, string nama, string gender, string asal_univ, string email, string nip, string fakultas, string pend_terakhir, string skill);

        //GETTER
        string get_nip();
        string get_fakultas();
        string get_pendTerakhir();
        string get_skill();

        //SETTER
        void set_nip(string nip);
        void set_fakultas(string fakultas);
        void set_pendTerakhir(string pend_terakhir);
        void set_skill(string skill);

        //DESTRUKTOR
        ~Dosen();
};

//DEKLARASI KELAS COURSE
class Course
{
    //PRIVATE ATRIVUT
    private:
        string matkul;
        Dosen dosen;
        list<Mahasiswa> mahasiswa;

    public:
        //KONSTRUKTOR
        Course();
        Course(string matkul, Dosen dosen, Mahasiswa mahasiswa);

        //SETTER
        string get_matkul();
        Dosen get_dosen();
        list<Mahasiswa> get_mahasiswa();
    
        //GETTER
        void set_matkul(string matkul);
        void set_dosen(Dosen dosen);
        void set_mahasiswa(Mahasiswa mahasiswa);

        //DESTRUKTOR
        ~Course();
};

//DEKLARASI KELAS PROGRAM STUDI
class Prodi
{
    //PRIVATE ATRIBUT
    private:
        string nama_prodi;
        string kode;
        list<Course> course;

    public:
        //KONSTRUKTOR
        Prodi();
        Prodi(string nama_prodi, string kode, Course course);

        //GETTER
        string get_namaProdi();
        string get_kode();
        list<Course> get_course();

        //SETTER
        void set_kode(string kode);
        void set_namaProdi(string nama_prodi);
        void set_course(Course course);

        //DESTRUKTOR
        ~Prodi();
};