#include "utility/corerain_printer.h"
int main()
{
  print_CRT();
  print_program_info(__FILE__);
  print_debug("Something wrong: %s\n", "Hello");
  return 0;
}
