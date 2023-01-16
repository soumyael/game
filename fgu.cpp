#include <iostream>
#include<string.h>
using namespace std;

class Student {
	public:
		string name;
		int age;
		
		Student(string n, int a){
			cout << "this memory address" << this << endl;
			name = n;
			age = a;
			
		}
};
int main(int argc, char** argv) {
	Student s1("Ahmed",20);
	cout << "s1 memory address" << &s1 << endl;
	return 0;
}