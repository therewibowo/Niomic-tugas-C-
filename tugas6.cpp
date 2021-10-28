#include <iostream>

using namespace std;

int main(){
	int x =10, z= 15;
	int hasil;
		cout<< "Masukan Nilai X : " ;
		cin>>x;
		cout<< " Masukan nilai z : ";
		cin>>z;
 	if(x>z){
		hasil = x+z;
		cout<<"Hasil : " <<z;
	}else{
		hasil = x-z;
		cout<< "hasil : "<<hasil;
	}
}