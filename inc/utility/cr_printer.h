#ifndef CR_PRINTER_H
#define CR_PRINTER_H

#include <stdio.h>
#include <time.h>

#define DEBUG_TEST 1
#define print_debug(fmt, ...) \
  do{ \
    if(DEBUG_TEST) printf("[DEBUG] File %s, line %d, %s():\n[DEBUG] " fmt, __FILE__, \
                          __LINE__, __func__, __VA_ARGS__); \
  }while(0)

void print_corerain();
void print_program_info(const char *prog_name, int logo);

#endif //CR_PRINTER_H
