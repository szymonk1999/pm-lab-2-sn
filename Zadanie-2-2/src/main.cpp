#include <Arduino.h>

int main()
{
  uint32_t i;
  DDRB |= (1 << 5);
  while (1)
  {
    PORTB |= (1 <<5);
    i = 0x3FFF;
    do
    {
      __asm__ __volatile__("nop");
    } while (i--);
    PORTB &= !(1 << 5);
    i = 0x3FFF;
    do
    {
      _asm__ __volatile__("nop");
    } while (i--);
    
    
  }
}