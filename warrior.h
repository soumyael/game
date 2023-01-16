#include "hp.h"
#include "statblock.h"
class warrior : public hp, public statblock {
public :    
    static const hptype HPGROWTH =19u ;
    warrior() : hp(HPGROWTH, HPGROWTH) {}

private :


};