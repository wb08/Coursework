#include <iostream>
#include <cmath>
#include <cstdlib> // для exit()
#include "generic_template_uintwide_t.h"
#include <iomanip>
using namespace std;
int main(){
using uint2097152_t = wide_integer::generic_template::uintwide_t<2097152U>;
int p;
int q;
int k_natur;
int schetchik=0;
int m;
while (schetchik==0) {


//нахождение простых чисел
    cout<<"Просте числа:";
    for (int s = 10; s<=125; s++)
    {
        int schetchik=0;
        for (int i = 2; i*i<=s; i++)
        {

            if( s% i == 0)
            {
                schetchik++;
                break;
            }
        }

        if (schetchik==0) {cout << s <<" ";}
    }
    cout<<endl;
    cout<<"Введите p из заданного списка простых чисел:";
    cin>>p;
    cout<<endl;
    cout<<"Введите q из заданного списка простых чисел:";
    cin>>q;
    //int p=17;
    //int q=113;
    cout<<"p="<<p<<"  "<<"q="<<q<<endl;
    int n=p*q;//произведение
    int Fn=(p-1)*(q-1);// функция Эйлера
    cout<<"n="<<n<<"  "<<"F(n)="<<Fn<<endl;
    //Нахождение открытой экспоненты
    cout<<"e:";
    for(int e=1;e<25;e++){
      double d=(1+2*Fn)/e;// проверяется, является ли число целое, либо нет
      if ( (d - int(d)) != 0 ){
        cout<<"";
    }
    else{
      if (d*e==1+2*Fn){
        cout<<e<<" ";
      }
    }
    }

    cout<<endl;
    int e=3;
    //int schetchik=0;
    cout<<"e="<<e<<endl;
    //Подбор натурального числа k
    cout<<"Возможные числа для натурального числа k:";
    for(int k=1;k<225;k++){
      double d=(1+k*Fn)/e;// проверяется, является ли число целое, либо нет
      if ( (d - int(d)) != 0 ){
        cout<<"";
    }
    else{
      if (d*e==1+k*Fn){
        cout<<k<<" ";
        schetchik++;
      }
    }

    }
    if(schetchik==0){
      cout<<"Не удалось найти число k"<<endl;
  }
    cout<<endl;

if (schetchik>0){
    cout<<"Введите число k из предложенных:";
    cin>>k_natur;
    //Секретная экспонента
    double d=(1+k_natur*Fn)/e;// проверяется, является ли число целое, либо нет
    if ( (d - int(d)) != 0 ){
      cout<<"Число d является не целым";
      //exit(0);

  }
  else{
    cout<<"d="<<d<<" "<<"k="<<k_natur<<endl;
    }


int public_key [2]={e, n};
double private_key [2] = {d, (double)n};
cout<<"public_key:"<<public_key[0]<<" , "<<public_key[1]<<endl;
cout<<"private_key:"<<private_key[0]<<" , "<<private_key[1]<<endl;

cout<<"Введите cообщение, которое шифруем: ";
cin>>m;

// Шифрование
uint2097152_t stepen = pow(uint2097152_t(m),(uint2097152_t)e);
uint2097152_t Cm=stepen% (uint2097152_t)n;

cout<<"Зашифрованное сообщение:"<<Cm<<endl;

//Расшифрование
int d_ne=d;
//cout<<(uint512_t)Cm<<"      "<<(uint512_t)d_ne;
uint2097152_t stepen2= pow((uint2097152_t)Cm,(uint2097152_t)d_ne);
uint2097152_t Dm=stepen2% (uint2097152_t)n;
cout<<"Расшифрованное сообщение:"<<Dm<<endl;}
}
}
