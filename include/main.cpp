#include"myVisitor.h"
#include "mygrammarLexer.h"
#include"mygrammarListener.h"

class test {

public:
	bool start_test(std::string str,std::unordered_map<std::string,double> correct_res) {
		std::stringstream stream(str);
		antlr4::ANTLRInputStream input(stream);
		mygrammarLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		mygrammarParser parser(&tokens);
		myVisitor visitor;
		visitor.visit(parser.prog());
		std::unordered_map<std::string, double> res = visitor.getvariables();
		for (auto it : res) {
			if (res[it.first] != correct_res[it.first])return false;
		}
		return true;
	}
};

int main() {
	std::string test1="a=2;res=a-2;ress=res;tmp=2*(4/(0.5+1.5));",
		test2=""
		;
	std::unordered_map<std::string, double> r1 = { {"a",2},{"res",0},{"ress",0} ,{"tmp",4}}
		
		;

	test t;
	std::cout << t.start_test(test1,r1);


	return 0;
}