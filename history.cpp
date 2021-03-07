#include "header.h"

using namespace std;

int execute_history(char **input_args){
	string line;
	queue<string> commands; 
	ifstream myfile ("history.txt");
	if (myfile.is_open()){
		while ( getline (myfile, line) ) {
			commands.push(line);
			if(commands.size() > 10) commands.pop();
		}
		myfile.close();

		while(!commands.empty()){
			cout<<commands.front()<<endl;
			commands.pop();
		}

	}
	else cout << "Unable to show history\n"; 

	return 1;
}