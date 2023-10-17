#include <iostream>
using namespace std;
    int tanggalLahir, tanggalSekarang;
    int bulanLahir, bulanSekarang;
    int tahunLahir, tahunSekarang;
void WelcomeMessage(){
    cout<<"======== Selamat Datang di Program ========"<<endl;
    cout<<"-------- Cek Umurmu sekarang disini -------"<<endl;
    cout<<endl;
}
void InputDate(){
    cout<<"------ Data Tanggal Hari ini ------"<<endl;
    cout<<"Tanggal [1-30] ?    : "; cin>>tanggalSekarang;
    cout<<"Bulan   [1-12] ?    : "; cin>>bulanSekarang;
    cout<<"Tahun   [<= 2023] ? : "; cin>>tahunSekarang;
    if (tanggalSekarang > 0 && tanggalSekarang <= 30 && bulanSekarang > 0 && bulanSekarang <= 12){
        cout<<"Hari ini tanggal : "<<tanggalSekarang<<"-"<<bulanSekarang<<"-"<<tahunSekarang<<endl;
    } else{
        cout<<"Maaf tak ada tanggal seperti itu!"<<endl;
        cout<<"Mengulang kembali ....."<<endl;
        cout<<endl;
        InputDate();
    }
    cout<<endl;
}
void Output(){
    cout<<endl;
    cout<<"Menghitung Umurmu ...."<<endl;
    cout<<"Please wait...."<<endl;
    cout<<"Loading..."<<endl;
    cout<<"Selesai!"<<endl;
    cout<<endl;
    cout<<"----- Data Umurmu Sekarang ------"<<endl;
}
void ProcessAndOutput(){
    int umurPas = tahunSekarang - tahunLahir;
    int umurLebih = bulanSekarang - bulanLahir;
    int umurKurang = bulanLahir - bulanSekarang;
    int umurTanggalLebih = tanggalSekarang - tanggalLahir;
    int umurTanggalKurang = tanggalLahir - tanggalSekarang;
    // variabel array yang menyimpan data bulan
    int bulan[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int hari[] = {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20,
                  19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9,
                  8, 7, 6, 5, 4, 3, 2, 1};
    // kemungkinan tanggal sama di bulan yang sama dan bulan yang berbeda
    if (tanggalSekarang == tanggalLahir && bulanLahir == bulanSekarang){
        cout<<"Menghitung umurmu...."<<endl;
        cout<<"Please wait...."<<endl;
        cout<<"Loading..."<<endl;
        cout<<"Selesai!"<<endl;
        cout<<endl;
        cout<<"----- Data Umurmu Sekarang -----"<<endl;
        cout<<"--> "<<umurPas<<" tahun"<<endl;
    } else if (tanggalSekarang == tanggalLahir && bulanLahir < bulanSekarang){
              cout<<endl;
              cout<<"Menghitung umurmu ...."<<endl;
              cout<<"Please wait...."<<endl;
              cout<<"Loading..."<<endl;
              cout<<"Selesai!"<<endl;
              cout<<endl;
              cout<<"----- Data Umurmu Sekarang -----"<<endl;
              cout<<"--> "<<umurPas<<" tahun "<<umurLebih<<" bulan "<<endl;
    }
    if (tanggalLahir == tanggalSekarang && bulanLahir > bulanSekarang){
        for (int i = 0; i < 11; i++){
            if (umurKurang == bulan[i]){
               cout<<endl;
               cout<<"Menghitung umurmu ...."<<endl;
               cout<<"Please wait...."<<endl;
               cout<<"Loading..."<<endl;
               cout<<"Selesai!"<<endl;
               cout<<endl;
               cout<<"----- Data Umurmu Sekarang -----"<<endl;
               cout<<"--> "<<(umurPas - 1)<<" tahun "<<i<<" bulan"<<endl;
               break;
        }
    }
    }
    // kondisi ketika perbedaan tanggal lahir dengan tanggal sekarang
    if (tanggalLahir < tanggalSekarang && bulanLahir == bulanSekarang){
       cout<<endl;
       cout<<"Menghitung umurmu ...."<<endl;
       cout<<"Please wait...."<<endl;
       cout<<"Loading..."<<endl;
       cout<<"Selesai!"<<endl;
       cout<<endl;
       cout<<"----- Data Umurmu Sekarang -----"<<endl;
       cout<<"--> "<<umurPas<<" tahun "<<umurTanggalLebih<<" hari"<<endl;
    } else if (tanggalLahir > tanggalSekarang && bulanLahir == bulanSekarang){
             cout<<endl;
             cout<<"Menghitung umurmu ...."<<endl;
             cout<<"Please wait...."<<endl;
             cout<<"Loading..."<<endl;
             cout<<"Selesai!"<<endl;
             cout<<endl;
             cout<<"---- Data Umurmu Sekarang -----"<<endl;
             for (int j = 0; j < 30; j++){
                  if (umurTanggalKurang == hari[j]){
                      cout<<"--> "<<(umurPas - 1)<<" tahun "<<"11 bulan "<<j<<" hari"<<endl;
                   }
             }              
    } else if(tanggalLahir > tanggalSekarang && bulanLahir < bulanSekarang){
             cout<<endl;
             cout<<"Menghitung umurmu ...."<<endl;
             cout<<"Please wait...."<<endl;
             cout<<"Loading..."<<endl;
             cout<<"Selesai!"<<endl;
             cout<<endl;
             cout<<"---- Data Umurmu Sekarang -----"<<endl;
             for (int j = 0; j < 30; j++){
                if (umurTanggalKurang == hari[j]){
                    cout<<"--> "<<(umurPas)<<" tahun "<<umurLebih<<" bulan "<<j<<" hari"<<endl;
                }
             }
    }
    else if(tanggalLahir < tanggalSekarang && bulanLahir < bulanSekarang){
             cout<<endl;
             cout<<"Menghitung umurmu ...."<<endl;
             cout<<"Please wait...."<<endl;
             cout<<"Loading..."<<endl;
             cout<<"Selesai!"<<endl;
             cout<<endl;
             cout<<"----- Data Umurmu Sekarang -----"<<endl;
             cout<<"--> "<<umurPas<<" tahun "<<umurLebih<<" bulan "<<umurTanggalLebih<<" hari"<<endl;
    } else if(tanggalLahir > tanggalSekarang && bulanLahir > bulanSekarang){
             cout<<endl;
             cout<<"Menghitung umurmu ...."<<endl;
             cout<<"Please wait...."<<endl;
             cout<<"Loading..."<<endl;
             cout<<"Selesai!"<<endl;
             cout<<endl;
             cout<<"----- Data Umurmu Sekarang -----"<<endl;
            for (int i = 0; i < 11; i++){
                if (umurKurang == bulan[i]){
                    for (int j = 0; j < 30; j++){
                        if (umurTanggalKurang == hari[j]){
                           cout<<"--> "<<(umurPas - 1)<<" tahun "<<i<<" bulan "<<j<<" hari"<<endl;
                        }
                    }           
                }
            }
                    
             
    }
                

}
void InputBirth(){
    cout<<"------ Data Tanggal Lahir Anda ------"<<endl;
    cout<<"Tanggal : "; cin>>tanggalLahir;
    cout<<"Bulan   : "; cin>>bulanLahir;
    cout<<"Tahun   : "; cin>>tahunLahir;
    if (tanggalLahir > 0 && tanggalLahir <= 30 && bulanLahir > 0 && bulanLahir <= 12){
        cout<<"Tanggal Lahirmu : "<<tanggalLahir<<"-"<<bulanLahir<<"-"<<tahunLahir<<endl;
    } else{
        cout<<"Maaf tak ada tanggal seperti itu!"<<endl;
        cout<<"Mengulang kembali ....."<<endl;
        cout<<endl;
        InputBirth();
    }
}
void Menu(){
    int tanya;
    cout<<endl;
    cout<<"Masih ingin menghitung Umur?"; cin>>tanya;

}
int main (){
    WelcomeMessage();
    InputDate();
    InputBirth();
    ProcessAndOutput();

}