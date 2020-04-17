//Tuliskan program dan output program pointer ke fungsi dan berilah penjelasan
//Jawabannya:
#include <iostream>
using namespace std;

int buah(int *mangga){ //3. nilai variabel mangga akan dikirm ke variabel pointer mangga di fungsi buah
	int pisang = 3;
	pisang = *mangga + (*mangga * 3);//4. variabel pisang = nilai variabel pointer mangga yaitu 6 di jumlah dengan hasil dari isi variabel pointer mangga dikali 3
	return pisang;
}
int main (){
	int mangga= 6;//1. mendeklarasikan variabel int mangga bernilai 6
	cout<<"nilai dalam variabel manggis : "<<mangga<<endl;//2. maka output dri variabel mangga adalah 6
	cout<<"nilai dalam variabel pisang : "<< buah (&mangga); //5. sehingga nilai fungsi buah adalah 24 (6+(6x3))
	return 0;
}
