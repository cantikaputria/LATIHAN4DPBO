# LATIHAN4DPBO
Repository untuk memenuhi Latihan Praktikum 4 Mata Kuliah Desain dan Pemrograman Berorientasi Objek

# Janji
Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
dalam Praktikum mata kuliah Desain dan Pemrograman Berorientasi Objek, untuk keberkahan-Nya
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Desain Program
![DPBO-Page-4 drawio](https://user-images.githubusercontent.com/85111014/224393074-358dab55-d447-4fe0-913f-10929b053033.png)

Menggunakan 4 Bahasa Pemrograman:
1. Java
2. PHP
3. C++
4. Python

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

# Dokumentasi Program
Tampilan Data Mahasiswa
![Screenshot (131)](https://user-images.githubusercontent.com/85111014/224393281-04e24268-ca70-47d0-a48f-da03fe2b162a.png)
Tampilan Data Dosen
![Screenshot (132)](https://user-images.githubusercontent.com/85111014/224393322-132d73cd-2004-42ff-a4f3-34c03eb27834.png)
Tampilan Data Mata Kuliah dan Program Studi
![Screenshot (133)](https://user-images.githubusercontent.com/85111014/224393331-b557549b-f0b6-456c-95d9-9df60be437c6.png)




