#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip.h>

  int main()
  {
    char hari;
    cout<<"pilihan: "<<endl;
    cout<<"a= senin   ";
    cout<<"c= rabu    ";
    cout<<"e= jumat   ";
    cout<<"g= ahad"<<endl;
    cout<<"b= selasa  ";
    cout<<"d= kamis   ";
    cout<<"f= sabtu   ";
    cout<<endl;
    cout<<endl;
    cout<<"masukan kode hari ( a- g ): ";
    cin>>hari;
    if (hari=='a' || hari=='a')
       cout<<" senin"<<endl;
     else
     if (hari=='b' || hari=='b')
     cout<<" selasa"<<endl;
     else
     if (hari=='c' || hari=='c')
      cout<<" rabo"<<endl;
     else
      if (hari=='d' || hari=='d')
       cout<<" kamis"<<endl;
      else
       if (hari=='e' || hari=='e')
        cout<<" jumat"<<endl;
       else
        if (hari=='f' || hari=='f')
         cout<<" sabtu"<<endl;
        else
         if (hari=='g' || hari=='g')
          cout<<" ahad"<<endl;
        else
        cout<<"MAAF KODE YANG ANDA MASUKAN SALAH";
        getch();
        }
