#include <iostream>

using namespace std;

int main() 
{
    int N, K;
    cout << "Masukkan jumlah astronot (N): ";
    cin >> N;
    cout << "Masukkan nilai K awal: ";
    cin >> K;

    int astronot[100];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int current_N = N;
    int current_index = 0; 

    while (current_N > 1) {
        int target_index = (current_index + K - 1) % current_N;
        int eliminated_id = astronot[target_index];

        if (eliminated_id % 2 == 0) {
            K = K + 2; 
        } else {
            K = K - 1; 
        }

        if (K < 2) {
            K = 2;
        }

        for (int j = target_index; j < current_N - 1; j++) {
            astronot[j] = astronot[j + 1];
        }

        current_N--; 

        if (current_N > 0) {
            current_index = target_index % current_N;
        }
    }

    cout << "Astronot terakhir yang tersisa: " << astronot[0] << endl;

    return 0;
}