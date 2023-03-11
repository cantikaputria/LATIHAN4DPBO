// #   Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
// #   dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
// #   maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin'

//LIBRARY
#include "Header.hh"

int main()
{
     //DATA MAHASISWA
     Mahasiswa mhs1 = Mahasiswa("321320678087", "Cantika Putri Arbiliansyah", "Perempuan", "Universitas Pendidikan Indonesia", "cantikaputria@upi.edu", "2103727", "FPMIPA");
     Mahasiswa mhs2 = Mahasiswa("321320678080", "Hestina Dwi Hartiwi", "Perempuan", "Universitas Pendidikan Indonesia", "hestinadwi@upi.edu", "2103729", "FPSRD");
     Mahasiswa mhs3 = Mahasiswa("321320678081", "Indah Resti Fauzi", "Perempuan", "Universitas Pendidikan Indonesia", "indahirf@upi.edu", "2103720", "FPTK");

     //DATA DOSEN
     Dosen dosen1 = Dosen("11111111111", "Dr. Rani Megasari, M.T", "Perempuan", "UPI", "megasari@upi.edu", "123", "FPMIPA", "S3", "Data Analysis");
     Dosen dosen2 = Dosen("11111111112", "Rosa Ariani Sukamto, M.T", "Perempuan", "UPI", "rosas@upi.edu", "123", "FPMIPA", "S3", "Pemrograman");
     Dosen dosen3 = Dosen("11111111113", "Yudi Ahmad Hambali, M.T", "Laki-laki", "UPI", "yudi@upi.edu", "123", "FPMIPA", "S3", "Sistem Operasi");

     //DATA MATA KULIAH
     Course logif = Course("Logika Informatika", dosen3, mhs1);
     logif.set_mahasiswa(mhs2);

     Course dpbo = Course("Desain Pemrograman Berorientasi Objek", dosen2, mhs3);
     dpbo.set_mahasiswa(mhs2);

     Course matdis = Course("Matematika Diskrit", dosen1, mhs2);
     matdis.set_mahasiswa(mhs3);

     //DEKLARASI OBJEK UNTUK LIST PRODI
     vector<Prodi> listProdi;

     //DATA PRODI
     Prodi ilkom = Prodi("Ilmu Komputer", "IK-UPI", logif);
     ilkom.set_course(matdis);
     ilkom.set_course(dpbo);

     //MEMASUKKAN DATA KE DALAM LIST
     listProdi.push_back(ilkom);

     //OUTPUT
     for (int i = 0; i < listProdi.size(); i++)
     {
          //DATA PROGRAM STUDI
          cout << ("+--------------------------------------------------+\n")
               << ("+                 DATA PROGRAM STUDI               +\n")
               << ("+--------------------------------------------------+\n") << endl;
          cout << i + 1 << ". Program Studi : " << listProdi[i].get_namaProdi()
               << "\n   Kode Jurusan : " << listProdi[i].get_kode() 
               << "\n   Data Matkul  : \n" << endl;

          //DATA MATA KULIAH
          list<Course> listCourse = listProdi[i].get_course();
          int j = 0;
          for (list<Course>::iterator matkul = (listCourse).begin(); matkul != (listCourse).end(); matkul++)
          {
               if (j > 0)
               {
                    cout << endl;
               }

               cout << "       " << j + 1 << ". " << matkul->get_matkul()
                    << "\n          Dosen Pengampu     : " << matkul->get_dosen().get_nama()
                    << "\n          NIK                : " << matkul->get_dosen().get_NIK()
                    << "\n          Jenis Kelamin      : " << matkul->get_dosen().get_gender()
                    << "\n          NIP                : " << matkul->get_dosen().get_nip()
                    << "\n          Universitas        : " << matkul->get_dosen().get_asalUniv()
                    << "\n          Email              : " << matkul->get_dosen().get_email()
                    << "\n          Fakultas           : " << matkul->get_dosen().get_fakultas()
                    << "\n          Pendidikan Terakhir: " << matkul->get_dosen().get_pendTerakhir()
                    << "\n          Keahlian           : " << matkul->get_dosen().get_skill()
                    << "\n          Data Mahasiswa     : \n" << endl;
               j++;

               //DATA MAHASISWA
               int k = 0;
               list<Mahasiswa> listMhs = matkul->get_mahasiswa();
               for (list<Mahasiswa>::iterator mhs = (listMhs).begin(); mhs != (listMhs).end(); mhs++)
               {
                    cout << "           " << k + 1 << ". " << mhs->get_nama()
                         << "\n              NIK                : " << mhs->get_NIK()
                         << "\n              Jenis Kelamin      : " << mhs->get_gender()
                         << "\n              NIM                : " << mhs->get_nim()
                         << "\n              Universitas        : " << mhs->get_asalUniv()
                         << "\n              Fakultas           : " << mhs->get_fakultas()
                         << "\n              Email              : " << mhs->get_email()
                         << "\n \n" << endl;
                    k++;
               }
          }
     }

     //KEMBALI KE 0
     return 0;
}
