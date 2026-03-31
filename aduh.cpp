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

bool isFibonacci(int n) {
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    int c = a + b;
    while (c <= n) {
        if (c == n) return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
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

void tampilkanHasilPrima(bool hasil) {
    if (hasil) cout << "=> " << angka << " adalah bilangan prima!" << endl;
    else cout << "=> " << angka << " bukan bilangan prima." << endl;
}


int main() {
    while (true) {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan) {
        case 1:
        case 1:
        inputUser();
        tampilkanHasilPrima(isPrima(angka));
        break;
            break;
        case 2:
            break;
    }
    }
    return 0;
}

int main() {
    return 0;
}