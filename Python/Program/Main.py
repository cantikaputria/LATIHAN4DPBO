#   Saya Cantika Putri Arbiliansyah dengan NIM 2103727 mengerjakan soal Latihan 4 
#   dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#   maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#Import File Class
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Prodi import Prodi
from Course import Course

## DEKLARASI LIST DATA Mhs
dataMhs = []

#ISI DATA MAHASISWA
dataMhs1 = Mahasiswa("321320678087", "Cantika Putri Arbiliansyah", "Perempuan",
                    "Universitas Pendidikan Indonesia", "cantikaputria@upi.edu",
                    "2103727", "FPMIPA")

dataMhs2 = Mahasiswa("321320678080", "Hestina Dwi Hartiwi", "Perempuan",
                    "Universitas Pendidikan Indonesia", "hestinadwi@upi.edu",
                    "2103729", "FPSRD")

dataMhs3 = Mahasiswa("321320678081", "Indah Resti Fauzi", "Perempuan",
                    "Universitas Pendidikan Indonesia", "indahirf@upi.edu",
                    "2103720", "FPTK")

#MASUKKAN KE LIST
dataMhs.append(dataMhs1)
dataMhs.append(dataMhs2)
dataMhs.append(dataMhs3)

#TAMPILKAN OUTPUT
print("+--------------------------------------------------+")
print("                    SELAMAT DATANG!                 ")
print("+--------------------------------------------------+")

i = 0
print("----------------------------------------------------")
print("                    DATA MAHASISWA                  ")
print("----------------------------------------------------")
for mhs in dataMhs:
    print("No               : ", str(i + 1))
    print("NIK              : ", mhs.get_nik())
    print("Nama             : ", mhs.get_nama())
    print("Jenis Kelamin    : ", mhs.get_gender())
    print("Asal Universitas : ", mhs.get_asalUniv())
    print("NIM              : ", mhs.get_nim())
    print("Email            : ", mhs.get_email())
    print("Fakultas         : ", mhs.get_fakultas())
    print("----------------------------------------------------")
    i += 1
print("+--------------------------------------------------+")

#LIST DATA DOSEN
dataDosen = []

#ISI DATA
dataDsn1 = Dosen("11111111111", "Dr. Rani Megasari, M.T", "Perempuan",
                "FPMIPA", "S3", "Data Analysis")

dataDsn2 = Dosen("11111111112", "Rosa Ariani Sukamto, M.T", "Perempuan",
                "FPMIPA", "S3", "Pemrograman")

dataDsn3 = Dosen("11111111113", "Yudi Ahmad Hambali, M.T", "Laki-laki",
                "FPMIPA", "S3", "Sistem Operasi")
#MASUKKAN KE LIST
dataDosen.append(dataDsn1)
dataDosen.append(dataDsn2)
dataDosen.append(dataDsn3)

#TAMPILKAN OUTPUT
print("----------------------------------------------------")
print("                      DATA DOSEN                    ")
print("----------------------------------------------------")
j = 0
for dsn in dataDosen:
    print("No               : ", str(j + 1))
    print("NIP              : ", dsn.get_nip())
    print("Nama             : ", dsn.get_nama())
    print("Jenis Kelamin    : ", dsn.get_gender())
    print("Fakultas         : ", dsn.get_fakultas())
    print("Pendidikan Akhir : ", dsn.get_pendTerakhir())
    print("Keahlian         : ", dsn.get_skill())
    print("----------------------------------------------------")
    j += 1
print("+--------------------------------------------------+")

# LIST DATA MATA KULIAH
dataMatkul = []

#ISI DATA
matkul1 = Course("Sistem Basis Data", dataDsn1, [dataMhs1, dataMhs2])
matkul2 = Course("Grafika Komputer dan Multimedia", dataDsn2, [dataMhs2, dataMhs3])
matkul3 = Course("Logika Informatika", dataDsn3, [dataMhs1, dataMhs3])
matkul4 = Course("Metodologi Penelitian", dataDsn1, [dataMhs2, dataMhs1])

#MASUKKAN KE LIST
dataMatkul.append(matkul1)
dataMatkul.append(matkul2)
dataMatkul.append(matkul3)
dataMatkul.append(matkul4)

#TAMPILKAN OUTPUT
print("----------------------------------------------------")
print("                DATA MATA KULIAH                    ")
print("----------------------------------------------------")
k = 0
for matkul in dataMatkul:
    print("No               : ", str(k + 1))
    print("Nama Mata Kuliah : ", matkul.get_namaMatkul())
    k += 1
    print("----------------------------------------------------")
print("+--------------------------------------------------+")

#LIST DATA PRODI
dataProdi = []

#ISI DATA
prodi1 = Prodi("Ilmu Komputer", "IK",[matkul1, matkul2])
prodi2 = Prodi("Pendidikan Ilmu Komputer", "PIK",[matkul3, matkul4])

#MASUKKAN KE LIST
dataProdi.append(prodi1)
dataProdi.append(prodi2)

#TAMPILKAN OUTPUT
print("----------------------------------------------------")
print("                DATA PROGRAM STUDI                  ")
print("----------------------------------------------------")
l = 0
for prodi in dataProdi:
    print("No               : ", str(l + 1))
    print("Program Studi    : ", prodi.get_namaProdi())
    print("Kode             : ", prodi.get_kode())
    l += 1
    print("----------------------------------------------------")
print("+--------------------------------------------------+")