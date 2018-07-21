#include "utility/corerain_printer.h"
int main()
{
  print_program_info(__FILE__, 1);
  print_debug("Something wrong: %s\n", "Hello");
  return 0;
}
