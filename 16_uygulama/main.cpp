#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//geri dönüþ deðeri olmayan ve parametresiz fonksiyon

void isimYaz();
void soyIsimYaz();
void yasYaz();
void medeniYaz();
void memleketYaz();

int main(int argc, char** argv) {
	unsigned int sec=0;
	cout<<"1. isim yaz  \n";
	cout<<"2. soyisim yaz \n";
	cout<<"3. yas yaz \n";
	cout<<"4. medeni hal yaz \n";
	cout<<"5. memleket yaz \n";
	cout<<"6. Cikmak icin \n";
	do{
		cin>>sec;
		//system("cls");
		if(sec == 1){
			isimYaz();
		}
		else if(sec == 2){
			soyIsimYaz();
		}
		else if(sec == 3){
			yasYaz();
		}
		else if(sec == 4){
			medeniYaz();
		}
		else if(sec == 5){
			memleketYaz();
		}	
	}while(sec<6);
	

	
	return 0;
	
}

void isimYaz(){
	cout<<"emre\n";
}
void soyIsimYaz(){
	cout<<"inanoglu\n";
}
void yasYaz(){
	cout<<"40\n";
}
void medeniYaz(){
	cout<<"evli\n";
}
void memleketYaz(){
	cout<<"sivas58\n";
}

