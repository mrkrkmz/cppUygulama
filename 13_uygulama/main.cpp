#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	int teklerinToplami=0;
	int ciftlerinToplami=0;
	int hepsininToplami=0;
	int kacaKadar;
	cout<<"Kaca kadar istiyorsunuz ";
	cin>>kacaKadar;
	/*Buraya for açýlmalý*/
	for(int i=0;i<=kacaKadar;i++){
		if(i%2 == 0){
			ciftlerinToplami += i;
			//ciftlerinToplami = ciftlerinToplami + i;
		}
		else{
			teklerinToplami += i;
		}
		hepsininToplami += i;
	}
	/**/
	
	cout<<"Teklerin toplami : "<<teklerinToplami<<endl;
	cout<<"Ciftlerin toplami : "<<ciftlerinToplami<<endl;
	cout<<"Hepsinin toplami : "<<hepsininToplami<<endl;
	
	return 0;
}
