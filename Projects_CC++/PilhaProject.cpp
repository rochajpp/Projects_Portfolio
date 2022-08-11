#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct knot{
	char value;
	struct knot * ptr;
};
int quantity = 0;
struct knot * top = NULL;
struct knot * ptActually;
void StackUp(char valueInsert){
	valueInsert = toupper(valueInsert);
	struct knot * newKnot;
	newKnot = new struct knot;
	(*newKnot).ptr = top;
	top = newKnot;
	(*top).value = valueInsert;
	quantity ++;
	cout << "Knot successfully stacked!" << endl;
	system("pause");
}
void Unstack(){
	struct knot * aux;
	aux = top;
	top = (*top).ptr;
	(*aux).ptr = NULL;
	delete(aux);
	quantity --;
}
void List(){
	struct knot * knotList = top;
	for(int i = 0; i < quantity; i++){
		cout << "---------------" << endl;
		cout << "|      " << (*knotList).value <<"      |" << endl;
		cout << "---------------" << endl;
		cout << "       |       " << endl;
		cout << "       v       " << endl;
		knotList = (*knotList).ptr;
	}
	cout << "      NULL" << endl;
	system("pause");
}
int main(){
	int choice = 8;
	while(choice != 0){
		cout << "Choose a option:" << endl << "(Enter 0 to exit)" << endl;
		cout << "1.Stack Up" << endl;
		cout << "2.Unstack" << endl;
		cout << "3.List" << endl;
		cout << ">> ";
		cin >> choice;
		system("cls");
		switch(choice){
			case 1:
				char valueStackUp;
				cout << "Enter a letter: ";
				cin >> valueStackUp;
				StackUp(valueStackUp);
				system("cls");
				break;
			case 2:
				Unstack();
				system("cls");
				break;
			case 3:
				List();
				system("cls");
				break;
			default:
				if(choice != 0){
					cout << "Error: Enter a valid option!";
				}else{		
			}
		}
	}
}
