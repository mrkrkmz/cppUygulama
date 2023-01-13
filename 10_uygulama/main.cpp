#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string isim = "";
	string adres = "";
	int no= 0;
	cout<<"Ogrenci isim : ";
	//cin>>isim;
	getline(cin,isim);
	cout<<"Ogrenci No : ";
	cin>>no;
	cin.ignore();
	cout<<"Ogrenci Adres : ";
	//cin>>adres;
	getline(cin,adres);
	cout<<"Isim: "<<isim<<" No: "<<no<<" Adres: "<<adres<<endl;
	return 0;
}
