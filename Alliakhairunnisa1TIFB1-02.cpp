#include <iostream>
#include <vector>

using namespace std;

struct Karyawan {
  string nama, alamat;
  int jmkrja, gjipkk, uanglmbr, uangmkn, uangjasa, ttlgji;
};

int main() {
  vector<Karyawan> daftarKaryawan;
  char pilihan;
  
  do {
    Karyawan karyawan;
    cout<<"\n=====[ Data Karyawan ]====="<<endl;
    cout<<"Nama Karyawan     : ";
    cin>>karyawan.nama;
    cout<<"Alamat            : ";
    cin>>karyawan.alamat;
    cout<<"Jumlah Jam Kerja  : ";
    cin>>karyawan.jmkrja;
    
    int jmkrjanrml=min(karyawan.jmkrja, 7);
    int jmlmbr= max(0, karyawan.jmkrja - 7);
    
    karyawan.gjipkk=jmkrjanrml*2000;
    karyawan.uanglmbr=jmlmbr*3000;
    karyawan.uangmkn=(karyawan.jmkrja>=10) ? 2500 : (karyawan.jmkrja>=8 ? 1500 : 0);
    karyawan.uangjasa=(karyawan.jmkrja>=9) ? 3000 : 0;
    karyawan.ttlgji=karyawan.gjipkk+karyawan.uanglmbr+karyawan.uangmkn+karyawan.uangjasa;
    
    daftarKaryawan.push_back(karyawan);
    
    cout<<"Lanjut (y) atau selesai (n)? ";
    cin>>pilihan;
  } while (pilihan == 'y' || pilihan == 'Y');
  
  cout<<"\n=====[ Daftar Karyawan ]=====\n";
  for(const auto& karyawan : daftarKaryawan) {
    cout<<"----------------------------------------------\n";
    cout<<"Nama Karyawan : "<<karyawan.nama<<endl;
    cout<<"Alamat        : "<<karyawan.alamat<<endl;
    cout<<"Jam Kerja     : "<<karyawan.jmkrja<<endl;
    cout<<"Gaji Pokok    : "<<karyawan.gjipkk<<endl;
    cout<<"Uang Lembur   : "<<karyawan.uanglmbr<<endl;
    cout<<"Uang Makan    : "<<karyawan.uangmkn<<endl;
    cout<<"Uang Jasa     : "<<karyawan.uangjasa<<endl;
    cout<<"Total Gaji    : "<<karyawan.ttlgji<<endl;
    cout<<"----------------------------------------------\n";
  }
  
  return 0;
}
