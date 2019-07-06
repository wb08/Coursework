#include <iostream>
#include <unistd.h>
#include <string>
#include <cstdlib> // для exit()
#include <vector>
#include <fstream>
using namespace std;

  enum files1{massiv1=1,perestanovka1,matem_obuchnaja1,
    sintez_i_analiz1,spravka1};

    enum files2{chastota_simvolov2=1,grafiki2,zaschifr_file2,
      raschifr_file2,omovicheskii_schifr2,rsa,spravka2,smena};
void obuchnyi_user(){
  int switsch_1;
  char decrypt;
  string text="idmmn>lhs";
  char arr1 [30]= {};
  //string passw;

  const char key=1;
  for(int i=0;i<text.length();i++){
    int ord=(int)text[i]^key;
    arr1[i]=(char)ord;
  }

  for(int j=0;j<text.length();j++){
    int ord=(int)arr1[j]^key;
    decrypt=(char)ord;
}

string passw=getpass("\033[1;36mВведите пароль:\033[0m");
if(passw==arr1){
  while(true){
  system("~/C++/kursach/selectors/menu_prostoe");
  cout<<endl;
  cout<<"\033[1;34mВведите интересующий вас модуль(для выхода нажмите 0) :\033[0m ";
  cin>>switsch_1;
  if(switsch_1==0){
    break;
    exit(0);
  }
  switch(switsch_1){
    case massiv1:
    system("~/C++/kursach/selectors/dinamicheskii_massiv");
    break;
    case spravka1:
    system("~/C++/kursach/selectors/help_prostaja");
    break;
    case sintez_i_analiz1:
    system("~/C++/kursach/selectors/sintez_i_analiz");
    break;
    case perestanovka1:
    system("~/C++/kursach/selectors/perestanovka");
    break;
    case matem_obuchnaja1:
    system("~/C++/kursach/selectors/matem_obuchnaja");
    break;

  }
}
}
else{
  cout<<"\033[1;31mВы ввели пароль неверно\033[0m"<<endl;

}
}
void super_user(){

  vector<char> arr1={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
   'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
    'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    vector<char> arr2={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
     'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
      'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

      int key=10;
      string passw;
      string new_passw;
      string message="",s1;
      string crypt_message;
      string decrypt_message;
      int switsch_2;
      ifstream fout("zesar.txt");
      while (getline(fout, s1))
                {
                    message += s1;//добавление текста в string


                  }


      for(int i=0;i<key;i++){
        arr2.push_back(arr2[0]);//добавляем в конец нулевой элемент
        arr2.erase(arr2.begin()+0);//удаляем из начала нулевой элемент

      }

      for(int i=0;i<message.size();i++){
        for(int j=0;j<arr1.size();j++){
          if (message[i]==arr1[j]){
            crypt_message+=arr2[j];
          }
        }
      }


      for(int i=0;i<crypt_message.size();i++){
        for(int j=0;j<arr1.size();j++){
          if(crypt_message[i]==arr2[j]){
            decrypt_message+=arr1[j];
          }
        }
      }
      cout<<"\033[1;36mВведите пароль для суперпользователя:\033[0m ";
      cin>>passw;
      if(passw==decrypt_message){
        while(true){
          system("~/C++/kursach/selectors/menu_sloschnoe");
          cout<<endl;
          cout<<"\033[1;34mВведите интересующий вас модуль(для выхода нажмите 0) :\033[0m ";
          cin>>switsch_2;
          if(switsch_2==0){
            break;
            exit(0);

          }

          switch(switsch_2){
            case chastota_simvolov2:
            system("~/C++/kursach/selectors/chastota_simvolov");
            break;
            case spravka2:
            system("~/C++/kursach/selectors/help_sloschnaja");
            break;
            case grafiki2:
            system("~/C++/kursach/selectors/grafiki");
            break;
            case zaschifr_file2:
            system("~/C++/kursach/selectors/zaschifr_file");
            break;
            case raschifr_file2:
            system("~/C++/kursach/selectors/raschifr_file");
            break;
            case omovicheskii_schifr2:
            system("~/C++/kursach/selectors/omovicheskii_schifr");
            break;
            case rsa:
            system("~/C++/kursach/selectors/rsa");
            break;
            case smena:
            cout<<"\033[1;36mВведите пароль для суперпользователя:\033[0m ";
            cin>>passw;
            if(passw==decrypt_message){
              remove("zesar.txt");
              ofstream fout("zesar.txt");
              cout<<"Введите новый пароль:";
              cin>>new_passw;
              fout<<new_passw;
              cout<<"Пароль успешно изменён";
            }
            else{
              cout<<"Вы ввели пароль неверно";
            }
            break;

          }
        }


        }

  else{
      cout<<"\033[1;31mВы ввели пароль неверно\033[0m"<<endl;
    }



}

int main()
{
  int user;
  cout<<"Как вы хотите войти?\n0)Хочу выйти\n1)Как обычный пользователь\n2)Как суперпользователь"<<endl;
  cin>>user;
  if(user==1){
  obuchnyi_user();}//hello?mir

  if(user==2){
  super_user();}//Hello
  if(user==0){
    exit(0);

  }

}
