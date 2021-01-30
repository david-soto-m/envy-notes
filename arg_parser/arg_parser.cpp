#include "arg_parser.h"

#include <iostream> //momentarily
 
Parser::Parser(int argc, char **argv){
	std::string argv_s;
	if(argc>1){
		for(int i=1;i<argc;i++){
			argv_s=std::string(argv[i]);
			if (argv_s[0]=='-'){
				if(((argv_s[1]!='-')&&(argv_s.find('s')!=argv_s.npos))||(argv_s=="--secret")){
					doctype=secret;
				}if(((argv_s[1]!='-')&&(argv_s.find('d')!=argv_s.npos))||(argv_s=="--diary")){
					doctype=diary;
				}if(((argv_s[1]!='-')&&(argv_s.find('t')!=argv_s.npos))||(argv_s=="--TODO")){
					doctype=todo;
					if (i+1<=argc){
						std::string spy=std::string(argv[i+1]);
						std::stringstream stream;
						stream<<spy;
						int type;
						if((stream>>type )&& (-1<type)&&(type<5)){
							priority=priority_level(type);
							i++;
						}
					}
				}if(((argv_s[1]!='-')&&(argv_s.find('n')!=argv_s.npos))||(argv_s=="--note")){
					doctype=note;
				}if(((argv_s[1]!='-')&&(argv_s.find('h')!=argv_s.npos))||(argv_s=="--help")){
					is_help=true;
				}
			}
		}
	}
	if (is_dump && doctype==secret){
		secret_message=true;
		doctype=diary;
	}
}
docs Parser::get_doctype(){
	return doctype;
}
priority_level Parser::get_priority(){
	return priority;
}
