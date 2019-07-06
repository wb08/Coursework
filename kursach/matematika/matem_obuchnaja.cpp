#include <iostream>
#include <cmath>
# include <vector>
# include <fstream>
using namespace std;

struct znach{
  float peremenaja;
  float pribavl_peremenaja;
  vector <float> Vector;
  float t;
  int size;
};
int main(){
  setlocale(LC_ALL,"Russian");
  float a=1;
  float b=1;
  float c=4;
  float z ;

  ofstream fout;
  ofstream mycsv;

  znach x;
  znach y;
  znach t1;
  znach t2;

  cout<<"Введите x:";
  cin>>x.peremenaja;
  cout<<"Введите y:";
  cin>>y.peremenaja;
  x.pribavl_peremenaja=x.peremenaja;
  y.pribavl_peremenaja=y.peremenaja;
  fout.open("Value.txt");
  mycsv.open("Value.csv");
  while (x.peremenaja < x.pribavl_peremenaja+100 && y.peremenaja<y.pribavl_peremenaja+100){

  if(log10(y.peremenaja*x.peremenaja+a)/(a*x.peremenaja+b)>0)
    {
  t1.t=1/c*(1/(a*x.peremenaja+b))+(y.peremenaja/c*log10((y.peremenaja*x.peremenaja+a)/(a*x.peremenaja+b)));
  t1.Vector.push_back(t1.t);//добавление значений
}
if((tan(a*x.peremenaja/2))>0){
  t2.t=sin(a*x.peremenaja)/(2*a*cos(x.peremenaja)*cos(x.peremenaja))+(1/(2*a)*(log10(tan(a*x.peremenaja/2))));
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
  int i=0;
  for(int j=0;j<t1.size;j++){
    if(i>=t2.size){//когда значения у Vector2 закончатся, чтобы
      cout<<t1.Vector[j]<<"    "<<' '<<endl;//добавлялось ' '
      fout<<t1.Vector[j]<<"    "<<' '<<endl;
      mycsv<<t1.Vector[j]<<","<<' '<<endl;

      i++;
    }
    else{
      cout<<t1.Vector[j]<<"     "<<t2.Vector[i]<<endl;
      fout<<t1.Vector[j]<<"     "<<t2.Vector[i]<<endl;
      mycsv<<t1.Vector[j]<<","<<t2.Vector[i]<<endl;
      i++;
    }
  }
}
if(t2.size>t1.size){
  int i=0;
  for(int j=0;j<t2.size;j++){
    if(i>=t1.size){
      cout<<"    "<<t2.Vector[j]<<' '<<endl;
      fout<<"    "<<t2.Vector[j]<<' '<<endl;
      mycsv<<","<<t2.Vector[j]<<' '<<endl;
      i++;
    }
    else{
      cout<<t1.Vector[i]<<"    "<<t2.Vector[j]<<endl;
      fout<<t1.Vector[i]<<"    "<<t2.Vector[j]<<endl;
      mycsv<<t1.Vector[i]<<","<<t2.Vector[j]<<endl;
      i++;
    }
  }

}
fout.close();
mycsv.close();
}
