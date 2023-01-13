#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct ogrenci{
	string ad;
	string soyad;
	int yas;
};
void ogrenciYazdir(ogrenci x);
ogrenci ogrenciBilgiAl();
int main(int argc, char** argv) {
	/*
	ogrenci o1;
	o1.ad="emre";
	o1.soyad="inanoglu";
	o1.yas=40;
	*/
	ogrenci o1 = {"emre","inanoglu",40};
	ogrenciYazdir(o1);
	ogrenciYazdir(ogrenciBilgiAl());
	
	return 0;
}
void ogrenciYazdir(ogrenci x){
	cout<<x.ad<<" "<<x.soyad<<" "<<x.yas<<endl;	
}
ogrenci ogrenciBilgiAl(){
	ogrenci c;
	cout<<"ogrencinin adi :";
	getline(cin,c.ad);
	cout<<"ogrencinin soyadi :";
	getline(cin,c.soyad);
	cout<<"ogrencinin yasi :";
	cin>>c.yas;
	return c;
}
