#include <iostream>

using namespace std;

void ubah_nilai(int *s){
	cout<<s;
	*s = 20;
}

int main(){
	int x,y,hasil;
	cout<<"Inputkan Nilai x : ";
	cin>>x;
	cout<<"Inputkan Nilai y : ";
	cin>>y;
	
//	ubah_nilai(&x);
	hasil = y*x;
	cout<<"Hasil : "<<hasil<<endl;
}