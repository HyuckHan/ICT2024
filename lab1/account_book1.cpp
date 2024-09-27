#include <iostream>
using namespace std;

int main() {
	int budget = 300000;
	char command;
	int expense;


	while(1) {
		cout << "Your Budget: " << budget << endl;
		cout << "e: expense, q: quit > ";
		cin >> command;

		if(command == 'e') {
			cout << "Expense:";
			cin >> expense;
			
			budget = budget - expense;
			if(budget < 0) {
				break;
			}
			cout << "Processing..." << endl;;

		}
		else if (command == 'q') {
			break;
		}
	}

	return 0;
}
