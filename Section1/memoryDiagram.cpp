#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector

using namespace std;

struct heroT {
    string name;
    string weakness;
    int powerLevel;
};
struct villianT {
    string name;
    string evilPlan;
    int attackLevel;
};

void Battle(heroT aang, villianT & zuko)
{
    int pos = 1;
    int level = aang.powerLevel;
    string name = zuko.name;

    while(level > 20)
    {
        zuko.evilPlan[pos--] -= (level / 10);
        level /= 2;
    }
        zuko.attackLevel -= level;
        pos = name.find(aang.weakness);

    while(pos != string::npos)
    {
        aang.powerLevel /= 2;
        name.replace(pos, 2, "");
        pos = name.find(aang.weakness, pos);
    }

    if(aang.powerLevel > zuko.attackLevel)
    {
        zuko.name = "Loser";
    }
    else
    {
        aang.name = "Big Baby";
    }
    /* DRAW THE STATE OF MEMORY HERE */
    return;
}

int main()
{
    heroT julie;
    villianT tom;

    julie.name = "Super Lecturer";
    julie.weakness = "Gr";
    julie.powerLevel = 60;
    tom.name = "Grumpy Grad Student";
    tom.evilPlan = "Frowning";
    tom.attackLevel = 30;

    Battle(julie, tom);

    return 0;
}

