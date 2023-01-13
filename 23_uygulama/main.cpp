#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int SATIR =5;
const int SUTUN=5;
int main(int argc, char** argv) {
	int sayilar [SATIR][SUTUN];
	int sayilar2 [SATIR][SUTUN];
	int sayilar3 [SATIR][SUTUN];
	srand(time(NULL));
	for(int i=0;i<SATIR;i++){
		for (int j=0;j<SUTUN;j++)
			sayilar[i][j]=rand()%10+1;
	}
	for(int i=0;i<SATIR;i++){
		for(int j=0;j<SUTUN;j++)
			cout<<setw(5)<<sayilar[i][j];
		cout<<endl;
	}
	cout<<"*****************************"<<endl;	
	for(int i=0;i<SATIR;i++){
		for (int j=0;j<SUTUN;j++)
			sayilar2[i][j]=rand()%10+1;
	}
	for(int i=0;i<SATIR;i++){
		for(int j=0;j<SUTUN;j++)
			cout<<setw(5)<<sayilar2[i][j]; 
		cout<<endl;
	}
	cout<<"*****************************"<<endl;
	for(int i=0;i<SATIR;i++){
		for (int j=0;j<SUTUN;j++)
			sayilar3[i][j]=sayilar[i][j]+sayilar2[i][j];
	}
	for(int i=0;i<SATIR;i++){
		for(int j=0;j<SUTUN;j++)
			cout<<setw(5)<<sayilar3[i][j]; 
		cout<<endl;
	}
	return 0;
}
