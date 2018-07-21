#include "utility/corerain_printer.h"

int main()
{
  print_CRT();
  print_program_info(__FILE__);
  printf_cr(__LINE__, __func__, __FILE__, "Hello");
  return 0;
}
