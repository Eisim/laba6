#pragma once


#include "mygrammarVisitor.h"

class  myVisitor : public mygrammarVisitor {
    std::any visitInt(mygrammarParser::IntContext* context);

    std::any visitIntDOTint(mygrammarParser::IntDOTintContext* context) ;

    std::any visitVarISexpr(mygrammarParser::VarISexprContext* context) ;

    std::any visitLexprR(mygrammarParser::LexprRContext* context) ;

    std::any visitPrint_expr(mygrammarParser::Print_exprContext* context) ;

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* context)  ;

    std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* context)  ;

    std::any visitEvar(mygrammarParser::EvarContext* context)  ;

    std::any visitEfloat(mygrammarParser::EfloatContext* context)  ;

    std::any visitExpr_sep(mygrammarParser::Expr_sepContext* context)  ;

    std::any visitProg_row(mygrammarParser::Prog_rowContext* context)  ;

    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* context)  ;

public:
    std::vector<double> data;

};