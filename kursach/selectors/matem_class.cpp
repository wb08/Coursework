#include <iostream>
#include <cmath>
# include <vector>
# include <fstream>
using namespace std;

class znach{
private:
  float a;
  float b;
  float c;
  int i;
public:
  float peremenaja;
  float pribavl_peremenaja;
  vector <float> Vector;
  float t;
  int size;

  void pribavlenie(){
     i++;
  }

  float GetA(){
    return a;
  }

  float GetB(){
    return b;
  }
  float GetC(){
    return c;
  }
  int GetI(){
    return i;
  }


  void SetA(float znachA){
    a=znachA;
  }
  void SetB(float znachB){
    b=znachB;
  }
  void SetC(float znachC){
    c=znachC;

  }
  void SetI(int znachI){
    i=znachI;

  }
};

int main(){
  setlocale(LC_ALL,"Russian");

  ofstream fout;
  ofstream mycsv;

  znach x;
  znach y;
  znach t1;
  znach t2;
  znach constant;
  znach i;

  constant.SetA(1);
  constant.SetB(1);
  constant.SetC(4);
  constant.SetI(0);

  cout<<"Введите x:";
  cin>>x.peremenaja;
  cout<<"Введите y:";
  cin>>y.peremenaja;
  x.pribavl_peremenaja=x.peremenaja;
  y.pribavl_peremenaja=y.peremenaja;
  fout.open("Value.txt");
  mycsv.open("Value.csv");
  while (x.peremenaja < x.pribavl_peremenaja+100 && y.peremenaja<y.pribavl_peremenaja+100){

  if(log10(y.peremenaja*x.peremenaja+constant.GetA())/(constant.GetA()*x.peremenaja+constant.GetB())>0)
    {
  t1.t=1/constant.GetC()*(1/(constant.GetA()*x.peremenaja+constant.GetB()))+(y.peremenaja/constant.GetC()*log10((y.peremenaja*x.peremenaja+constant.GetA())/(constant.GetA()*x.peremenaja+constant.GetB())));
  t1.Vector.push_back(t1.t);//добавление значений
}
if((tan(constant.GetA()*x.peremenaja/2))>0){
  t2.t=sin(constant.GetA()*x.peremenaja)/(2*constant.GetA()*cos(x.peremenaja)*cos(x.peremenaja))+(1/(2*constant.GetA())*(log10(tan(constant.GetA()*x.peremenaja/2))));
  t2.Vector.push_back(t2.t);
}

  x.peremenaja++;
  y.peremenaja++;
}
t1.size=t1.Vector.size();
t2.size=t2.Vector.size();
cout<<"t1"<<"                "<<"t2"<<endl;
fout<<"t1"<<"                "<<"t2"<<endl;
mycsv<<"t1"<<","<<"t2"<<endl;


if (t1.size>=t2.size){
  constant.GetI();
  for(int j=0;j<t1.size;j++){
    if(constant.GetI()>=t2.size){//когда значения у Vector2 закончатся, чтобы
      cout<<t1.Vector[j]<<"    "<<' '<<endl;//добавлялось ' '
      fout<<t1.Vector[j]<<"    "<<' '<<endl;
      mycsv<<t1.Vector[j]<<","<<' '<<endl;

      constant.pribavlenie();
    }
    else{
      cout<<t1.Vector[j]<<"     "<<t2.Vector[constant.GetI()]<<endl;
      fout<<t1.Vector[j]<<"     "<<t2.Vector[constant.GetI()]<<endl;
      mycsv<<t1.Vector[j]<<","<<t2.Vector[constant.GetI()]<<endl;
      constant.pribavlenie();
    }
  }
}
if(t2.size>t1.size){
  constant.GetI();
  for(int j=0;j<t2.size;j++){
    if(constant.GetI()>=t1.size){
      cout<<"    "<<t2.Vector[j]<<' '<<endl;
      fout<<"    "<<t2.Vector[j]<<' '<<endl;
      mycsv<<","<<t2.Vector[j]<<' '<<endl;
      constant.pribavlenie();
    }
    else{
      cout<<t1.Vector[constant.GetI()]<<"    "<<t2.Vector[j]<<endl;
      fout<<t1.Vector[constant.GetI()]<<"    "<<t2.Vector[j]<<endl;
      mycsv<<t1.Vector[constant.GetI()]<<","<<t2.Vector[j]<<endl;
      constant.pribavlenie();
    }
  }

}
fout.close();
mycsv.close();
}
