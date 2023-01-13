#include <iostream>
#include <iomanip>
using namespace std;
// dizi icin const uzunluk
const int UZUNLUK = 3; 
// Ogrenci yapisi(no,ad,soyad,yas)
struct ogrenci{
	int no;
	string ad;
	string soyad;
	int yas;
};
int main(int argc, char** argv) {
	
	ogrenci liste[UZUNLUK] = {0,"","",0};
	int sayac = 0; 
	int sec = 0;
	int no =0;
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
            if(sayac<0 or sayac>=UZUNLUK ){
            	cout<<"kontenjan dolu"<<endl;
            	cin.ignore();
            	cin.get();
			}
			else{
				for(int i=0;i<UZUNLUK;i++){
	            	cout<<"ogrenci no :";
	            	cin>>liste[i].no;
	            	cin.ignore();
	            	cout<<"ogrenci adi :";
	            	getline(cin,liste[i].ad);
	            	cout<<"ogrenci soyadi :";
	            	getline(cin,liste[i].soyad);
	            	cout<<"ogrenci yasi :";
	            	cin>>liste[i].yas;
	            	sayac++;
				}
			}
            
            
            
            
			
			
        break;
        case 2:
        	cout<<setw(5)<<"No"<<setw(10)<<"Ad"
				<<setw(10)<<"Soyad"<<setw(10)<<"Yas"<<endl;
			for(int i=0;i<UZUNLUK;i++){
				cout<<setw(3)<<liste[i].no
					<<setw(10)<<liste[i].ad
					<<setw(10)<<liste[i].soyad
					<<setw(10)<<liste[i].yas<<endl;
			}
			
			cin.ignore();
			cin.get();
        break;
        case 3:
        	//Ogrenci Ara
        	cout<<"kimi aradiniz : ";
        	cin>>no;
        	for(int i=0;i<sayac;i++){
        		if(no == liste[i].no){
        			cout<<"var";
        			cin.ignore();
        			cin.get();
				}
				else{
					cout<<"yok";
        			cin.ignore();
        			cin.get();
				}
			}
			
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

