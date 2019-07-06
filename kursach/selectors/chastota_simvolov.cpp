#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(){
  ofstream mycsv;
  float Q=0,W=0,E=0,R=0,T=0,Y=0,U=0,I=0,O=0,P=0;
  float A=0, S=0,D=0,F=0,G=0,H=0,J=0,K=0,L=0;
  float Z=0,X=0,C=0,V=0,B=0,N=0,M=0;
  int iw=0;
  int is=0;
  multimap<float,char> myMap;
  int lower;
  char lower_bukwu;
  ifstream fout("1.txt");
  ifstream f("1.txt");//ещё раз файл открываем, потому что возникает ошибка
  if(!fout){
    cout<<"Файла 1.txt не найдено"<<endl;
  }
  string s="",s1;
  mycsv.open("Chastota.csv");

  while (getline(f, s1))
            {
                s += s1;//добавление текста в string


              }

  char arr1[s.length()];
  char arr2[s.length()];
  for(int i=0;i<s.length();i++)
        {
            fout>>arr1[i];//Запись данных из файла в
            lower=arr1[i];//массив
            lower_bukwu=(char)tolower(lower);
            arr2[i]=lower_bukwu;
}


cout<<endl;
for(int j=0;j<s.length();j++){
  if(arr2[j]=='q'){
    Q++;
  }
  if(arr2[j]=='w'){
    W++;
  }
  if(arr2[j]=='e'){
    E++;
  }
  if(arr2[j]=='r'){
    R++;
  }
  if(arr2[j]=='t'){
    T++;
  }
  if(arr2[j]=='y'){
    Y++;
  }
  if(arr2[j]=='u'){
    U++;
  }
  if(arr2[j]=='i'){
    I++;
  }
  if(arr2[j]=='o'){
    O++;
  }
  if(arr2[j]=='p'){
    P++;
  }
  if(arr2[j]=='e'){
    E++;
  }
  if(arr2[j]=='a'){
    A++;
  }
  if(arr2[j]=='s'){
    S++;
  }
  if(arr2[j]=='d'){
    D++;
  }
  if(arr2[j]=='f'){
    F++;
  }
  if(arr2[j]=='g'){
    G++;
  }
  if(arr2[j]=='h'){
    H++;
  }
  if(arr2[j]=='j'){
    J++;
  }
  if(arr2[j]=='k'){
    K++;
  }
  if(arr2[j]=='l'){
    L++;
  }
  if(arr2[j]=='z'){
    Z++;
  }
  if(arr2[j]=='x'){
    X++;
  }
  if(arr2[j]=='c'){
    C++;
  }
  if(arr2[j]=='v'){
    V++;
  }
  if(arr2[j]=='b'){
    B++;
  }
  if(arr2[j]=='n'){
    N++;
  }
  if(arr2[j]=='m'){
    M++;

}
}

myMap.emplace(Q*100/s.length(),'Q');
myMap.emplace(W*100/s.length(),'W');
myMap.emplace(E*100/s.length(),'E');
myMap.emplace(R*100/s.length(),'R');
myMap.emplace(T*100/s.length(),'T');
myMap.emplace(Y*100/s.length(),'Y');
myMap.emplace(U*100/s.length(),'U');
myMap.emplace(I*100/s.length(),'I');
myMap.emplace(O*100/s.length(),'O');
myMap.emplace(P*100/s.length(),'P');
myMap.emplace(A*100/s.length(),'A');
myMap.emplace(S*100/s.length(),'S');
myMap.emplace(D*100/s.length(),'D');
myMap.emplace(F*100/s.length(),'F');
myMap.emplace(G*100/s.length(),'G');
myMap.emplace(H*100/s.length(),'H');
myMap.emplace(J*100/s.length(),'J');
myMap.emplace(K*100/s.length(),'K');
myMap.emplace(L*100/s.length(),'L');
myMap.emplace(Z*100/s.length(),'Z');
myMap.emplace(X*100/s.length(),'X');
myMap.emplace(C*100/s.length(),'C');
myMap.emplace(V*100/s.length(),'V');
myMap.emplace(B*100/s.length(),'B');
myMap.emplace(N*100/s.length(),'N');
myMap.emplace(M*100/s.length(),'M');


for (auto it = myMap.begin(); it != myMap.end(); ++it,iw++,is++)
{
    mycsv<<it->first<<","<<it->second<<endl;

}

  fout.close();
  f.close();
  mycsv.close();
}
