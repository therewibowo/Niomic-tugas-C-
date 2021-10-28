#include <iostream>

using namespace std;

int main(){
    struct rumah{
        string tipe_rumah;
        int jumlah_kamar;
        float luas_rumah;
        float tinggi_rumah;
        string pemilik_rumah;
    };

    rumah pemilik1;

    cout<<"Inputkan Tipe Rumah : ";
    cin>>pemilik1.tipe_rumah;
    cout<<"Inputkan Jumlah Kamar : ";
    cin>>pemilik1.jumlah_kamar;
    cout<<"Inputkan Luas Kamar : ";
    cin>>pemilik1.luas_rumah;
    cout<<"Inputkan tinggi Rumah : ";
    cin>>pemilik1.tinggi_rumah;
    cout<<"Inputkan Pemilik Rumah : ";
    cin>>pemilik1.pemilik_rumah;
    

	rumah pemilik2;

    cout<<"Inputkan Tipe Rumah : ";
    cin>>pemilik2.tipe_rumah;
    cout<<"Inputkan Jumlah Kamar : ";
    cin>>pemilik2.jumlah_kamar;
    cout<<"Inputkan Luas Kamar : ";
    cin>>pemilik2.luas_rumah;
    cout<<"Inputkan tinggi Rumah : ";
    cin>>pemilik2.tinggi_rumah;
    cout<<"Inputkan Pemilik Rumah : ";
    cin>>pemilik2.pemilik_rumah;
    

}