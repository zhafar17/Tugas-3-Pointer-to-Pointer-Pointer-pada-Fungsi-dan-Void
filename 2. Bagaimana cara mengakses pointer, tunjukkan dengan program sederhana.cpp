//Bagaimana cara mengakses pointer? tunjukkan dengan program sederhana!
//Jawabannya:
#include<iostream>
using namespace std;
int main(){
    int mangga,*pisang,**apel; //membuat variabel pointer to pointer dengan menambah operator "*" sebanyak 2 kali sebelum nama variabel
    mangga = 4; 
    pisang = &mangga; 
    apel = &pisang; 
    cout<<"nilai dari variabel pisang = "<<*pisang<<endl;
    cout<<"nilai dari variabel apel = "<<**apel; //ketika ingin menampilkan nilai dari variabel pointer to pointer maka kita harus menambah operator "*" sebanyak 2 kali sebelum nama variabel
}

