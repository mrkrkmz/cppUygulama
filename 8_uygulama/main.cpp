#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int burcunSayisi;
	cout<<"Hangi burcu görmek istiyorsunuz? ";
	cin>>burcunSayisi;
	
	switch(burcunSayisi){
		case 1:cout<<"Koc Burcu(Tarih)";break;
		case 2:cout<<"boga Burcu(Tarih)";break;
		case 3:cout<<"ikizler Burcu(Tarih)";break;
		case 4:cout<<"yengec Burcu(Tarih)";break;
		case 5:cout<<"aslan Burcu(Tarih)";break;
		case 6:cout<<"basak Burcu(Tarih)";break;
		case 7:cout<<"terazi Burcu(Tarih)";break;
		case 8:cout<<"akrep Burcu(Tarih)";break;
		case 9:cout<<"yay Burcu(Tarih)";break;
		case 10:cout<<"oglak Burcu(Tarih)";break;
		case 11:cout<<"kova Burcu(Tarih)";break;
		case 12:cout<<"balik Burcu(Tarih)";break;
		default:cout<<"Hayirdir Grall";break;
	}
	return 0;
}
