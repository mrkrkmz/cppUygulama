#include<iostream>
#include<ctime>
#include"fonksiyonlarim.h"

using namespace std;
int main()
{
    int sec=0;
    int satir = 0;
    do{
        sec = menu();
        switch (sec){
        case 1:
            satir = kacSatirOlsun();
            dortgenDizilimi(satir);
            bekle();
        break;
        case 2:
            satir = kacSatirOlsun();
            solaHizaliDizilim(satir);
            bekle();
        break;
        case 3:
            satir = kacSatirOlsun();
            terstenSolaHizaliDizilim(satir);
            bekle();
        break;
        case 4:
            satir = kacSatirOlsun();
            sagaHizaliDizilim(satir);
            bekle();
        break;
        case 5:
            satir = kacSatirOlsun();
            terstenSagaHizaliDizilim(satir);
            bekle();
        break;
        case 6:
            satir = kacSatirOlsun();
            sagaOkDizilim(satir);
            bekle();
        break;
        case 7:
            satir = kacSatirOlsun();
            solaOkDizilim(satir);
            bekle();
        break;
        case 8:
            satir = kacSatirOlsun();
            piramitDizilim(satir);
            bekle();
        break;
        case 9:
            satir = kacSatirOlsun();
            terstenPiramitDizilim(satir);
            bekle();
        break;
        case 10:
            satir = kacSatirOlsun();
            binomDizilim(satir);
            bekle();
        break;
        case 11:
        break;
        default:
            cout<<"Yanlis Tercih"<<endl;
            cin.ignore();
            cin.get();
        break;
        }
    }while(sec != 11);

    
	system("PAUSE");

	return 0;
}

