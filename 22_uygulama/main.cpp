#include <iostream>
#include <cstdlib>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	srand(time(NULL));
	int dizi[10];
	//diziye eleman yükleniyor
	/*
	dizi[0] = rand()%11;
	dizi[1] = rand()%11;
	dizi[2] = rand()%11;
	dizi[3] = rand()%11;
	dizi[4] = rand()%11;
	dizi[5] = rand()%11;
	dizi[6] = rand()%11;
	dizi[7] = rand()%11;
	dizi[8] = rand()%11;
	dizi[9] = rand()%11;
	*/
	for(int i=0;i<10;i++)
		dizi[i] = rand()%11;
	//dizinin elemanlarý gösteriliyor
	/*
	cout<<dizi[0]<<endl;
	cout<<dizi[1]<<endl;
	cout<<dizi[2]<<endl;
	cout<<dizi[3]<<endl;
	cout<<dizi[4]<<endl;
	cout<<dizi[5]<<endl;
	cout<<dizi[6]<<endl;
	cout<<dizi[7]<<endl;
	cout<<dizi[8]<<endl;
	cout<<dizi[9]<<endl;
	*/
	for(int i=0;i<10;i++)
		cout<<dizi[i]<<endl;
	return 0;
}
