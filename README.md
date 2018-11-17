# Praktikum5

**NAMA 	: NUR ALI MUHAMMAD**

**KELAS	: TI.18.A.2**

**NIM	: 311810355**

## latihan1.cpp : Membuat Fungsi Sederhana.

**Alur Program :**

1. Mendeklarasikan **Fungsi** dengan `int sum(int,int b=10),int bagi(int a,int b),return a/b;` sebagai varible input .
2. Mendeklarasikan **Fungsi Utama** dengan `int a, b,int c = sum(a, 10)` sebagai variable input .
3. Memanggil fungsi dan mencetaknya dengan `int sum(int num1, int num2){`
					   `int num3 = num1+num2;`
					   `return num3;}`

**Code Program :**

```c++

#include<iostream>

using namespace std;

// deklarasi fungsi
int sum(int,int b=10);

int bagi(int a,int b) {
    return a/b;
}

// fungsi utama
int main(){

    //memanggil fungsi
    cout << sum(1,99) << endl;

    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;

    int c = sum(a, 10);
    cout << c << endl;

    cout << bagi(a,b) << endl;

    cout << sum (5);

    return 0;
}

/*Fungsi didefinisikan setelah fungsi utama.*/
int sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;
}

```

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum5/master/latihan1/SS.png)

## latihan1.a.cpp : Contoh Dari Membuat Fungsi Sederhana.

**Alur Program :**

1. Memulai program fungsi sederhana dengan menggunakan `void` .
2. Mendeklarasikan fungsi menggunakan `void` dengan nama fungsi yang ingin kita masukan `void ganjil_genap()` .
3. Masukan rumus yang ingin kita jadikan fungsi sederhana .
4. Panggil dan cetak fungsi yang sudah dibuat dengan nama fungsinya `void ganjil_genap()` .

**Code Program :**

```c++

	#include<iostream>
	using namespace std;

	void ganjil_genap(){

		int angka,hasil;

		cout << "Masukan Bilangan : ";
		cin >> angka;
		cout << endl;

		hasil=angka % 2;

		if(hasil == 0) {

			cout << angka << " Adalah Bilangan GENAP " << endl;


		}else{

			cout << angka << " Adalah Bilangan GANJIL " <<endl;

		}
	}
		int main(){
			ganjil_genap();

		return 0;

		}

```

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum5/master/latihan1.a/SS.png)


## latihan2.cpp : Mengembangkan Aplikasi Dengan Memubuat Fungsi Dari Hasil Praktikum Sebelumnya Menjadi Satu Aplikasi Dengan Menampilkan Menu Pilihan.

**Alur Program :**

1. Mulai program fungsi dengan menggunakan `void` .
2. Deklarasiakan praktikum yang ingin kita jadikan kumpulan fungsi pada nama fungsi setelah type data.
	contoh :`void terbesar();`
		`void mengurut();`
		`void ganjil_genap();`
		`void luas_segitiga();`
		`void tengah();`
		`void total_belanja();`
3. Gunakan rumus `do while` untuk mengulang **swicth** dan **case** untuk memilih program pada saat di jalankan .
4. Masukan program/data dari praktikum sebelumnya kedalam satu file fungsi.

**Code Program :**

```c++

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
 
```

**Hasilnya jika memilih 1 dan 2 :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum5/master/latihan2/SS1.png)

**Hasilnya jika memilih 3 dan 4 :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum5/master/latihan2/SS2.png)

**Hasilnya jika memilih 5 dan 6 :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum5/master/latihan2/SS3.png)

**Hasilnya jika memilih 0 :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum5/master/latihan2/SS4.png)


## latihan3.cpp : Mengembangkan Aplikasi Dengan Menggunakan File Header (Memisahkan Fungsi Kedalam File Terpisah).

**Alur Program :**

1. Membuat **file header** untuk program yang akan di jalankan.
2. Mulai program fungsi dengan menggunakan **header** yang telah dibuat untuk memanggil fungsinya.
3. Deklarasiakan fungsi yang terdapat dalam **file header** dengan memanggilnya menggunakan `void` .
4. Menginput rumus `do while` untuk mengulang. **swicth** dan **case** untuk memilih program pada saat di jalankan.

**Code Program Yang Memanggil Fungsi Dari File Header :**

```c++

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

```

## program.h (File Header)

**Code Program File Headernya :**

```c++

#ifndef PROGRAM_H_INCLUDED
#define PROGRAM_H_INCLUDED

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


#endif // PROGRAM_H_INCLUDED

```

**Hasilnya akan sama seperti latihan2**

**TERIMA KASIH** 
# Praktikum5# praktikum5
