package cnt;

import java.util.Scanner;
public class Clscnt {
    
public static void main(String[] args) {
    double p,i,total;
    int ti,d,tu;
    Scanner s =new Scanner(System.in);
    System.out.println("Ingrese el tiempo de llamada");
    ti=s.nextInt();
    System.out.println("Ingrese el día de la llamada: Domingo= 1, otro día= 0");
    d=s.nextInt();
    System.out.println("Ingrese el turno de la llamada: Matutino= 1, Vespertino= 0");
    tu=s.nextInt();
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
    System.out.println("El impuesto por llamada es => "+i);
    System.out.println("El total a pagar es => "+total);

  }

}
