#include <iostream>
#include <cstring>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const char *fn,
                      const char *ln,
                      bool ht)
{
    std::strncpy(firstname, fn, LIMIT - 1);
    firstname[LIMIT - 1] = '\0';
    std::strncpy(lastname, ln, LIMIT - 1);
    lastname[LIMIT - 1] = '\0';
    hasTable = ht;
}

void TableTennisPlayer::Name() const
{
    std::cout << firstname << "," << lastname << std::endl;
}
