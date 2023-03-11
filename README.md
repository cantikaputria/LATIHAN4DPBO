# LATIHAN4DPBO
Repository untuk memenuhi Latihan Praktikum 4 Mata Kuliah Desain dan Pemrograman Berorientasi Objek

# Janji
Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
dalam Praktikum mata kuliah Desain dan Pemrograman Berorientasi Objek, untuk keberkahan-Nya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Desain Program
![DPBO-Page-4 drawio](https://user-images.githubusercontent.com/85111014/224393074-358dab55-d447-4fe0-913f-10929b053033.png)

Menggunakan 2 Bahasa Pemrograman:
1. PHP
2. Python

Program ini memiliki alur perjalanan mulai dari instansiasi objek dari kelas Mahasiswa dan Dosen, mwnginisiasi objek mata kuliah yang merupakan composite dari objek dosen, menginisiasi mahasiswa dengan mengcomposite objek mata kuliah pada prodi, dan memasukkan objek tersebut ke dalam list. Sehingga, menampilkan data beberapa objek di dalam list dengan menggunakan getter methods.

Terdapat 3 Kelas : Human, Sivitas Akademik, dan Mahasiswa
1. Kelas Human
   - Merupakan kelas induk (Super Class)
   - Merupakan Parent dari kelas Sivitas Akademik
   - Atribut : NIK, Nama, dan Jenis Kelamin
   - Method : Konstruktor, set dan get untuk setiap atribut
2. Kelas Sivitas Akademik
   - Merupakan Child dari Human (Derived Class 1)
   - Merupakan Parent dari Mahasiswa
   - Atribut : Asal Universitas dan Email Edu
   - Method : Konstruktor, set dan get untuk setiap atribut
3. Kelas Mahasiswa
   - Merupakan Child dari Sivitas Akademik (Derived Class 2)
   - Merupakan Grandchild dari Human
   - Atribut : NIM, Nama, Jenis Kelamin, Program Studi, dan Fakultas
   - Method : Konstruktor, set dan get untuk setiap atribut
 4. Kelas Dosen
      - Merupakan Child dari Sivitas Akademik (Derived Class 2)
      - Merupakan Grandchild dari Human
      - Atribut : NIP, Fakultas, Pendidikan Terakhir, dan Keahlian
      - Method : Konstruktor, set dan get untuk setiap atribut
 5. Kelas Course
      - Merupakan composite dari kelas dosen dan mahasiswa
      - Atribut : nama kuliah
      - Atribut objek : dosen dan list mahasiswa
      - Method : Konstruktor, set dan get untuk setiap atribut
  6. Kelas Prodi
     - Merupakan composite dari course
     - Atribut : nama prodi dan kode
     - Atribut 0bjek : list mata kuliah
     - Method : Konstruktor, set dan get untuk setiap atribut

# Alur Program
Program ini akan menginstansiasi objek mahasiswa dan dosen, kemudian instansiasi objek mata kuliah dengan mengcomposite objek dosen pengampu dan list mahasiswa yang mengontrak instansiasi objek prodi dengan mengcomposite objek matakuliah yang ada pada prodi
memasukan objek prodi ke list_prodi
menampilkan isi data objek prodi pada list_prodi

# Dokumentasi Program
Tampilan Data Mahasiswa
![image](https://user-images.githubusercontent.com/85111014/224466363-ee2cb259-84f3-4971-b8da-faba39321cf6.png)

Tampilan Data Dosen
![image](https://user-images.githubusercontent.com/85111014/224466375-3e8d9941-2898-48b1-b18b-1f1eb777c6e2.png)

Tampilan Data Mata Kuliah dan Program Studi
![image](https://user-images.githubusercontent.com/85111014/224466383-d569b0d6-f5d0-4d1b-a3ec-159c76688c09.png)





