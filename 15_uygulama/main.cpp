#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//geri dönüþ deðeri olmayan ve parametresiz fonksiyon
void ucgenCiz();
void kareCiz();
int main(int argc, char** argv) {
	unsigned int sec=0;
	/*
	while(sec == 1 || sec == 2){
		cout<<"1. Ucgen cizimi icin \n";
		//ucgen yapan kodlar
		cout<<"2. Kara cizimi icin \n";
		//kare yapa kodlar
		cout<<"3. Cikmak icin \n";
		cin>>sec;
	}
	*/
	
	do{
		cout<<"1. Ucgen cizimi icin \n";
		cout<<"2. Kara cizimi icin \n";
		cout<<"3. Cikmak icin \n";
		cin>>sec;
		system("cls");
		if(sec == 1){
			ucgenCiz();
		}
		else if(sec == 2){
			kareCiz();
		}	
	}while(sec<3);
	

	
	return 0;
}
void ucgenCiz(){
	for(int a=1;a<=10;a++){
		for(int b=1;b<=10-a;b++){
			cout<<" ";
		}
		for(int c=1;c<a*2;c++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void kareCiz(){
	for(int x = 0; x <= 10; x++){
		for(int y = 0; y <= 10; y++){
			cout << "* " ;	
		}
		cout << endl;
	}
}

