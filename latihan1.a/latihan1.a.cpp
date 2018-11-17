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
