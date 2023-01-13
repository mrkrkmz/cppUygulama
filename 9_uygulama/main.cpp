#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int dogumAyi,dogumGunu;
	cout<<"Burcunuzu ogrenmek icin dogum ayinizi yaziniz(1-12)";
	cin>>dogumAyi;
	cout<<"Burcunuzu ogrenmek icin dogum gununuzu yaziniz(1-31)";
	cin>>dogumGunu;
	if(dogumAyi<=12 && dogumAyi>0 || dogumGunu<=31 && dogumGunu>0){
		cout<<"Burcunuz birazadan hesaplaniyor.....";
		
	}
	else{
		cout<<"iyimisin ben iyiyim...";
	}
	
	
	return 0;
}
