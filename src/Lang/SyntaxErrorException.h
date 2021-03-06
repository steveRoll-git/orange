#if !defined(SYNTAXERROREXCEPTION_H)
#define SYNTAXERROREXCEPTION_H

#include <exception>
#include <string>

namespace Orange::Lang
{
    class SyntaxErrorException : public std::exception
    {
    private:
        std::string sourceName;
        int line;
        std::string message;
    public:
        SyntaxErrorException(const std::string& _sourceName, int _line, const std::string& _message) : 
        sourceName(_sourceName),
        line(_line),
        message(_message)
        {}

        std::string getFormattedError()
        {
            return sourceName + ":" + std::to_string(line) + ": " + message;
        }
        
        const char* what() const throw ()
        {
            return "syntax error";
        }
    };
    
} // namespace Orange::Lang


#endif // SYNTAXERROREXCEPTION_H
