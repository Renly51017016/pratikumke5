#include <iostream.h>
#include <conio.h>

  main() {
  int bil;

  cout<<"masukan bilangan yang akan di cek = ";
  cin>>bil;

  if (bil > 0)
   cout<<bil<<"adalah bilangan poositif";
  else if (bil < 0)
   cout<<bil<<"adalah bilangan negatif";
  else
  cout<<"anda menginputkan bilangan nol (0)";
getch();}
