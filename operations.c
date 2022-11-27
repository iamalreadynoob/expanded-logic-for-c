#include <stdbool.h>

bool and(bool caseOne, bool caseTwo)
{

    if(caseOne && caseTwo) return true;
    else return false;

}

bool or(bool caseOne, bool caseTwo)
{

    if(!caseOne && !caseTwo) return false;
    else return true;

}

bool not(bool situation)
{

    if(situation) return false;
    else return true;

}

bool xor(bool caseOne, bool caseTwo)
{

    if((caseOne && caseTwo) || (!caseOne && !caseTwo)) return false;
    else return true;

}

bool ifThen(bool caseOne, bool caseTwo)
{

    if(caseOne && !caseTwo) return false;
    else return true;

}

bool ifAndOnlyIf(bool caseOne, bool caseTwo)
{

    if((caseOne &6 caseTwo) || (!caseOne && !caseTwo)) return true;
    else return false;

}
