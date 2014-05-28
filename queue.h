#ifndef _QUEUEH_
#define _QUEUEH_
#include "types.h"

int EmptyQ(ApQueue);
int FullQ(ApQueue);
void ClearQ(ApQueue);
int SizeQ(ApQueue);
ApNo FrontQ(ApQueue);
int NewQ(ApQueue);
ApNo Dequeue(ApQueue);
int Enqueue(ApQueue, ApNo);

#endif /* _QUEUEH_ */
