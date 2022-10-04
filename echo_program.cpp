#include<iostream>
#include<string>
using namespace std;

int main() {
	
	bool exit_flag = true;

	while (exit_flag) {
		string A;
		cin >> A;
		cout << A;
		if (A == "exit") {
			exit_flag = false;
		}
	}
	
}