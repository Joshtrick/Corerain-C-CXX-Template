#include "utility/cr_printer.h"
#include "utility/cr_timer.h"
int main()
{
  print_program_info(__FILE__, 1);
  Proctimer timer;
  timer.get_start_time();
  print_debug("Something wrong: %s\n", "Hello");
  timer.get_end_time("Hello");
  return 0;
}
