//LIBRARY
#include "Header.hh"

//KONSTRUKTOR
Dosen::Dosen() : Sivitas()
{
    this->nip = "";
    this->fakultas = "";
    this->pend_terakhir = "";
    this->skill = "";
}

Dosen::Dosen(string NIK, string nama, string gender, string asal_univ, string email, string nip, string fakultas, string pend_terakhir, string skill)
      : Sivitas(NIK, nama, gender, asal_univ, email)
{
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->skill = skill;
}

//SETTER DAN GETTER NIP
string Dosen::get_nip()
{
    return this->nip;
}
void Dosen::set_nip(string nip)
{
    this->nip = nip;
}

//SETTER GETTER FAKULTAS
string Dosen::get_fakultas()
{
    return this->fakultas;
}
void Dosen::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

//SETTER GETTER PENDIDIKAN TERAKHIR
string Dosen::get_pendTerakhir()
{
    return this->pend_terakhir;
}
void Dosen::set_pendTerakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

//SETTER GETTER KEAHLIAN
string Dosen::get_skill()
{
    return this->skill;
}
void Dosen::set_skill(string skill)
{
    this->skill = skill;
}

//DESTRUKTOR
Dosen::~Dosen()
{

}