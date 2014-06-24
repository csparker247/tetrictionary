//tetrictionary
#include <string>
#include <set>
#include <iostream>
#include <fstream>
using namespace std;

class Dictionary {
		set<string> _words;	
	public:
		Dictionary() {
		    ifstream input ("/usr/share/dict/words");
		    for (string line; getline(input, line);) {_words.insert(line);}
		}

		bool contains(string const& word) const {return _words.count(word);}

		char getWord(int length) {
			char word[16] = "bug";
			return word;
		}
};

//Setting up some variables
Dictionary mainDict;
int usr_input;
char dict_output[16];

int main () {
	cout << "Enter a length: ";
	cin >> usr_input;
	cout << usr_input;
	
	dict_output = mainDict.getWord(usr_input);
	cout << dict_output;
}