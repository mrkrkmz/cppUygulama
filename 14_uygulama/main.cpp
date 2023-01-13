#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int satirSayisi;
	char karakter;
	cout<<"Satir sayisini giriniz : ";
	cin>>satirSayisi;
	cout<<"Karakteri giriniz : ";
	cin>>karakter;
	
	/*
	for döngüsünü hazýrlayýnýz
	*/
	for(int i=0;i<satirSayisi;i++){
		for(int j=0;j<satirSayisi;j++){
			cout<<karakter<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
