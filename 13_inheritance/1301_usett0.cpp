#include <iostream>
#include "tabtenn0.h"

using namespace std;

int main()
{
    TableTennisPlayer player1 = TableTennisPlayer("micheal", "jackson", true);
    TableTennisPlayer player2 = TableTennisPlayer("federa", "roger", false);
    player1.Name();
    return 0;
}

