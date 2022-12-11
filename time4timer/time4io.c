#include <stdint.h>
#include "pic32mx.h"
#include "header.h"

int getsw(void)
{
  return (PORTD >> 8) & 0xf;
}

int getbtns(void)
{
  return (PORTD >> 5) & 0x7;
}

