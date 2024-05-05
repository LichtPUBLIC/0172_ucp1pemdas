// UCP 1 
// 1. contoh dari deklarasi variable adalah c++
//	  untuk contoh dari variable tersebut adalah : 
//	  - int adalah variable jumlah bertipe integer 
//    - char adalah variable huruf bertipe char
//    - float adalah variable berat bertipe float
// 
// 2. untuk di c++ kita bisa menggunakan conditional statement yaitu if dan else
//
// 3. implementasi dari struct. struct digunakan untuk membuat tipe data yang dapat mengelompokkan item data
//
// 4. fungsi ini mengembalikan nilai menggunakan pernyataan (return) dan prosedur dalam c++ adalah void yaitu tidak mengembalikan nilai
//
// 5. loopin ada beberapa jenis yaitu for, while dan do-while
//    - for digunakan untuk ketika kita sudah mengetahui berapa kali loop tersebut harus dijalankan
//    - while digunakan ketika kita tidak mengetahui berapa jumlah loop tersebut
//    - do-while mirip dengan while tetapi tetapi dijamin setidaknya menjalankannya 1 kali

#include <iostream>
using namespace std;

int main()
{
	int nilaiMatematika, nilaiBahasaInggris, nRerata;
	string status;
    string nama;

    cout << "Masukan Nama : ";
    cin >> nama;

	cout << "Masukan Nilai Matematika : ";
	cin >> nilaiMatematika;

	cout << "Masukkan Nilai Bahasa Inggris : ";
	cin >> nilaiBahasaInggris;

	nRerata = (nilaiMatematika + nilaiBahasaInggris) / 2;

    if ( nRerata > 70) {
        status = "Diterima";
    }
    else if (nilaiMatematika > 80) {
        status + "Diterima";
    }
    else {
        status = "Ditolak";
    }

        cout << "================" << endl;
        cout << "Hasil dan Status" << endl;
        cout << "================" << endl;


    cout << "Nama : " << nama << endl;
    cout << "Nilai MTK : " << nilaiMatematika << endl;
    cout << "Nilai Bahasa Inggris : " << nilaiBahasaInggris << endl;
    cout << "Rata-rata nilai : " << nRerata << endl;
    cout << "Statusnya adalah " << status << endl;

    return 0;


}

