#include <iostream>
using namespace std;

int angka;
int pilihan;

bool isPrima(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    if (n < 2) return false;
    return true;
}

void tampilMenu() {
    cout << "\n--- MENU CEK BILANGAN ---" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}

void inputUser() {
    cout << "Masukkan angka yang mau dicek: ";
    cin >> angka;
}


int main() {
    while (true) {
        tampilMenu();
        cin >> pilihan;
        if (pilihan == 0) {
            cout << "Program selesai, terima kasih!" << endl;
            break;
        }
    }
    return 0;
}

int main() {
    return 0;
}