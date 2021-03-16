# ifndef STR
	#define STR 1
	#include <string>
	#include <sstream>
# endif
# ifndef MN
	#define MN 1
	#include "../main.h"
# endif

class Parser{
	private:
		bool is_help=false, secret_message=false;
		docs doctype=note;
		priority_level priority=inconsequential;
	public:
		
		Parser(int argc,char **argv);
		docs get_doctype();
		priority_level get_priority();
};
