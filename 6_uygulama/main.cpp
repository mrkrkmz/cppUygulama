#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int sayi;
	cin>>sayi;
	
	if(sayi>0){
		cout<<"pozitif";
	}else{
		cout<<"negatif";
	}
	
	//**************************
	
	if(sayi>0)
		cout<<"pozitif";
	else
		cout<<"negatif";
	
	//***************************
	//(koþul)?evetse:hayýrsa
	sayi>0?cout<<"pozitif":cout<<"negatif";
	
	return 0;
}
