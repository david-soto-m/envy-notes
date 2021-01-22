#include "arg_parser.h"

#include <iostream>
 
Parser::Parser(int argc, char **argv){
	std::string argv_s[argc-1];
	for(int i=1;i<argc;i++){
		argv_s[i-1]=std::string(argv[i]);
		std::cout<<argv_s[i-1]<<"\n";
	}
}
Parser::~Parser(){
	
}
