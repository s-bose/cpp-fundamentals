#include "parser.ih"

RuleValue (Parser::*Parser::s_opFunc[])(RuleValue &lvalue, 
                                       RuleValue &rvalue)  = 
{
    &Parser::opAdd,
    &Parser::opSub,
    &Parser::opMul,
    &Parser::opDiv,
    &Parser::opMod,
    &Parser::opAnd,
    &Parser::opOr,
    &Parser::opXor,
    &Parser::opEq,
    &Parser::opNeq,
    &Parser::opLeq,
    &Parser::opGeq,
    &Parser::opLShiftEq,
    &Parser::opRShiftEq,
};