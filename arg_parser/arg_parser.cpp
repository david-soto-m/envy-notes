#include "arg_parser.h"

#include <iostream> //momentarily
 
Parser::Parser(int argc, char **argv){
	std::string argv_s;
	if(argc<1){
		doctype=diary;
	}else{
		for(int i=1;i<argc;i++){
			argv_s=std::string(argv[i]);
			if ((argv_s=="-s")|(argv_s=="--secret")){
				doctype=secret;
			}else if((argv_s=="-d")|(argv_s=="--diary")){
				doctype=diary;
			}else if((argv_s=="-t")|(argv_s=="--TODO")){
				doctype=todo;
			}else if((argv_s=="-n")|(argv_s=="--note")){
				doctype=note;
			}else if((argv_s=="-r")|(argv_s=="--read")){
				is_dump=true;
			}else{
				doctype=diary;
			}
		}
	}
	if (is_dump && doctype==secret){
		doctype=diary;
	}
}
Parser::~Parser(){
	
}
