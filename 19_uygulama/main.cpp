#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float ortalamaAl(int sayi);
int main(int argc, char** argv) {
	unsigned sayi;
	float ortalama;
	cout<<"Sayi.........:";
	cin>>sayi;
	while(sayi!=0){
		cout<<"Ortalama "<<ortalamaAl(sayi)<<endl;
		cout<<"Sayi.........:";
		cin>>sayi;
	}
	return 0;
}
float ortalamaAl(int sayi){
	static float toplam = 0;
	static int say = 0;
	say++;
	toplam += sayi;
	return toplam/say;
}
