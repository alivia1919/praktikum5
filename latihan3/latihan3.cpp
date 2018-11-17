#include<iostream>
#include<program.h>
using namespace std;

void terbesar();
void mengurut();
void ganjil_genap();
void luas_segitiga();
void tengah();
void total_belanja();


int main() {

    int a;

    do {

        //system("clear");
        cout <<"====================================================\n";
        cout <<"|                MENU PROGRAM PILIHAN               |\n";
        cout <<"====================================================\n"<<endl;
        cout <<"1. Mencari Nilai Terbesar Dalam Beberapa Data Nilai\n";
        cout <<"2. Mencari Nilai Tengah Dalam 3 Buah Bilangan\n";
        cout <<"3. Mengurutkan 3 Buah Bilangan\n";
        cout <<"4. Menentukan Bilangan Ganjil Atau Genap\n";
        cout <<"5. Menghitung Luas Segitiga\n";
        cout <<"6. Menghitung Total Belanja Dan Diskonnya\n";
        cout <<"0. KELUAR\n";
        cout <<"====================================================\n"<<endl;
        cout <<"Masukkan Program Yang Anda Pilih : ";
        cin >> a;
        cout <<"====================================================\n"<<endl;

        switch(a) {
        case 1 :
            terbesar();
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        break;
        case 2 :
            tengah();
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        break;
        case 3 :
            mengurut();
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        break;
        case 4 :
            ganjil_genap();
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        break;
        case 5 :
            luas_segitiga();
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        break;
        case 6 :
            total_belanja();
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        break;
        }
    } while (a != 0);
            cout <<"~~~~~~~~~~~~~~~~~ TERIMA KASIH ~~~~~~~~~~~~~~~~~\n"<<endl;
}
