#include <cstdlib>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]){
	string line;
	queue<string> commands;
	ifstream myfile ("/home/blackreaper/Documents/Shell/history.txt");
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
	else{
		cout << "Unable to show history\n";
		exit(-1);	
	}

	exit(0);
}
