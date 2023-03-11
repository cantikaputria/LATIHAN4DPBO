//LIBRARY
#include "Header.hh"

//KONSTRUKTOR
Mahasiswa::Mahasiswa() : Sivitas()
{
    this->nim = "";
    this->fakultas = "";
}

Mahasiswa::Mahasiswa(string NIK, string nama, string gender, string asal_univ, string email, string nim, string fakultas)
          : Sivitas(NIK, nama, gender, asal_univ, email)
{
    this->nim = nim;
    this->fakultas = fakultas;
}

//SETTER DAN GETTER NIM
string Mahasiswa::get_nim()
{
    return this->nim;
}
void Mahasiswa::set_nim(string nim)
{
    this->nim = nim;
}

//SETTER GETTER FAKULTAS
string Mahasiswa::get_fakultas()
{
    return this->fakultas;
}
void Mahasiswa::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

//DESTRUKTOR
Mahasiswa::~Mahasiswa()
{

}