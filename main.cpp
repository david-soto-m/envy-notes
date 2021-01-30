#include <iostream>
# ifndef MN
	#define MN 1
	#include "main.h"
# endif
#include "arg_parser/arg_parser.h"


int main(int argc, char **argv){
	Parser arguments(argc,argv);
	std::cout<<arguments.get_doctype()<<"\n";
	if(arguments.get_doctype()==todo){
		std::cout<<arguments.get_priority()<<"\n";
	}
	return 0;
}
