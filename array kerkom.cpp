#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*di bawah merupakan fungsi untuk mengubah huruf kapital menjadi huruf kecil
hal ini untuk mengantisipasi jika user menginputkan huruf kapital*/
void convert( string& s ) {
	for( int x = 0; x < s.length(); x++ ) {
		s[x] = tolower(s[x]);
	}
}
/*di atas merupakan fungsi untuk mengubah huruf kapital menjadi huruf kecil
hal ini untuk mengantisipasi jika user menginputkan huruf kapital*/

int main() {
	int skor = 0;
	string asean[10] = {
		"indonesia",//0
		"malaysia",//1
		"singapura",//2
		"brunei darussalam",//3
		"myanmar",//4
		"thailand",//5
		"laos",//6
		"kamboja",//7
		"filipina",//8
		"vietnam"//9
	};
	
	cout<<"Negara negara ASEAN:\n";
	cout<<"\n";
	for( int i = 0; i < 10; i++ ) {
		cout<<asean[i]<<endl;
	}
	
	cout<<"\n";
	
	string nomor1;
	cout<<"Negara di atas yang tidak memiliki laut adalah?: ";
	getline( cin, nomor1 );//meminta jawaban user
	convert(nomor1);//menjalankan fungsi convert untuk mengubah semua string menjadi huruf kecil
	if( nomor1 == asean[6] ) {
		skor++;
		cout<<"Jawaban benar!, skor anda = "<< skor<<endl;
	} else {
		cout<<"Jawaban salah :(, skor anda = "<< skor<<endl;
	}
	
	cout<<"\n";
	
	string nomor2;
	cout<<"Satu satunya negara ASEAN yang tidak pernah dijajah adalah?: ";
	getline( cin, nomor2 );//meminta jawaban user
	convert(nomor2);//menjalankan fungsi convert untuk mengubah semua string menjadi huruf kecil
	if( nomor2 == asean[5] ) {
		skor++;
		cout<<"Jawaban benar!, skor anda = "<< skor<<endl;
	} else {
		cout<<"Jawaban salah :(, skor anda = "<< skor<<endl;
	}
	
	cout<<"\n";
	
	string nomor3;
	cout<<"Negara ASEAN yang memiliki objek wisata Angkor Wat adalah?: ";
	getline( cin, nomor3 ); //meminta jawaban user
	convert(nomor3); //menjalankan fungsi convert untuk mengubah semua string menjadi huruf kecil
	if( nomor3 == asean[7] ) {
		skor++;
		cout<<"Jawaban benar!, skor anda = "<< skor<<endl;
	} else {
		cout<<"Jawaban salah :(, skor anda = "<< skor<<endl;
	}
}
