#include "scanner.ih"

std::map<size_t, std::string> Scanner::s_tokens = {
                                                {Token::WORD, "WORD"},
                                                {Token::INTEGER, "INTEGER"},
                                                {Token::FLOAT, "FLOAT"},
                                                {Token::SCOPE,  "SCOPE"},
                                                {Token::PLUSPLUS,  "PLUSPLUS"},
                                                {Token::MINUSMINUS,  "MINUSMINUS"},
                                                {Token::ARROW, "ARROW"},
                                                {Token::MATH_ASSIGN, "MATH_ASSIGN"},
                                                {Token::STRING, "STRING"},
                                                {Token::CHAR, "CHAR"}
                                            };