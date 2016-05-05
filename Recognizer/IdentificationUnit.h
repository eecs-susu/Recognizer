#pragma once
#include "stdafx.h"
#include "Enums.h"
#include "Models.h"

class IdentificationUnit
{
    unordered_map<string, LexicalType> keywords;
public:   
    void Identification(vector<LexicalToken> & lexicalTokens, SequenceStatus & status);
    LexicalType Identificate(LexicalToken token);
    IdentificationUnit();
    ~IdentificationUnit();
};                         

