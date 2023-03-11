//LIBRARY
#include "Header.hh"

//KONSTRUKTOR 
Prodi::Prodi()
{
    this->nama_prodi = "";
    this->kode = "";
}

Prodi::Prodi(string nama_prodi, string kode, Course course)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course.push_back(course);
}

//SETTER GETTER NAMA PRODI
string Prodi::get_namaProdi()
{
    return this->nama_prodi;
}

void Prodi::set_namaProdi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

//SETTER GETTER KODE MATA KULIAH
string Prodi::get_kode()
{
    return this->kode;
}

void Prodi::set_kode(string kode)
{
    this->kode = kode;
}

//SETTER GETTER COURSE
list<Course> Prodi::get_course()
{
    return this->course;
}

void Prodi::set_course(Course course)
{
    this->course.push_back(course);
}

//DESTRUKTOR
Prodi::~Prodi()
{

}