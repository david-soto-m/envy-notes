#include <iostream>
#include "arg_parser/arg_parser.h"

int main(int argc, char **argv){
	Parser args(argc,argv);
	std::cout<<"Hi FBI\n";
	return 0;
}
