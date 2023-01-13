#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cocukSayisi,elmaSayisi;
	cout<<"***Kalan Elma Sayisini Hesaplayan Program***\n"
		<<"********************************************\n\n"
		<<"Cocuk Sayisini Giriniz\t\t:";
	cin>>cocukSayisi;
	cout<<"Elma Sayisini Giriniz\t\t:";
	cin>>elmaSayisi;
	cout<<"\n"
		<<"********************************************\n"
		<<"Kalan Elma Sayisi\t\t:"
		<<elmaSayisi%cocukSayisi
		<<endl
		<<"********************************************\n";
		
	return 0;
}
