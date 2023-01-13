#include <iostream>
#include <iomanip>
using namespace std;
const int UZUNLUK = 5;
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
            if(sayac<0 || sayac+1>UZUNLUK){
            	cout<<"Kontenjan Dolu Maaaleseff!!"<<endl;
            	cin.ignore();
            	cin.get();
			}
			else{
				// Ogrenci Ara
				cout<<"Kimi aradiniz :";
				cin>>no;
				for(int i=0;i<sayac;i++){
					if(no==liste[i].no){
						cout<<liste[i].no
							<<" "<<liste[i].ad
							<<" "<<liste[i].soyad
							<<" "<<liste[i].yas<<endl;
						durum = true;
					}
				}
				if(durum == false){
					//Ogrenci Yoksa
					liste[sayac].no = no;
					cout<<"Ogrenci Ad";
					cin.ignore();
					getline(cin,liste[sayac].ad);
					cout<<"Ogrenci Soyad";
					getline(cin,liste[sayac].soyad);
					cout<<"Ogrenci Yas";
					cin>>liste[sayac].yas;
					cin.ignore();
					cout<<"Ekleme islemi tamamlandi.";
					cin.get();
					sayac++;	
				}
				else{
					//Ogrenci varsa
					cout<<"boyle bir ogrenci var!!"<<endl;
					durum = false;
					cin.ignore();
					cin.get();
				}
				
			}
        break;
        case 2:
        	//Ogrenci Listele
        	cout<<setw(5)<<"No"<<setw(10)<<"Ad"<<setw(10)<<"Soyad"<<setw(10)<<"Yas"<<endl;
        	for(int i=0;i<UZUNLUK;i++){
        		cout<<setw(4)<<liste[i].no<<setw(10)<<liste[i].ad<<setw(10)<<liste[i].soyad<<setw(10)<<liste[i].yas<<endl;
			}
			cin.ignore();
			cin.get();
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

