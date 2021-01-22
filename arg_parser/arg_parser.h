# ifndef string
	#define string 1
	#include <string.h>
# endif

enum Docs_Case{diary,secret,dump,memo};

class Parser{
	private:
		
	public:
		Parser(int argc,char **argv);
		~Parser();
		Docs_Case get_case();
};
