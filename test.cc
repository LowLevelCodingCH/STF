#include "stf.h"

int main() {
  coint l = 22;
  stf::string<l> bdy("std::cout << \"Hi\";\n");
  stf::sstream<stf::string<l>> body = {bdy};

  stf::sout<l> << bdy;
  return 0;
}
