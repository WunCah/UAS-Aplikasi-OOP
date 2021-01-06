#include <iostream>
#include <cstdlib>
#include <ctime>

#define MINACAK 1
#define MAXACAK 20

using namespace std;

int main(){
	
	srand(time(NULL));
	int jawaban = (rand()%(MAXACAK-MINACAK+1)) + MINACAK;
	
	
	cout << "WELCOME TO GAME TEBAK ANGKA" << endl;
	cout << "==================================" << endl;
	
	cout << "Angka yang akan ditebak berada dalam batasan : " << MINACAK << " sampai" << MAXACAK << endl << endl;
	
	int kesempatan;
	int tebakan = kesempatan ;
	bool menang = false;
	int angka;
	do {
		cout << "Masukan tebakan anda: ";
		cin >> angka;
		tebakan--;
		
		if (angka==jawaban){
			menang = true;
			cout << " Benar! " << endl;
		} else{
			if (angka<jawaban){
				cout << "Tebakan anda mendekati" << endl;
			}
			cout << "Kesempatan tersisa : " << tebakan << endl;
		}
		cout << endl;
		
	} while ((tebakan>0) && (!menang));
	
	if (menang){
		cout << "Selamat, Anda telah memenangkan permainan ini!" << endl;
	} else {
		cout << "Sorry, Anda kurang beruntung!" << endl;
		cout << "Angka yang akan ditebak adalah " << jawaban << endl;
	}
	return 0;
}
