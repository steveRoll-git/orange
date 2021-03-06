#ifndef LEXER_H
#define LEXER_H

#include <istream>

#include "Token.h"

namespace Orange::Lang
{
    class Lexer
    {
        public:
        Lexer(std::istream& _codeStream, const std::string& _sourceName);
        virtual ~Lexer();
        bool hasReachedEnd();
        Token nextToken();

        protected:
        std::istream& codeStream;
        std::string sourceName;
        char currentChar;
        int currentLine;
        bool reachedEnd;

        private:
        void advanceChar();
        std::string parseName(bool allowSpace = false);
        double parseNumber();
    };
} // namespace Orange::Lang

#endif // LEXER_H
