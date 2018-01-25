#include <stdlib.h>
#include <stdio.h>
#include "maskin.h"

void execute(struct maskin *m){

if((m->ir/0x1000)==1){
    m->ac=m->minne[(m->ir%0x1000)];
 }
 else if((m->ir/0x1000)==5){
    m->ac=(m->ac+m->minne[(m->ir%0x1000)]);
 }
 else if(m->ir/0x1000==5){
    m->minne[(m->ir%0x1000)]=m->ac;
 }
 else if(m->ir/0x6000==0x0)
    exit(m->ac);
}
