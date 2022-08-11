#include<iostream>
#include<locale.h>
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
	//ant = ptList;
	pont = NULL;
	struct knot * pt = (*ptList).ptr;
	while(pt != NULL){
		cout << "a" << endl;
		if((*pt).key < ky){
			cout << "o" << endl;
			cout << (*pt).key << endl;
			//ant = pt;
			pt = (*pt).ptr;
		}else{
			if((*pt).key == ky){
				pont = pt;
			}
			pt = NULL;
		}
	}
//	ptSearch = NULL;
//	struct knot * ptr = ptList;
//	while(ptr != NULL){
//		if((*ptr).key < ky){
//			ptr = (*ptr).ptr;
//		}else if((*ptr).key == ky){
//			ptSearch = ptr;
//			ptr = NULL;
//			cout << "Encontrado" << endl;
//		}
//	}
}
void Insert(int ky){
	Search(ky);
	if(pont == NULL){
		struct knot * pt = new struct knot;
		(*pt).ptr = (*ant).ptr;
		(*ant).ptr = pt;
		(*pt).key = ky;
	}
//	if(quantity == 0){
//		struct knot * newKnot = new struct knot;
//		(*newKnot).key = ky;
//		(*newKnot).ptr = NULL;
//		(*ptList).ptr = newKnot;
//		previousKnot = newKnot;
//		quantity ++;
//		cout << "Inserted knot!" << endl;
//		system("pause");
//	}else{
//		Search(ky);
//		if(ptSearch != NULL){
//			cout << "Key is already in use" << endl;
//			system("pause");
//		}else{
//			struct knot * pt = new struct knot;
//			(*previousKnot).ptr = pt;
//			(*pt).key = ky;
//			(*pt).ptr = NULL;
//			previousKnot = pt;
//			quantity ++;
//			cout << "Inserted knot!" << endl;
//			system("pause");
//		}
//	}
}
//void Alternate(int ky, int newky){
//	Search(ky);
//	if(ptSearch != NULL){
//		(*ptSearch).key = newky;
//	}else if(quantity == 0){
//		cout << "Empty list!";
//	}else{
//		cout << "Inexistent key!";
//	}
//}
void Remove(int ky){
}
//void List(){
//	struct knot * pont = ptList;
//	for(int i = 0; i <= quantity; i++){
//		cout << "----------" << endl;
//		cout << "|    " << (*pont).key << "    |" << endl;
//		cout << "----------" << endl; 
//		pont = (*pont).ptr;
//	}
//}
int main(){
	(*ptList).ptr = NULL;
	Insert(1);
	Insert(2);
	Insert(3);
	Search(3);
	cout << (*pont).key << endl;
}
