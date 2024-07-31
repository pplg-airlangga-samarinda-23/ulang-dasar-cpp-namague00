#include <iostream>
using namespace std;

void cetakdata(string nama,string nisn,string jurusan,int tinggibadan){
    cout << "Nama : " << nama << endl;
    cout << "Nisn : " << nisn << endl;
    cout << "Jurusan : " << jurusan <<endl;
    cout << "Tinggi Badan : "<< tinggibadan;
}


int main() {
    string nama,nisn,jurusan;
    int tinggibadan;
    cout<<"masukkan nama: ";cin >> nama;
    cout <<"masukkan nisn: ";cin >> nisn;
    cout<<"masukkan jurusan: ";cin >> jurusan;
    cout <<"masukkan tinggi badan: ";cin >> tinggibadan;

    cetakdata(nama,nisn,jurusan,tinggibadan);
    return 0;
}