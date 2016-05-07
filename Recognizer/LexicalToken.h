#pragma once

#include "LexicalType.h"
#include <string>

class LexicalToken
{
public:
    std::string value = "";
    LexicalType::LexicalType type;
    LexicalToken();
    LexicalToken(char & value, LexicalType::LexicalType type);
    LexicalToken(std::string & value, LexicalType::LexicalType type);
    ~LexicalToken();
};
