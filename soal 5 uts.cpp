
#include <iostream>
using namespace std;

double tinggi;
double berat;
double imt;

int main()
{
    cout << "Masukkan berat badan Anda (kg): ";
    // masukkan berat kg
    cin >> berat;

    // int tinggi_cm
    cout << "Masukkan tinggi badan Anda (cm): ";
    // masukkan tinggi_cm
    cin >> tinggi;

    tinggi = tinggi / 100.0;

    imt = berat / (tinggi * tinggi);

    cout << endl << "Indeks Masa Tubuh (IMT) Anda adalah: " << imt << endl;

    if (imt <= 18.4){
        cout << "Berat Badan Anda: Kurang (Underweight)." << endl;
    } else if (imt >= 18.5 && imt <= 24.9){
        cout << "Berat Badan Anda: Ideal." << endl;
    } else if (imt >= 25 && imt <= 29.9){
        cout << "Berat Badan Anda: Lebih (Overweight)." << endl;
    } else if (imt >= 30 && imt <= 39,9){
        cout << "Berat Badan Anda: Gemuk" << endl;
    } else {
        cout << "Berat Badan Anda: Sangat Gemuk." << endl;
    }

    /*int berat_ideal = 1
    switch (berat_ideal)
    {
        case 1:
            cout << endl << "Kategori berat badan sesuai dengan standar BMI yang telah ditetapkan." << endl;
            cout << "Kurang dari 19: Berat badan kurang (Underweight)" << endl;
            cout << "19 - 25: Berat badan normal" << endl;
            cout << "25 - 30: Berat badan berlebih (Overweight)" << endl;
            cout << "Di atas 30: Obesitas" << endl;
            break;

    } */

    cout << endl << "Kategori berat badan sesuai dengan standar IMT yang telah ditetapkan." << endl;
    cout << "  ===========================================" << endl;
    cout << "  |  Nilai IMT  |          Kriteria          |" << endl;
    cout << "  ===========================================" << endl;
    cout << "  |   < 18,4    |     Berat Badan Kurang     |" << endl;
    cout << "  --------------------------------------------" << endl;
    cout << "  | 18,5 - 24,9 |      Berat Badan Ideal     |" << endl;
    cout << "  --------------------------------------------" << endl;
    cout << "  |  25 - 29,9  |     Berat Badan Lebih      |" << endl;
    cout << "  --------------------------------------------" << endl;
    cout << "  |  30 - 39,9  |            Gemuk           |" << endl;
    cout << "  --------------------------------------------" << endl;
    cout << "  |    > 40     |         Sangat Gemuk       |" << endl;
    cout << "  ============================================" << endl;

    return 0;
}
