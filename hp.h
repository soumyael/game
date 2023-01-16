#include "hitpoint.h"


class hp {
public :
    bool setmaxhp (hptype new_max_hp){
        if (new_max_hp <1)
            return false;
        maxhp=new_max_hp;
        if (currenthp>maxhp )
            currenthp=maxhp;
        return true;
    }
    hptype getmaxhp(){
        return maxhp;
    }
    hptype getcurrenth(){
        return currenthp;
    }
    void takedamage(hptype damage){
        if (damage>currenthp ){
            currenthp=0;
            return;
        }
    
        currenthp-=damage;
    }
    void heal(hptype amount){
        if (amount+currenthp>maxhp){
            currenthp=maxhp;
            return;
        }
        currenthp+=amount;
    }
    hp(){ currenthp=1 ; maxhp=1;}
    hp ( hptype chp , hptype mhp){
        currenthp=chp;
        maxhp=mhp;
        if ( currenthp>maxhp){
            currenthp=maxhp;
        }
    }
private :
    hptype currenthp;
    hptype maxhp;
};