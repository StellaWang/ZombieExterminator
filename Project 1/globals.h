//globals interface

#ifndef GLOBALS_H
#define GLOBALS_H

#define MAXROWS 20              // max number of rows in the arena
#define MAXCOLS 20              // max number of columns in the arena
#define MAXZOMBIES 100          // max number of zombies allowed
#define INITIAL_ZOMBIE_HEALTH 2 // initial zombie health
#define POISONED_IDLE_TIME 1    // poisoned zombie idles this many turns between moves

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
#define NUMDIRS 4

#define EMPTY 0
#define HAS_BRAIN 1


class Arena;

int randInt(int lowest, int highest);
bool charToDir(char ch, int& dir);
bool attemptMove(const Arena& a, int dir, int& r, int& c);
bool recommendMove(const Arena& a, int r, int c, int& bestDir);
int computeDanger(const Arena& a, int r, int c);
void clearScreen();

#endif