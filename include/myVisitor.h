#pragma once


#include "mygrammarVisitor.h"

class  myVisitor : public mygrammarVisitor {
    std::any visitInt(mygrammarParser::IntContext* context) {
        std::cout<< "visit Int" << std::endl;
        return 0;
    };

    std::any visitIntDOTint(mygrammarParser::IntDOTintContext* context) {
        std::cout << "visit IntDotInt" << std::endl;
        return 0;
    };

    std::any visitVarISexpr(mygrammarParser::VarISexprContext* context) {
        std::cout << "visit ISexpr" << std::endl;
        return 0;
    };

    std::any visitLexprR(mygrammarParser::LexprRContext* context) {
        std::cout << "visit LexprR" << std::endl;
        return 0;
    };

    std::any visitPrint_expr(mygrammarParser::Print_exprContext* context) {
        std::cout << "visit print_expr" << std::endl;
        visit(context->expr());
        return 0;
    };

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* context) {
        std::cout << "visit ExprAddExpr" << std::endl;
        return 0;
    };

    std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* context) {
        std::cout << "visit ExprMULexpr" << std::endl;
        return 0;
    };

    std::any visitEvar(mygrammarParser::EvarContext* context) {
        std::cout << "visit Evar" << std::endl;
        return 0;
    };

    std::any visitEfloat(mygrammarParser::EfloatContext* context) {
        std::cout << "visit Efloat" << std::endl;
        return 0;
    };

    std::any visitExpr_sep(mygrammarParser::Expr_sepContext* context) {
        std::cout << "visit Expr_sep"<< std::endl;
        visit(context->expr());
        return 0;
    };

    std::any visitProg_row(mygrammarParser::Prog_rowContext* context) {
        std::cout << "visit Prog_row" <<context->row()->getText()<< std::endl;
        visit(context->prog());
        visit(context->row());
        return 0;
    };

    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* context) {
        std::cout << "visit OneLineProg" <<context->row()->getText()<< std::endl;
        visit(context->row());
        return 0;
    };

public:
    std::vector<double> data;

};