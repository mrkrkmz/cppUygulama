#include <iostream>
#include <iomanip>
using namespace std;
const int UZUNLUK = 4;
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
	int index =-1;
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
            if(index == -1){
            	if(sayac<0 || sayac+1>UZUNLUK){
	            	cout<<"Kontenjan Dolu!!"<<endl;
	            	cin.ignore();
	            	cin.get();
				}
				else{
					// Ogrenci Ara
					cout<<"Ogrenci No :";
					cin>>no;
					for(int i=0;i<sayac;i++){
						if(no==liste[i].no){
							cout<<liste[i].no<<" "<<liste[i].ad<<" "<<liste[i].soyad<<" "<<liste[i].yas<<endl;
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
			}
			else{
				cout<<"Ogrenci No";
				cin>>liste[index].no;
				cout<<"Ogrenci Ad";
				cin.ignore();
				getline(cin,liste[index].ad);
				cout<<"Ogrenci Soyad";
				getline(cin,liste[index].soyad);
				cout<<"Ogrenci Yas";
				cin>>liste[index].yas;
				cin.ignore();
				cout<<"Ekleme islemi tamamlandi.";
				cin.get();
				index=-1;	
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
			cout<<"Ogrenci No :";
			cin>>no;
			for(int i=0;i<sayac;i++){
				if(no==liste[i].no){
					cout<<liste[i].no<<" "<<liste[i].ad<<" "<<liste[i].soyad<<" "<<liste[i].yas<<endl;
					durum = true;
				}
			}
			if(durum == true){
				cout<<"Ogrenci budur "<<endl;
				durum = false;
			}
			else{
				cout<<"Ogrenci yok "<<endl;
			}
			cin.ignore();
			cin.get();
        break;
        case 4:
        	//Ogrenci Duzenle
			cout<<"Ogrenci No :";
			cin>>no;
			for(int i=0;i<sayac;i++){
				if(no==liste[i].no){
					cout<<liste[i].no<<" "<<liste[i].ad<<" "<<liste[i].soyad<<" "<<liste[i].yas<<endl;
					cout<<"Ogrenci Ad";
					cin.ignore();
					getline(cin,liste[i].ad);
					cout<<"Ogrenci Soyad";
					getline(cin,liste[i].soyad);
					cout<<"Ogrenci Yas";
					cin>>liste[i].yas;
					cin.ignore();
					cout<<"Duzenleme islemi tamamlandi.";
					cin.get();
				}
			}
        break;
        case 5:
        	//Ogrenci Sil
        	cout<<"Ogrenci No :";
			cin>>no;
			for(int i=0;i<sayac;i++){
				if(no==liste[i].no){
					cout<<liste[i].no<<" "<<liste[i].ad<<" "<<liste[i].soyad<<" "<<liste[i].yas<<endl;
					liste[i].no=0;
					liste[i].ad="";
					liste[i].soyad="";
					liste[i].yas=0;
					cin.ignore();
					cout<<"Silme islemi tamamlandi.";
					cin.get();
					index = i;
				}
			}
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

