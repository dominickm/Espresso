using namespace std;

class ESObject
{
private:
	string className;
public:
	ESObject(string _name);

	string getClassName() { return className; }
};