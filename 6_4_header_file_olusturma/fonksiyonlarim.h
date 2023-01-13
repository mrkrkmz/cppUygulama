#include<iostream>
using namespace std;
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

int dortgenDizilimi(int satir){
	for(int i=0;i<satir;i++){
        for(int k=0;k<satir;k++){
            cout<<"*";    
        }
        cout<<endl;
    }
}
int solaHizaliDizilim(int satir){
	for(int i=0;i<satir;i++){
        for(int k=0;k<i+1;k++){
            cout<<"*";    
        }
        cout<<endl;
    }
}
int terstenSolaHizaliDizilim(int satir){
	for(int i=0;i<satir;i++){
        for(int k=satir;k>i;k--){
            cout<<"*";    
        }
        cout<<endl;
    }
}
int sagaHizaliDizilim(int satir){
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
int terstenSagaHizaliDizilim(int satir){
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
int sagaOkDizilim(int satir){
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
int solaOkDizilim(int satir){
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
int piramitDizilim(int satir){
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
int terstenPiramitDizilim(int satir){
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
int binomDizilim(int satir){
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
