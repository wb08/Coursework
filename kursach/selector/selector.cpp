#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
if (string(argv[1])=="-chastota"){
system("~/C++/kursach/selector/chastota_simvolov");
  }

if (string(argv[1])=="-arr"){
system("~/C++/kursach/selector/dinamicheskii_massiv");

}
if (string(argv[1])=="-m"&&string(argv[2])=="sl"){
system("~/C++/kursach/selector/grafiki");

}

if (string(argv[1])=="-math"){
system("~/C++/kursach/selector/matem_obuchnaja");

}
if (string(argv[1])=="-om_sh"){
system("~/C++/kursach/selector/omovicheskii_schifr");

}
if (string(argv[1])=="-p_sh"){
system("~/C++/kursach/selector/perestanovka");

}
if (string(argv[1])=="-r_file"){
system("~/C++/kursach/selector/raschifr_file");

}
if (string(argv[1])=="-s_i_a"){
system("~/C++/kursach/selector/sintez_i_analiz");

}
if (string(argv[1])=="-xor"){
system("~/C++/kursach/selector/xor");

}
if (string(argv[1])=="-zesar"){
system("~/C++/kursach/selector/zesar");

}
if (string(argv[1])=="-z_file"){
system("~/C++/kursach/selector/zaschifr_file");

}
if (string(argv[1])=="-help"){
system("~/C++/kursach/selector/help");
}
if (string(argv[1])=="-rsa"){
system("~/C++/kursach/selector/rsa");
}
}
