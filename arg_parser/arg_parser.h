# ifndef string
	#define STR 1
	#include <string>
# endif

enum Docs_Case{diary,secret,dump,memo};

class Parser{
	private:
		
	public:
		Parser(int argc,char **argv);
		~Parser();
		Docs_Case get_case();
};
