//LIBRARY
#include "Header.hh"

//KONSTRUKTOR
Course::Course()
{
    this->matkul = "";
}

Course::Course(string matkul, Dosen dosen, Mahasiswa mahasiswa)
{
    this->matkul = matkul;
    this->dosen = dosen;                                
    this->mahasiswa.push_back(mahasiswa);
}

//SETTER GETTER MATKUL
string Course::get_matkul()
{
    return this->matkul;
}

void Course::set_matkul(string matkul)
{
    this->matkul = matkul;
}

//SETTER GETTER DOSEN
Dosen Course::get_dosen()
{
    return this->dosen;
}

void Course::set_dosen(Dosen dosen)
{
    this->dosen = dosen;
}

//SETTER GETTER MAHASISWA
list<Mahasiswa> Course::get_mahasiswa()
{
    return this->mahasiswa;
}

void Course::set_mahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa.push_back(mahasiswa);
}

//DESTRUKTOR
Course::~Course()
{

}