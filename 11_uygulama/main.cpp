#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	srand(time(NULL));
	int sayi = 100;
	int sonuc = 0;
	sonuc =rand()%sayi+1;
	cout<<sonuc<<endl;
	return 0;
}
