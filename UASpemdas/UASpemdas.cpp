/**
 * @file UASPemdas.cpp
 * @author Pradipa Yogananda
 * @brief UAS PEMDAS 24 June
 * @version 0.1
 * @date 2024-06-24
 *
 * @copyright Copyright (c) 2024
 *
 */
 /*! \mainpage Sistem Menghitung kelulusan
 *
 * \section intro_sec Pengantar
 * Selamat datang di Dokumentasi "Sistem kelulusan".
 * Sistem ini dirancang untuk melihat kelulusan
 *
 * \section structure_sec Struktur Code
 *
 * \section setup_sec Setup dan Konfigurasi
 * Untuk menjalankan dan mengubah code ini anda membutuhkan kompiler seperti Visual Studio.
 *
 * \section note_sec Catatan
 * Dokumentasi ini dihasilkan dengan Doxygen.
 */


#include<iostream>
using namespace std;

class MataKuliah {
private:
    float presensi, activity, exercise, tugasAkhir, NilaiAkhir;

public: MataKuliah() {
    presensi = 0.0;
}
      virtual void namaMataKuliah() {


          return;
      }
      void setPresensi(float nilai) {
          this->presensi = nilai;
      }
      float getPresensi() {
          return presensi;

      }
      virtual void inputNilai() {

          return;
      }
      void setNilai(float nilai2) {
          this->activity = nilai2;
      }
      float getActivity() {
          return activity;
      }
      void setExercise(float nilai3) {
          this->exercise = nilai3;
      }
      float getExercise() {
          return exercise;
      }
      void setTugasAkhir(float nilai4) {
          this->tugasAkhir = nilai4;
      }
      float getTugasAkhir() {
          return tugasAkhir;
      }
      virtual void hitungNilaiAkhir() {

          return;
      }
      void setNilaiAkhir(float nilai5) {
          this->NilaiAkhir = nilai5;
      }
      float getNilaiAkhir() {
          return NilaiAkhir;
      }

};

class Pemrograman : public MataKuliah {

public:
    float nilai, nilai2, nilai3, nilai4;

    void inputNilai() {
        cout << "Masuakan Nilai Presensi : ";
        cin >> nilai;
        cout << "Masukan nilai activity : ";
        cin >> nilai2;
        cout << "Masukan nilai exercise :";
        cin >> nilai3;
        cout << "Masukan nilai Tugas Akhir : ";
        cin >> nilai4;
    }
    void hitungNilaiAkhir() {
        return nilai + nilai2 + nilai3 + nilai4 / 2;
    }

    void display() {
        cout << "Nilai Presensi : " << nilai << endl;
        cout << "Nilai Activity : " << nilai2 << endl;
        cout << "Nilai Exercise : " << nilai3 << endl;
        cout << "Nilai Tugas Akhir : " << nilai4 << endl;
    }
};

class Jaringan : public MataKuliah {
public:
    float nilai, nilai2, nilai3;

    void inputNilai() {
        cout << "Masukan nilai activity : ";
        cin >> nilai;
        cout << "Masukan nilai exercise :";
        cin >> nilai2;

    }
    void hitungNilaiAkhir() {
        return; nilai + nilai2 / 2;
    }

    void display() {
        cout << "Nilai Activity : " << nilai << endl;
        cout << "Nilai Exercise : " << nilai2 << endl;
    }
};



int main() {
    char pilih;
    MataKuliah* mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;
    do {
        cout << "Pilih Mata Kuliah : " << endl;
        cout << "1. Pemrograman " << endl;
        cout << "2. Jaringan " << endl;
        cout << "3. Keluar " << endl;
        cout << "Pilih : ";
        cin >> pilih;

        switch (pilih) {
        case 1:
            pemrograman.inputNilai();
            break;
        case 2:
            jaringan.inputNilai();
            break;
        case 3:
            cout << "kelar tuh codingan...";
            break;
        default:
            cout << "Tidak ada opsi itu..";
        }

    } while (pilih != 4);

    return 0;
}