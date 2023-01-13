#include<iostream>
#include<ctime>

using namespace std;
int menu();
int kacSatirOlsun();
void bekle();
void dortgenDizilimi(int satir);
void solaHizaliDizilim(int satir);
void terstenSolaHizaliDizilim(int satir);
void sagaHizaliDizilim(int satir);
void terstenSagaHizaliDizilim(int satir);
void sagaOkDizilim(int satir);
void solaOkDizilim(int satir);
void piramitDizilim(int satir);
void terstenPiramitDizilim(int satir);
void binomDizilim(int satir);
void tumIslemler(int sec,int satir);


int main()
{
    int sec=0;
    int satir = 0;
    tumIslemler(sec,satir);
	system("PAUSE");
	return 0;
}


void tumIslemler(int sec,int satir){
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
}
int kacSatirOlsun(){
	int satir = 0;
	cout<<"Kac satir yildiz olsun : ";
    cin>>satir;
    return satir;
}
void bekle(){
	cin.ignore();
	cin.get();
}
int menu(){
	int sec = 0;
	system("CLS");
    cout<<"1. Dortgen Dizilim"<<endl;
    cout<<"2. Sola Hizali Dizilim"<<endl;
    cout<<"3. Tersten Sola Hizali Dizilim"<<endl;
    cout<<"4. Saga Hizali Dizilim"<<endl;
    cout<<"5. Tersten Saga Hizali Dizilim"<<endl;
    cout<<"6. Saga Ok Dizilim"<<endl;
    cout<<"7. Sola Ok Dizilim"<<endl;
    cout<<"8. Pramit Dizilim"<<endl;
    cout<<"9. Tersten Pramit Dizilim"<<endl;
    cout<<"10. Binom Dizilim"<<endl;
    cout<<"11. Cikis"<<endl;
    cout<<"Secim:";
    cin>>sec;
    return sec;
}

void dortgenDizilimi(int satir){
	for(int i=0;i<satir;i++){
        for(int k=0;k<satir;k++){
            cout<<"*";    
        }
        cout<<endl;
    }
}
void solaHizaliDizilim(int satir){
	for(int i=0;i<satir;i++){
        for(int k=0;k<i+1;k++){
            cout<<"*";    
        }
        cout<<endl;
    }
}
void terstenSolaHizaliDizilim(int satir){
	for(int i=0;i<satir;i++){
        for(int k=satir;k>i;k--){
            cout<<"*";    
        }
        cout<<endl;
    }
}
void sagaHizaliDizilim(int satir){
	for(int i=satir,l=1;i>0;i--,l++){
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        for(int k=satir;k>satir-l;k--){
            cout<<"*";    
        }
        cout<<endl;
    }
}
void terstenSagaHizaliDizilim(int satir){
	for(int i=satir,l=0;i>0;i--,l++){
        for(int j=0;j<l;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";    
        }
        cout<<endl;
    }
}
void sagaOkDizilim(int satir){
	for(int i=0;i<satir;i++){
        for(int k=0;k<i+1;k++){
            cout<<"*";    
        }
        cout<<endl;
    }
    for(int i=0;i<satir;i++){
        for(int k=satir;k>i;k--){
            cout<<"*";    
        }
        cout<<endl;
    }
}
void solaOkDizilim(int satir){
	for(int i=satir,l=1;i>0;i--,l++){
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        for(int k=satir;k>satir-l;k--){
            cout<<"*";    
        }
        cout<<endl;
    }
    for(int i=satir,l=0;i>0;i--,l++){
        for(int j=0;j<l;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";    
        }
        cout<<endl;
    }
}
void piramitDizilim(int satir){
	for(int i=satir,k=1;i>0;i--,k+=2){
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<k;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void terstenPiramitDizilim(int satir){
	for(int i=satir; i>=1; --i){
        for(int k=0; k < satir-i; ++k)
            cout<<" ";
        for(int j=i; j <= 2*i-1; ++j)
            cout<<"*";
        for(int j=0; j < i-1; ++j)
            cout<<"*";
        cout<<endl;
    }
}
void binomDizilim(int satir){
	for(int i=0,sayi=1; i<satir; i++){
        for(int k=1; k <= satir-i; k++)
            cout<<" ";
        for(int j=0; j <= i; j++){
            if (j==0 || i==0)
                sayi = 1;
            else
                sayi = sayi*(i-j+1)/j;
            cout<<sayi<<" ";
        }
        cout<<endl;
    }
}
