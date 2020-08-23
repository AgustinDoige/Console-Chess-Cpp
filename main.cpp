#include <stdlib.h>
#include <stdio.h>
#include <set>

typedef _Cond * Condition;

struct _Cond {
    std::set<int> team1C;
    std::set<int> team2C;
};

class Piece {
private:
    int firstp;
    int secondp;
    bool teamOne;
public:
    Piece(int f, int s, bool t) : firstp(f), secondp(s), teamOne(t) {}

    virtual int type() =0; // Returns which piece this one is

    virtual Condition move(int a1, int a2, int b1, int b2) =0;

    bool inbounds() {
        return (firstp>0 && secondp>0 && firstp<8 && secondp<8);
    }
};

class King : public Piece {
public:
    Condition move(int a1, int a2, int b1, int b2) {
        Condition cond = new Condition;
        bool possible;
        possible = abs(a1-b1)<2;
        possible = possible && abs(a2-b2)<2;

    }

};

int main() {
    return EXIT_SUCCESS;
}