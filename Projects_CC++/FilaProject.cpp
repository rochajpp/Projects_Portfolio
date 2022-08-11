#include<iostream>
#include<stdlib.h>
using namespace std;
struct knot{
	char value;
	struct knot * ptr;
};
struct knot * end;
struct knot * start;
int quantity = 0;
void Insert(char newValue){
	struct knot * pt;
	pt = new struct knot;
	(*pt).value = newValue;
	(*pt).ptr = NULL;
	if(end != NULL){
		(*end).ptr = pt;
	}else{
		start = pt;
	}
	end = pt;
	quantity ++;
}
void Remove(){
	if(start != NULL){
		struct knot * pt = start;
		start = (*start).ptr;
		if(start == NULL){
			end = NULL;
		}
		(*pt).ptr = NULL;
		quantity --;
	}else{
		cout << "Empty list!" << endl;
	}
}
void List(){
	struct knot * pt = start;
	for(int i = 0; i < quantity; i++){
		cout << "-----------" << endl;
		cout << "|    " << (*pt).value << "    |" << endl;
		cout << "-----------" << endl;
		cout << "     |     " << endl;
		cout << "     v     " << endl;
	
		pt = (*pt).ptr;
	}
	cout << "    NULL" << endl;
	system("pause");
}
int main(){
	int situation = 10;
	while(situation != 0){
		cout << "Select an option (Enter '0' to stop)" << endl;
		cout << "1-Insert" << endl;
		cout << "2-Remove" << endl;
		cout << "3-List" << endl;
		cout << ">> ";
		cin >> situation;
		system("cls");
		switch(situation){
			case 0:
				break;
			case 1:
				char value;
				cout << "Enter a value: ";
				cin >> value;
				Insert(value);
				system("cls");
				break;
			case 2:
				Remove();
				system("cls");
				break;
			case 3:
				List();
				system("cls");
				break;
			default:
				cout << "Error! Select a valid option." << endl;
				system("pause");
				system("cls");
				break;
		}
	}
}
