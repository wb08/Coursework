#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>//библиотека, предназначенная для встроенной сортировки

using namespace std;

int main(){
  int size=0;
  vector <int> v;
  int vremennaja_peremennaja;
  cout<<"Введите размер массива:";
  cin>>size;
  int *mas=new int[size];
  for(int i=0;i<size;i++){
    int elem;
    cin>>elem;
    mas[i]=elem;
    v.push_back(elem);
  }
  cout<<"========================"<<endl;
  for(int i=0;i<size;i++){
    cout<<mas[i]<<" ";
  }
  cout<<endl;
  float start_time1 =  clock();
  cout<<"=========================="<<endl;
  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1;j++){
      if(mas[j]>mas[j+1]){
        vremennaja_peremennaja=mas[j];
        mas[j]=mas[j+1];
        mas[j+1]=vremennaja_peremennaja;

      }
    }
  }
  for(int j=0;j<size;j++){
    cout<<mas[j]<<" ";
  }
  delete [] mas;
  cout<<endl;
  float end_time1 = clock();
  float search_time1 = end_time1 - start_time1;
  cout<<"Время работы пузырьковой сортировки : "<<search_time1/1000<<endl;
  cout<<"=============================="<<endl;
  float start_time2=clock();
  sort(v.begin(),v.end());
  for(int i=0;i<size;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  float end_time2=clock();
  float search_time2=end_time2-start_time2;
  cout<<"Время работы встроеной сортировки : "<<search_time2/1000<<endl;

}
