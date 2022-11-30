#ifndef GENERIC_COMPLETER_H
#define GENERIC_COMPLETER_H

#include "BalancedTreeCompleter.h"
#include "LevenshteinCompleter.h"

class GenericCompleter{
public:
    GenericCompleter(std::vector<std::string> &dictionary, std::vector<std::string> &matchStrings, int quantityToMatch, int maxQuantityToMatch);
    
    void selectCompleter(int completerId);
    void setMatchesNumber(int matchesNumber);
    void autoComplete(std::string key);

private:
    int activeCompleter = 1;
    //@TODO: Add completer 3
    BalancedTreeCompleter* completer1;
    LevenshteinCompleter* completer2;
    LevenshteinCompleter* completer3;
};

#endif