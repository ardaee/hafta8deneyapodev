#include <iostream>
using namespace std;
class Bahce{ //soru 1
public:
    int kenar;
    int alan(int k){
        return k*k;
    }
    int cevre(int m){
        return 4*m;
    }
};
class Havuz{//soru 2
public:
    int yaricap;
    float alan(int y){
        return 3.14*y*y;
    }
};
int main(){
    int soruno;
    cout<<"Cevabini gormek istediginiz soru numarasini giriniz(1-2): "<<endl;
    cin>>soruno;
    if(soruno==1){
        while (true){
            int b_kenar;
            cout<<"Kare seklindeki bahcenin kenar uzunlugunu giriniz, programi bitirmek icin 0 giriniz: "<<endl;
            cin>>b_kenar;
            if(b_kenar==0) break;
            else{
                Bahce bahce;
                bahce.kenar=b_kenar;
                cout<<"Bahcenin alani: "<<bahce.alan(bahce.kenar)<<", bahcenin cevresi: "<<bahce.cevre(bahce.kenar)<<endl;
            }
        }
    }else if(soruno==2){
        Havuz havuz;
        int h_yaricap;
        cout<<"Cocuk havuzunun yaricapini giriniz: "<<endl;
        cin>>h_yaricap;
        havuz.yaricap=h_yaricap;
        cout<<"Cocuk havuzunun alani: "<<havuz.alan(havuz.yaricap)<<endl;
        cout<<"Yetiskin havuzunun yaricapini giriniz: "<<endl;
        cin>>h_yaricap;
        havuz.yaricap=h_yaricap;
        cout<<"Yetiskin havuzunun alani: "<<havuz.alan(havuz.yaricap)<<endl;
    }
}
