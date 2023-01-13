#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int sayi;
	cout<<"Lütfen nazikce bir sýcaklýk giriniz.. :";
	cin>>sayi;
	/*
	if(sayi<0){
		cout<<"Çok soðuk"<<endl;
	}
	else if(sayi<=15){
		cout<<"soðuk"<<endl;
	}
	else if(sayi<=25){
		cout<<"ilik"<<endl;
	}else if(sayi<=29){
		cout<<"sicak"<<endl;
	}else{
		cout<<"cok sicak"<<endl;
	}
	*/
	if(sayi<0){
		cout<<"Çok soðuk"<<endl;
	}
	else if(sayi<=0 && sayi<=15){
		cout<<"soðuk"<<endl;
	}
	else if(sayi<=16 && sayi<=25){
		cout<<"ilik"<<endl;
	}else if(sayi<=26 && sayi<=29){
		cout<<"sicak"<<endl;
	}else{
		cout<<"cok sicak"<<endl;
	}
	return 0;
}
