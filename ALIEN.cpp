#include <iostream>

using namespace std;

int main() {
    char pesan[100];
    char pesan_sandi[100];

    cout << "Masukkan pesan (huruf kapital A-Z): ";
    cin >> pesan;

    pesan_sandi[0] = pesan[0];

    int length = 0;
    while (pesan[length] != '\0') {
        length++;
    }

    for (int i = 1; i < length; i++) {
        int nilai_geser = (pesan[i - 1] - 'A') + 1;

        int posisi_sekarang = (pesan[i] - 'A') + 1;

        int posisi_baru = posisi_sekarang + nilai_geser;

        if (posisi_baru > 26) {
            posisi_baru = posisi_baru - 26;
        }

        pesan_sandi[i] = (posisi_baru - 1) + 'A';
    }

    pesan_sandi[length] = '\0';

    cout << "Pesan rahasia: " << pesan_sandi << endl;

    return 0;
}