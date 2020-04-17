//Buat program sederhana yang menggunakan variabel pointer to pointer dan berilah penjelasan
//Jawabannya:
#include<iostream>
using namespace std;
int main(){
    int mangga,*pisang,**apel; //deklarasi variabel pointer, dan variabel pointer to pointer
    mangga = 4; //nilai dari variabel mangga yaitu 4
    pisang = &mangga; //nilai variabel pisang sama dengan nilai yang ada di alamat memori variabel mangga
    apel = &pisang; //nilai variabel apel sama dengan nilai yang ada di alamat pisang
    cout<<"nilai dari variabel pisang = "<<*pisang<<endl;
    cout<<"nilai dari variabel apel = "<<**apel;
}

