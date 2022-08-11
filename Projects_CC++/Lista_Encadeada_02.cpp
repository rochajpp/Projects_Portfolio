#include<iostream>
#include<stdlib.h>
using namespace std;
struct knot{
	int key;
	struct knot * ptr;
};
struct knot * ptList = new struct knot;
struct knot * pont;
struct knot * ant;
void Search(int ky){
	ant = ptList;
	pont = NULL;
	struct knot * pt = (*ptList).ptr;
	while(pt != NULL){
		if((*pt).key < ky){
			ant = pt;
			pt = (*pt).ptr;
		}else{
			if((*pt).key == ky){
				pont = pt;
			}
			pt = NULL;
		}
	}
}

void Insert(int ky){
	Search(ky);
	if(pont == NULL){
		struct knot * pt = new struct knot;
		(*pt).ptr = (*ant).ptr;
		(*ant).ptr = pt;
		(*pt).key = ky;
	}
}
void Remove(int ky){
	if((*ptList).ptr == NULL){
		cout << "Empty list!" << endl;
		system("pause");
	}else{
		Search(ky);
		if(pont != NULL){
			(*ant).ptr = (*pont).ptr;
			(*pont).ptr = NULL;
			delete(pont);
			cout << "Key removed sucessfully!" << endl;
			system("pause");
		}
	}
}
void Change(int ky, int newKy){
	Search(ky);
	if(pont == NULL){
		cout << "Inexistent key!" << endl;
		system("pause");
	}else{
		(*pont).key = newKy;
		cout << "Key changed sucessfully!" << endl;
		system("pause");
	}
}
void List(){
	struct knot * pt = (*ptList).ptr;
	while(pt != NULL){
		cout << "----------" << endl;
		cout << "|   " << (*pt).key << "   |"<< endl;
		cout << "----------" << endl;
		cout << "     |     " << endl;
		cout << "     v     " << endl;
		pt = (*pt).ptr;
	}
	cout << "    NULL     " << endl;
	system("pause");
}
int main(){
	(*ptList).ptr = NULL;
	int situation = 10;
	while(situation != 0){
		cout << "Select a option: " << endl;
		cout << "(Enter '0' to stop!)" << endl;
		cout << "1.Insert" << endl;
		cout << "2.Remove" << endl;
		cout << "3.Change" << endl;
		cout << "4.List" << endl;
		cout << ">> ";
		cin >> situation;
		system("cls");
		switch(situation){
			case 0:
				break;
			case 1:
				int valueI;
				cout << "Enter a value to insert: ";
				cin >> valueI;
				Insert(valueI);
				system("cls");
				break;
			case 2:
				int valueR;
				cout << "Enter a value to remove: ";
				cin >> valueR;
				Remove(valueR);
				system("cls");
				break;
			case 3:
				int valueC, newValue;
				cout << "Enter a value to change: ";
				cin >> valueC;
				system("cls");
				cout << "Enter the new value: ";
				cin >> newValue;
				Change(valueC, newValue);
				system("cls");
				break;
			case 4:
				List();
				system("cls");
				break;
			default:
				cout << "Error! Enter a valid option." << endl;
				system("pause");
				system("cls");
		}
	}
}
