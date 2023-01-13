#include <iostream>
#include <iomanip>
using namespace std;
const int UZUNLUK = 10;
struct ogrenci{
	int no;
	string ad;
	string soyad;
	int yas;
};
int main(int argc, char** argv) {
	int sec = 0;
	int sayac = 0;
	int no;
	bool durum = false;
	ogrenci liste[UZUNLUK] = {0,"","",0};
    do{
    	system("CLS");
    	cout<<"1. Ogrenci Ekle"<<endl;
    	cout<<"2. Ogrenci Listele"<<endl;
    	cout<<"3. Ogrenci Ara"<<endl;
    	cout<<"4. Ogrenci Duzenle"<<endl;
    	cout<<"5. Ogrenci Sil"<<endl;
    	cout<<"6. Cikis"<<endl;
    	cout<<"Secim:";
    	cin>>sec;
        switch (sec){
        case 1:
            //Ogrenci Ekle
            if(sayac<0 || sayac>UZUNLUK){
            	cout<<"Hata!!"<<endl;
			}
			else{
				// Ogrenci Ara
				if(durum == false){
					//Ogrenci Yoksa
				}
				else{
					//Ogrenci varsa
				}
				
			}
        break;
        case 2:
        	//Ogrenci Listele
        break;
        case 3:
        	//Ogrenci Ara
        break;
        case 4:
        	//Ogrenci Duzenle
        break;
        case 5:
        	//Ogrenci Sil
        break;
        case 6:
        break;
        default:
            cout<<"Yanlis Tercih"<<endl;
            cin.ignore();
            cin.get();
        break;
        }
    }while(sec != 6);

	
	return 0;
}

