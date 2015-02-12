
#include <iostream>
#include "shell.hxx"

using namespace std;

int main(int argc, char const *argv[])
{
	if(argc < 2) {
		return 1;
	} else {
		string output;
		int result = shell::exec(string("/usr/local/bin/octave --silent ")+argv[1], output);
		if(result != 0) {
			cout << "Invalid program" << endl;
			return 1;
		} else {
			cout << output << endl;
			return 0;
		}
	}
	return 0;
}