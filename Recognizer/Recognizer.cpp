#define _CRT_SECURE_NO_WARNINGS

#include "Recognizer.h"

#include "Enums.h"
#include "Units.h"
#include "Models.h"

using namespace std;


TransliterationUnit transliterationUnit;
LexicalUnit lexicalUnit;
IdentificationUnit identificationUnit;
SyntaxUnit syntaxUnit;

Recognizer::Recognizer()
{
    transliterationUnit = TransliterationUnit();
    lexicalUnit = LexicalUnit();
    identificationUnit = IdentificationUnit();
    syntaxUnit = SyntaxUnit();
}

string Recognizer::Read(string fileName)
{
    freopen(fileName.c_str(), "r", stdin);
    string buff;
    getline(cin, buff);
    fclose(stdin);
    return buff;
}
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n + 1; ++i)
    {
        string el;
        getline(cin, el);
      //  vector<string> ss = LexicalUnit().Analize(TransliterationUnit().Parse(el));

 /*       cout << el << endl;
        for (int j = 0; j < ss.size(); ++j)                  
            cout << j << ": " << ss[j] << endl;
        cout << "-------------------------------" << endl;*/
    }
}

bool Check(string & input)
{
    Sequence sequence(input);
    sequence.initTransliterationUnit(transliterationUnit);
    sequence.initLexicalUnit(lexicalUnit);
    sequence.initIdentificationUnit(identificationUnit);
    sequence.initSyntaxUnit(syntaxUnit);
    if (sequence.getStatus() == SequenceStatus::Accepted)
        return true;
    else
        return false;
}

void Recognizer::Run()
{
    test();
#ifdef TEST
    string input = Read("input.txt");
    vector<Atom> translatorOut = TransliterationUnit().Parse(input);
    vector<string> ss = LexicalUnit().Analize(translatorOut);
    int k = translatorOut.size();
#else
  
#endif
}



Recognizer::~Recognizer()
{
}
