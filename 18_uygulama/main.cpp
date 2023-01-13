#include <iostream>
#include "emre.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//katSayi*(sayi1 + sayi2)
int main(int argc, char** argv) {
	
	int sonuc,sayi1,sayi2,katSayi;
	cout<<"sayi 1 gir : ";
	cin>>sayi1;
	cout<<"sayi 2 gir : ";
	cin>>sayi2;
	cout<<"kat sayi kac : ";
	cin>>katSayi;
	sonuc = carp(katSayi,topla(sayi1,sayi2));
	cout<<sonuc<<endl;
	return 0;
}








