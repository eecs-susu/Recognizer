#pragma once

#include "stdafx.h"

namespace LexicalType
{
    enum LexicalType
    {
        Keyword,
        Identifier,
        Equal,
        ValueDecimalNumber,
        ValueHexNumber,
        ValueExponentNumber,
        Semicolon,
        ValueString,
        ValueFloatNumber,

        KeywordAnd,
        KeywordEnd,
        KeywordNil,
        KeywordSet,
        KeywordArray,
        KeywordFile,
        KeywordNot,
        KeywordThen,
        KeywordBegin,
        KeywordFor,
        KeywordOf,
        KeywordTo,
        KeywordCase,
        KeywordFunction,
        KeywordOr,
        KeywordType,
        KeywordConst,
        KeywordGoto,
        KeywordPacked,
        KeywordUntil,
        KeywordDiv,
        KeywordIf,
        KeywordProcedure,
        KeywordVar,
        KeywordDo,
        KeywordIn,
        KeywordProgram,
        KeywordWhile,
        KeywordDownto,
        KeywordLabel,
        KeywordRecord,
        KeywordWith,
        KeywordElse,
        KeywordMod,
        KeywordRepeat,
        NoKeyword
    };
#if _DEBUG
    const vector<string> toString = 
    {
        "Keyword",
        "Identifier",
        "Equal",
        "ValueDecimalNumber",
        "ValueHexNumber",
        "ValueExponentNumber",
        "Semicolon",
        "ValueString",
        "ValueFloatNumber",
        "KeywordAnd",
        "KeywordEnd",
        "KeywordNil",
        "KeywordSet",
        "KeywordArray",
        "KeywordFile",
        "KeywordNot",
        "KeywordThen",
        "KeywordBegin",
        "KeywordFor",
        "KeywordOf",
        "KeywordTo",
        "KeywordCase",
        "KeywordFunction",
        "KeywordOr",
        "KeywordType",
        "KeywordConst",
        "KeywordGoto",
        "KeywordPacked",
        "KeywordUntil",
        "KeywordDiv",
        "KeywordIf",
        "KeywordProcedure",
        "KeywordVar",
        "KeywordDo",
        "KeywordIn",
        "KeywordProgram",
        "KeywordWhile",
        "KeywordDownto",
        "KeywordLabel",
        "KeywordRecord",
        "KeywordWith",
        "KeywordElse",
        "KeywordMod",
        "KeywordRepeat",
        "NoKeyword" 
    };
#endif

}
