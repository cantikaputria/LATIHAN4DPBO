//LIBRAY
#include "Header.hh"

//KONSTRUKTOR
Sivitas::Sivitas() : Human()
{
    this->asal_univ = "";
    this->email = "";
}

Sivitas::Sivitas(string NIK, string nama, string gender, string asal_univ, string email)
        : Human(NIK, nama, gender)
{
    this->asal_univ = asal_univ;
    this->email = email;
}

//SETTER GETTER ASAL UNIV
string Sivitas::get_asalUniv()
{
    return this->asal_univ;
}
void Sivitas::set_asalUniv(string asal_univ)
{
    this->asal_univ = asal_univ;
}

//SETTER GETTER EMAIL EDY
string Sivitas::get_email()
{
    return this->email;
}
void Sivitas::set_email(string email)
{
    this->email = email;
}

//DESTRUKTOR
Sivitas::~Sivitas()
{

}