#include <iostream>
#include <string>

using namespace std;

class ToDo {
private:
	string *list;
	int length = 0;
	int next = 0;
public:
	ToDo(); //default constructor

	ToDo(int x); 

	~ToDo(); //destructor

	void add(string i);
	
	void done();

	void print();
};
