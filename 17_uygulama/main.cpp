#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//fonksiyon prototipi
void yildizCiz();
void yildizCiz(int adet,char karakter);
void yildizCiz(int adet);
int topla();
int topla(int c,int d);
int main(int argc, char** argv) {
	int kacAdetOlsun;
	char karakterNeOlsun;
	cout<<"bak cagiriyorum"<<endl;
	yildizCiz();
	yildizCiz(5,'/');
	yildizCiz(5);
	cout<<"gordunmu"<<endl;
	cout<<"kac adet olsun : ";
	cin>>kacAdetOlsun;
	cout<<"karakter ne olsun : ";
	cin>>karakterNeOlsun;
	yildizCiz(kacAdetOlsun,karakterNeOlsun);
	int sonuc;
	
	int bir,iki;
	cout<<"1. sayiyi gir :";
	cin>>bir;
	cout<<"2. sayiyi gir :";
	cin>>iki;
	cout<<topla(bir,iki)<<endl;
	cout<<topla(58,58);
	return 0;
}

//fonksiyon tamýmlama yeri
int topla(){
	int x,y;
	x=98;
	y=78;
	return x+y;
}
int topla(int c,int d){
	return c+d;
}
void yildizCiz(){
	for(int i=0;i<20;i++){
		cout<<"* ";
	}
	cout<<endl;
	yildizCiz(20,'_');
}
void yildizCiz(int adet,char karakter){
	for(int i=0;i<adet;i++){
		cout<<karakter<<" ";
	}
	cout<<endl;
}
void yildizCiz(int adet){
	for(int i=0;i<adet;i++){
		cout<<"? ";
	}
	cout<<endl;
}
