#include <iostream>
using namespace std;
int main() {
  double p,i,total;
    int ti,d,tu;
    cout<<"Ingrese el tiempo de llamada"<<endl;
    cin>>ti;
    cout<<"Ingrese el día de la llamada: Domingo= 1, otro dia= 0"<<endl;
    cin>>d;
    cout<<"Ingrese el turno de la llamada: Matutino= 1, Vespertino= 0"<<endl;
    cin>>tu;
    if(ti<=5){
      p=ti*1;
    }
    else {
      if(ti<=8){
        p=(((ti-5)*0.8)+5);
      }
      else {
        if(ti<=10){
          p=(((ti-8)*0.7)+7.4);
        }
        else{
          p=(((ti-10)*0.5)+8.8);
        }
      }
    }
    if(d==1){
      i=p*0.05;
    }
    else {
      if (tu==1){
        i=p*0.15;
      }
      else {
        i=p*0.10;
      }
    }

    total=i+p;
    cout<<"El impuesto por llamada es => "<<i<<endl;
    cout<<"El total a pagar es => "<<total<<endl;
	return 0;
}
