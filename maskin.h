struct maskin {
  unsigned int pc;
  unsigned int ac;
  unsigned int ir;
  unsigned int minne[0xA00];
};

void execute(struct maskin *m);
void fetch(struct maskin *m);
