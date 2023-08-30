#include <iostream>
#include <vector>

#include "../h/main.hpp"
#include "../h/calc.hpp"

using namespace std;

void main()
    {
       calc obj;
       int userinput;
       cout << "hey kid pick a numba\n";
       cin >> int(userinput);
       cout << "good choice, here's ya stuff\n";
       obj.num();
       obj.max(userinput);
    }

