#include<iostream>
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

void terbesar() {
        cout <<"Program Mencari Nilai Terbesar...!!!\n\n";
    int i=0;
    int max=0;
    int n,a;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++) {
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;
    }

    cout << "Bilangan terbesarnya adalah: " << max << endl;
}

void mengurut() {
    cout <<"Program Mengurut 3 Buah Bilangan...!!!\n\n";
    int A,B,C;

    cout << "Masukkan bilangan A: "; cin >> A;
    cout << "Masukkan bilangan B: "; cin >> B;
    cout << "Masukkan bilangan C: "; cin >> C;

    if (A<B) {
        if (B<C)
            cout << "Urutan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "Urutan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "Urutan bilangan: " << C << ", " << A << ", " << B << endl;
        }
    } else {
        if (A<C)
            cout << "Urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << "Urutan bilangan: "<< B << ", " << C << ", " << A << endl;
            else
                cout << "Urutan bilangan: "<< C << ", " << B << ", " << A << endl<<endl;
        }
    }

}

void total_belanja() {
    cout <<"Program Menghitung Total Belanja Dan Diskonnya...!!!\n\n";
{
int jumlah_beli=0,total_beli=0,i=0,x,y,a;
long int
harga=0,harga_barang=0,total=0,bayar=0,diskon;
cout<< "Jumlah Barang yang dibeli : ";
cin>>y; x=1;
cout<< "====================================================="<< endl;

 while(x<=y)
 {
     cout << "Barang ke - " << i+1 <<endl;
     cout<< "Banyaknya Barang : "; cin>>jumlah_beli;
     cout<< "Harga Barang : Rp."; cin>>harga;
     harga_barang = harga*jumlah_beli;
     total=total + harga_barang;
     total_beli += jumlah_beli;
     x++;
     i++;
 }
if(total>=1000000)
{

    diskon=total*10/100;
    cout<<endl<<"=====================================================" <<endl;
    cout<<"Selamat anda mendapatkan diskon 10%"<<endl;
}
else if (total>500000&&total<1000000)
{

    diskon=total*5/100;
    cout<<endl<<"=====================================================" <<endl;
    cout<<"Selamat anda mendapatkan diskon 5%"<<endl;
}else{
diskon=0;
}
    cout<< "=====================================================" <<endl<<endl;
    bayar=total-diskon;
    cout<< "Total Barang Yang Anda beli : "<<total_beli<<endl;
    cout<< "Total Harga Pembelian : Rp."<<total<<endl;
    cout<< "Mendapatkan Diskon Sebesar : Rp. "<<diskon<<endl;
    cout<< "TOTAL YANG HARUS DIBAYAR = Rp. "<<bayar<<endl<<endl;
    cout<< "===================-TERIMA KASIH-===================="<<endl;
}

}

void ganjil_genap() {
    cout <<"Program Menentukan Bilangan Ganjil Atau Genap...!!!\n\n";
{ int n;

do {
cout << "Masukkan Angka : ";
cin >> n;
cout << "=========================="<<endl;
if ( n % 2 == 0)
    cout << n << " adalah bilangan genap"<<endl;
else cout << n << " adalah bilangan ganjil"<<endl;
cout << "___________________________________________"<<endl;
cout << "     Masukkan Angka '0' Jika Selesai"<<endl;
cout << "==========================================="<<endl;
} while (n != 0);
}
}

void luas_segitiga() {
    cout <<"Program Menghitung Luas Segitiga...!!!\n\n";
int A, T; float L;

cout << "Alas Segitiga (A) : ";
cin >> A ;
cout << "Tinggi Segitiga (T) : ";
cin >> T ;
cout << "=================================="<< endl;
L = A * T / 2.0;
cout << "Luas Segitiga adalah = " << L << endl;
cout << "___________________________________"<< endl;
cout << "   ( Rumus Lengkapnya A*T/2.0 )"<< endl;

}

void tengah() {
    cout <<"Program Mencari Nilai Tengah Dari 3 Buah Bilangan...!!!\n\n";
int A,B,C;
    cout<<"Masukan Bilangan Ke-1 : ";
    cin>> A;
    cout<<"Masukan Bilangan Ke-2 : ";
    cin>> B;
    cout<<"Masukan Bilangan Ke-3 : ";
    cin>> C;

    if (A<B) {
        if (B<C)
            cout<< "Bilangan Tengahnya Adalah :" << B << endl;
    else
        if (A<C)
            cout<< "Bilangan Tengahnya Adalah :" << C << endl;
        else  cout<< "Bilangan Tengahnya Adalah :" << A << endl;
    }else{
    if (A<C)
        cout << "Bilangan Tengahnya Adalah : " << A << endl;
    else
        if (B<C)

        cout << "Bilangan Tengahnya Adalah : " << C << endl;
    else
         cout << "Bilangan Tengahnya Adalah : " << B << endl;
    }
}
