#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int ay;
	cin>>ay;
	
	if(ay == 1){
		cout<<"ocak"<<endl;
	}
	else if(ay == 2){
		cout<<"þubat"<<endl;
	}
	else if(ay == 3){
		cout<<"mart"<<endl;
	}
	else if(ay == 4){
		cout<<"nisan"<<endl;
	}
	else if(ay == 5){
		cout<<"mayýs"<<endl;
	}
	else if(ay == 6){
		cout<<"haziran"<<endl;
	}
	else if(ay == 7){
		cout<<"temmuz"<<endl;
	}
	else{
		cout<<"hayirdir"<<endl;
	}
	cout<<"*****************************\n";
	switch(ay){
		case 1:cout<<"ocak";break;
		case 2:cout<<"þubat";break;
		case 3:cout<<"mart";break;
		case 4:cout<<"nisan";break;
		case 5:cout<<"mayýs";break;
		case 6:cout<<"haziran";break;
		case 7:cout<<"temmuz";break;
		default:cout<<"hayirdir";
	}
	return 0;
}
