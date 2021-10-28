#include <iostream>

using namespace std;

int main(){
	int nilai;
	cout<<"Inputkan nilai x : " ;
	cin>>nilai;
	
	switch(nilai){
		case '10000' :
			cout<<"Tampilan output sepuluh ribu rupiah";
			break;
		case '20000 ' : 
		cout<<"Tampilan output dua puluh ribu rupiah";
		break;
		case '30000 ' :
		cout<<"Tampilan output tiga puluh ribu rupiah";
		break;
		case '40000 ' :
		cout<< "Tampilan output empat puluh ribu rupiah";
		case ' 50000' :
		cout<<"Tampilan output lima puluh ribu rupiah ";
		break;
		default :
		cout<<"Tampilan tidak terdafar di program";	
}

}