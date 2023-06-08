#include"myVisitor.h"
#include "mygrammarLexer.h"
#include"mygrammarListener.h"

int main() {
	std::string express, tmp;
	std::cin >> tmp;
	while (tmp!="exit") {
		express += tmp;
		std::cin >> tmp;
	}
	std::stringstream stream(express);
	antlr4::ANTLRInputStream input(stream);
	mygrammarLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	mygrammarParser parser(&tokens);
	myVisitor visitor;
	visitor.visit(parser.prog());


	return 0;
}