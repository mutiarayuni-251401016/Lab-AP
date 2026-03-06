#include <iostream>  
using namespace std;     
int main(){
    int gaji, pajak, bonus, total, gol, anak; // deklarasikan
    string nama;
    cout<<"Masukkan nama anda : ";
    cin>>nama; // jangan lupa cin untuk nerima inputan
    cout<<"Masukkan golongan gaji anda (1,2,3) : ";
    cin>>gol;
    
    // pake else if karena banyak kondisi
    if (gol == 1){ 
        gaji = 5000000;
    }
    else if (gol == 2){
        gaji = 3000000;
    }
    else if (gol == 3){
        gaji = 2500000;
    }
    else{
        cout<<"Anda salah menginput golongan";
    }

    cout<<"Masukkan jumlah anak anda : ";
    cin>>anak;
    
    // pake else if karena banyak kondisi juga
    if (anak == 1 || anak == 2) // pake or biar dia bisa pilih salah satu kondisi
        bonus = anak * 500000;        
    else if (anak > 2)
        bonus = 750000;
    else 
        bonus = 0;

    pajak = gaji * 0.05; //mau cari pajak

    total = gaji - pajak + bonus; //cari total keseluruhan

    cout<<"\nGaji total : Rp "<< total << endl; //kasi output hasilnya
} 