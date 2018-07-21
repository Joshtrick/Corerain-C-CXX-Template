#ifndef CORERAIN_PRINTER_H
#define CORERAIN_PRINTER_H

#include <stdio.h>
#include <time.h>

#define DEBUG_TEST 1
#define print_debug(fmt, ...) \
  do{ \
    if(DEBUG_TEST) printf("[CORERAIN] File %s, line %d, %s():\n[CORERAIN] " fmt, __FILE__, \
                          __LINE__, __func__, __VA_ARGS__); \
  }while(0)

void print_corerain();
void print_CRT();
void print_program_info(const char *prog_name);

#endif //CORERAIN_PRINTER_H
