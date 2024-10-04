
#include <iostream>
using namespace std;

int penjumlahan(int a, int b) {
    int operasi = a + b;
    return operasi;
}

int pengurangan(int a, int b) {
    int operasi = a - b;
    return operasi;
}

int perkalian(int a, int b) {
    int operasi = a * b;
    return operasi;
}

int pembagian(int a, int b) {
    int operasi = a / b;
    return operasi;
}

int sisaBagi(int a, int b) {
    int operasi = a % b;
    return operasi;
}

int main(){
    int pilih;
    char ulang;

    do {
       do {
        cout << "Ketik antara 1 sampai 6 untuk memilih salah satu opsi di bawah ini." << endl;
        cout << "1. Operasi Penjumlahan" << endl;
        cout << "2. Operasi Pengurangan" << endl;
        cout << "3. Operasi Perkalian" << endl;
        cout << "4. Operasi Pembagian" << endl;
        cout << "5. Operasi Sisa Bagi" << endl;
        cout << "6. Keluar dari program" << endl;
        cout << "Pilihan anda : ";
        cin >> pilih;

        if (pilih < 1 || pilih >= 7) {
            cout << "\nInput " << pilih << " tidak tersedia. Mohon input kembali\n" << endl;
        }
    } while (pilih < 1 || pilih >= 7);

        switch (pilih){
            case 1:
                cout << "Operasi Penjumlahan" << endl;

                int pertamaPenjumlahan, keduaPenjumlahan, hasilPenjumlahan;

                cout << "\nMasukkan angka pertama : ";
                cin >> pertamaPenjumlahan;

                cout << "Masukkan angka kedua : ";
                cin >> keduaPenjumlahan;

                hasilPenjumlahan = penjumlahan(pertamaPenjumlahan, keduaPenjumlahan);

                cout << endl;
                cout << "Hasil dari Penjumlahan untuk " << pertamaPenjumlahan << " dan " << keduaPenjumlahan << " adalah " << hasilPenjumlahan << endl;

                break;
            case 2:
                cout << "Operasi Pengurangan" << endl;

                int pertamaPengurangan, keduaPengurangan, hasilPengurangan;

                cout << "\nMasukkan angka pertama : ";
                cin >> pertamaPengurangan;

                cout << "Masukkan angka kedua : ";
                cin >> keduaPengurangan;

                hasilPengurangan = pengurangan(pertamaPengurangan, keduaPengurangan);

                cout << endl;
                cout << "Hasil dari Pengurangan untuk " << pertamaPengurangan << " dan " << keduaPengurangan << " adalah " << hasilPengurangan << endl;

                break;
            case 3:
                cout << "Operasi Perkalian" << endl;

                int pertamaPerkalian, keduaPerkalian, hasilPerkalian;

                cout << "\nMasukkan angka pertama : ";
                cin >> pertamaPerkalian;

                cout << "Masukkan angka kedua : ";
                cin >> keduaPerkalian;

                hasilPerkalian = perkalian(pertamaPerkalian, keduaPerkalian);

                cout << endl;
                cout << "Hasil dari Perkalian untuk " << pertamaPerkalian << " dan " << keduaPerkalian << " adalah " << hasilPerkalian << endl;

                break;
            case 4:
                cout << "Operasi Pembagian" << endl;

                int pertamaPembagian, keduaPembagian, hasilPembagian;

                cout << "\nMasukkan angka pertama : ";
                cin >> pertamaPerkalian;

                cout << "Masukkan angka kedua : ";
                cin >> keduaPembagian;

                hasilPembagian = pembagian(pertamaPerkalian, keduaPembagian);

                cout << endl;
                cout << "Hasil dari Pembagian untuk " << pertamaPerkalian << " dan " << keduaPembagian << " adalah " << hasilPembagian << endl;

                break;
            case 5:
                cout << "Operasi Sisa Bagi" << endl;

                int pertamaSisaBagi, keduaSisaBagi, hasilSisaBagi;

                cout << "\nMasukkan angka pertama : ";
                cin >> pertamaSisaBagi;

                cout << "Masukkan angka kedua : ";
                cin >> keduaSisaBagi;

                hasilSisaBagi = sisaBagi(pertamaSisaBagi, keduaSisaBagi);

                cout << endl;
                cout << "Hasil dari Sisa Bagi untuk " << pertamaSisaBagi << " dan " << keduaSisaBagi << " adalah " << hasilSisaBagi << endl;

                break;
            case 6:
                cout << "\nAnda keluar dari program" << endl;
                cout << "Terima kasih." << endl;
                return 0;
        }

        cout << "Apakah ingin mengulang kembali? (y/n) : ";
        cin >> ulang;
        cout << endl;

        while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N'){
            cout << "Input tidak valid" << endl;
            cout << "Mohon input kembali (y/n) : ";
            cin >> ulang;
            cout << endl;
        }
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih sudah menggunakan program ini." << endl;
    cout << "Tetap semangat." << endl;

    return 0;
}
