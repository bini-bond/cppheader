#ifndef HEADER_INCLUDED
#define HEADER_INCLUDED

#include <ctime>
#include <cstdlib>

int getRandomNumber(){
    srand(time(0));
    return rand() % 100+1;

}

#endif // HEADER_INCLUDED
