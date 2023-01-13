#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	/*
	int index=0;
	while(index<10){
		cout<<index + 1<<".merhaba arkadaslar"<<endl;
		//index++;
		index = index + 1;
	}
	*/
	int index = 0;
	while(index<100){
		if(index!=99){
			if(index%2 == 1){
				cout<<index<<" : ";
			}
		}
		else{
			cout<<index;
		}
		index++;
	}
	for(int i=0;i<=2500;i++){
		cout<<i + 1<<".merhaba arkadaslar"<<endl;
	}
	for(;;){
		cout<<"merhaba"<<endl;
	}
	
	
	return 0;
}
