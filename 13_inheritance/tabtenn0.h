#ifndef _TAB_TEN_PLAYER_H
#define _TAB_TEN_PLAYER_H

class TableTennisPlayer
{
public:
    TableTennisPlayer(const char *fn = "none",
                      const char *ln = "none",
                      bool ht = false);
    ~TableTennisPlayer() {}
    void Name() const;
    bool HasTable() {return hasTable;}
    void ResetTable(bool v) {hasTable = v;}

private:
    enum {LIMIT = 20};
    char firstname[LIMIT];
    char lastname[LIMIT];
    bool hasTable;
};

#endif
