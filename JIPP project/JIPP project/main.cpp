#include <iostream>
#include "wooden_door.h"
#include "heavy_door.h"
#include "secure_door.h"
#include <string>

using namespace std;


int main() {

Door *d1 = new WoodenDoor("Normal wood", 50, 1);
Door *d2 = new HeavyDoor("H door", 200, 0);
Door *d3 = new SecureDoor("S door", 1000, 1);

d1->doorType();
d2->doorType();
d3->doorType();

d1->~Door();
d1->doorType();

system("pause");
}