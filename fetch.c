#include "maskin.h"

void fetch(struct maskin *m){
m->ir=m->minne[m->pc];
m->pc=(m->pc+1);
}
