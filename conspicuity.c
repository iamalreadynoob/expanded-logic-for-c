#include <stdbool.h>

bool isTautology(bool caseOne, bool caseTwo, bool caseThree, bool caseFour)
{

    if(caseOne && caseTwo && caseThree && caseFour) return true;
    else return false;

}

bool isContradiction(bool caseOne, bool caseTwo, bool caseThree, bool caseFour)
{

    if(!caseOne && !caseTwo && !caseThree && !caseFour) return true;
    else return false;

}
