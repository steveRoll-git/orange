#ifndef LEXER_H
#define LEXER_H

#include <istream>

namespace Orange::Lang
{
    class Lexer
    {
        public:
        Lexer(std::istream& _codeStream);
        virtual ~Lexer();

        protected:
        std::istream& codeStream;
        char currentChar;
        bool reachedEnd;

        void advanceChar();
    };
} // namespace Orange::Lang

#endif // LEXER_H
