// Mutual exclusion lock.
struct spinlock {
  uint locked;       // Is the lock held?

  // For debugging:
  char *name;        // Name of lock.
  struct cpu *cpu;   // The cpu holding the lock.
#ifdef LAB_LOCK
  int nts;
  int n;
#endif
};

#ifdef LAB_LOCK
// Reader-writer lock.
struct rwspinlock {
  //  |    63     |       62 ~ 32       |       31 ~ 0       |
  //  |  writing  |  request_write_num  |  request_read_num  |
  uint64 state;
};
#endif
