//LIBRARY
#include "Header.hh"

//KONSTRUKTOR
Human::Human()
{
    this->NIK = "";
    this->nama = "";
    this->gender = "";
}

Human::Human(string NIK, string nama, string gender)
{
    this->NIK = NIK;
    this->nama = nama;
    this->gender = gender;
}

//SETTER GETTER NIK
string Human::get_NIK()
{
    return this->NIK;
}
void Human::set_NIK(string NIK)
{
    this->NIK = NIK;
}

//SETTER GETTER NAMA
string Human::get_nama()
{
    return this->nama;
}
void Human::set_nama(string nama)
{
    this->nama = nama;
}

//SETTER GETTER JENIS KELAMIN
string Human::get_gender()
{
    return this->gender;
}
void Human::set_gender(string gender)
{
    this->gender = gender;
}

//DESTRUKTOR
Human::~Human()
{

}