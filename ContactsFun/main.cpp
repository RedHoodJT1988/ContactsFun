#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, string> contacts;

	contacts["Jon Reeves"] = "313-454-6778";
	contacts["Bob Robinson"] = "734-555-5050";
	contacts["Sally Snorkle"] = "810-555-8888";

	for (auto element : contacts)
	{
		cout << element.first << " = " << element.second << endl;
	}

	return 0;
}