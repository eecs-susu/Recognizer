#pragma once

#include "stdafx.h"
#include "LexicalToken.h"
#include "SequenceStatus.h"

class IdentificationUnit
{
    unordered_map<string, LexicalType::LexicalType> keywords;
    string toLower(string input) const;
public:   
    void Identification(vector<LexicalToken> & lexicalTokens, SequenceStatus::SequenceStatus & status);
    LexicalType::LexicalType Identificate(LexicalToken token);
    IdentificationUnit();
    ~IdentificationUnit();
};                         

