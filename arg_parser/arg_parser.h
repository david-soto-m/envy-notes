# ifndef string
	#define STR 1
	#include <string>
# endif

typedef enum Docs_Case{diary,secret,note,todo} docs;

class Parser{
	private:
		bool is_dump=false;
		docs doctype;
	public:
		Parser(int argc,char **argv);
		~Parser();
		docs get_doctype();
};
