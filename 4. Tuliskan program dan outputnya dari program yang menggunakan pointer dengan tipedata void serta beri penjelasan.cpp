//Tuliskan program dan outputnya dari program yang menggunakan pointer dengan tipedata void serta beri penjelasan
//Jawabannya:
#include <iostream>
using namespace std;

int main (){
	void* pisang; //deklarasi pointer bertipe data void
	int mangga = 6; // deklarasi pointer bertipe data integer
	pisang = &mangga;// variabel pisang adalah tipe data void dimana void dapat menyimpan ALAMAT MEMORI (bukan nilai) dari tipe data apapun, disini  nilai variabel pisang sama dengan alamat memori variabel mangga yang bertipe data integer
	cout<<"alamat variabel mangga (&mangga) yaitu "<<&mangga<<endl;
	cout<<"nilai dari  variabel mangga yaitu "<<mangga<<endl;
	cout<<"nilai dari variabel pisang yaitu "<<pisang<<endl;// sama dengan alamat variabel mangga (berupa alamat)
	
	return 0;
}

