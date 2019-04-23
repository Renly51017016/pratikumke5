#include <iostream.h>
#include <conio.h>

  void main(){
   char kode;
   char nama[30], *bunga;
   double harga, bayar;
   int jumlah;
   harga = 0;
   clrscr();
   cout<<"     ALISIHIR FLORIST      \n";
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~\n";
   cout<<"nama pembeli     : "; cin>>nama;
   cout<<"\n";
   cout<<"input kode bunga : "; cin>>kode;
   cout<<"input jumlah beli: "; cin>>jumlah;
   clrscr();
   if (kode=='a') {
   harga = 100000;
   bunga = "mawar";
   }
   else if(kode=='c'){
   bunga = "melati";
   harga = 2000000;
   }
   else if(kode=='c'){
   bunga = "angrek";
   harga = 3000000;
   }
   else if(kode=='d'){
   bunga = "nusah indah";
   harga = 4000000;
   }
   else{
    cout<<"tidak ada kode yang sesuai";
    }
    cout<<"    STRUK PEMBAYARAAN    \n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"nama pembeli      : "<<nama<<"\n";
    cout<<"jenis bunga       : "<<bunga<<"\n";
    cout<<"harga persatuan  : "<<harga<<"\n";
    cout<<"jumlah beli      : "<<jumlah<<"\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\ttotal harga    : Rp. "<<harga * jumlah<<"\n";
    cout<<"\tuang bayar     : Rp. "; cin>>bayar;
    cout<<"\tuang kembali   : Rp. "<<bayar - (harga * jumlah)<<"\n\n";
    getch();
    }
