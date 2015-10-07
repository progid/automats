#include "CondirionForMachine.h"

ConditionForMachine(int Size){
	Transition = new ConditionForMachine *[Size];
}

~ConditionForMachime(){
	delete[] Transition;
}