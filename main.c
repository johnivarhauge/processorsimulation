#include <stdio.h>
#include "maskin.h"

int main() {

  unsigned int adr, instr;
  struct maskin m;

  
  // Laster program og data i minne fra standard inngang
  while ( EOF != scanf("%x%x\n", &adr, &instr) )
    m.minne[adr] = instr;
  
  // Setter startpunkt
  m.pc = 0x300;

  // hent-og-utfoer-syklus
    while (1) {
    fetch(&m);
    execute(&m);
   }

  return 1; // dette skjer aldri
}
