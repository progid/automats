#include "ConditionForAutomat.h"
ConditionForAutomat::ConditionForAutomat(int Size) {
	Transition = new ConditionForAutomat *[Size];
}

~ConditionForAutomat::ConditionForAutomat() {
	delete[] Transition;
}
