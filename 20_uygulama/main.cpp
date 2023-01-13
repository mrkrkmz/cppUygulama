#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int sayi;
	int sayilar[5] = {58,23,32,42,54};
	sayi = 5;
	/*
	sayilar[0] =58;
	sayilar[1] =23;
	sayilar[2] =32;
	sayilar[3] =58;
	sayilar[4] =54;
	*/
	
	for(int i=0;i<5;i++){
		cout<<"sayi :";
		cin>>sayilar[i];
	}
	
	cout<<"Diziler"<<endl;
	cout<<"*************************"<<endl;
	cout<<sayi<<endl;
	/*
	cout<<sayilar[0]<<endl;
	cout<<sayilar[1]<<endl;
	cout<<sayilar[2]<<endl;
	cout<<sayilar[3]<<endl;
	cout<<sayilar[4]<<endl;
	*/
	for(int i=0;i<5;i++)
		cout<<sayilar[i]<<endl;
	
	return 0;
}
