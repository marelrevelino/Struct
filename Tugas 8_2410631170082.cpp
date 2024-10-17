#include <iostream>
#include <string>

using namespace std;

struct Zodiak {
    int tanggal_awal;
    int bulan_awal;
    int tanggal_akhir;
    int bulan_akhir;
    string nama;
};

int main() {
    int tanggal, bulan, tahun;

    Zodiak zodiak[] = {
        {20, 1, 18, 2, "AQUARIUS"},
        {19, 2, 20, 3, "PISCES"},
        {21, 3, 19, 4, "ARIES"},
        {20, 4, 20, 5, "TAURUS"},
        {21, 5, 20, 6, "GEMINI"},
        {21, 6, 22, 7, "CANCER"},
        {23, 7, 22, 8, "LEO"},
        {23, 8, 22, 9, "VIRGO"},
        {23, 9, 22, 10, "LIBRA"},
        {23, 10, 21, 11, "SCORPIO"},
        {22, 11, 21, 12, "SAGITTARIUS"},
        {22, 12, 19, 1, "CAPRICORN"}
    };

    cout << "Masukan tanggal lahir Anda [tgl-bln-tahun]: " << endl;
    cin >> tanggal >> bulan >> tahun;


    string nama_zodiak = "";

    for (const auto& z : zodiak) {
        if (
            (bulan == z.bulan_awal && tanggal >= z.tanggal_awal) ||
            (bulan == z.bulan_akhir && tanggal <= z.tanggal_akhir) ||
             (bulan > z.bulan_awal && bulan < z.bulan_akhir)
        ) {
            nama_zodiak = z.nama;
            break;
        }
     }

    if (nama_zodiak != "") {
        cout << "\n\n";
        cout << "--------------------" << endl;
        cout << "Tanggal lahir Anda [tgl-bln-tahun]: " << tanggal << "-" << bulan << "-" << tahun << endl;
        cout << "Zodiak Anda adalah: " << nama_zodiak << endl;
    } else {
        cout << "Tanggal lahir tidak valid." << endl;
    }


    return 0;
}
