#ifndef _STACKH_
#define _STACKH_
#include "types.h"

int EmptyS(ApStack);
int FullS(ApStack);
void ClearS(ApStack);
int SizeS(ApStack);
ApNo TopS(ApStack);
int NewS(ApStack);
ApNo Pop(ApStack);
int Push(ApStack, ApNo);
int SearchCodS(ApStack, char*);
void PrintStack(ApStack);

#endif /* _STACKH_ */
