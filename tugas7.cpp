#include <iostream>
using namespace std;

int main(){
	int x,z;
	printf("Inputan nNilai x : ");
	cin>>x;
	
	printf("Inputan Nilai z : ");
	cin>>z;
	
	
	if(x % 2 ==0){
		cout<<x << "  genap dan"<<endl;
	} else{
		cout<<x<<"  ganjil dan"<<endl;
	}
	
	if(z % 2 ==0){
		cout<<z << "  genap"<<endl;
	} else{
		cout<<z<<"  ganjil"<<endl;
	}
	
	
	
	return 0;
}