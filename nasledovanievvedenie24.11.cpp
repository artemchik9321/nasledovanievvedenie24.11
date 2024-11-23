// nasledovanievvedenie24.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person() 
	{
		age = 0;
	};
	Person(const char* _name, int _age) 
	{
		name.append(_name);
		age = _age;
	};
	void Input() 
	{
		cout << "enter you name ";
		getline(cin, name);
		cout << "enter you age ";
		cin >> age;
	}
	void Print() 
	{
		cout << "name " << name << endl << "age " << age << endl;
	}

};

class Teacher :public Person
{
	string sch;
	string subj;
public:
	Teacher() :Person() {}
	Teacher(const char* n, int _a, const char* _subj, const char* sch) :Person(n, _a) 
	{
		this->sch.append(sch);
		this->subj.append(_subj);
	}
	void Input() 
	{
		Person::Input();
		cout << "enter you school";
		getline(cin, sch);
		cout << "enter you subject";
		getline(cin, subj);
		cout << endl;
	}
	void Print() 
	{
		Person::Print();
		cout << "school " << sch << endl << "subject " << subj << endl;
	}
};

class Doctor :public Person
{
	string hosp;
	double salary;
public:
	Doctor() :Person() { salary = 0; }
	Doctor(const char* n, int _a, double salary, const char* hosp) :Person(n, _a) 
	{
		this->hosp.append(hosp);
		this->salary = salary;
	}
	void Input() 
	{
		Person::Input();
		cout << "enter you hospital ";
		getline(cin, hosp);
		cout << "enter you salary ";
		cin >> salary;
		cout << endl;
	}
	void Print() 
	{
		Person::Print();
		cout << "hospital " << hosp << endl << "salary " << salary << endl;
	}
};

class Doctor :public Person
{
	string sch;
	double salary;
public:
	Doctor() :Person() { salary = 0; }
	Doctor(const char* n, int _a, double salary, const char* sch) :Person(n, _a) 
	{
		this->sch.append(sch);
		this->salary = salary;
	}
	void Input() 
	{
		Person::Input();
		cout << "enter you hospital ";
		getline(cin, sch);
		cout << "enter you salary ";
		cin >> salary;
		cout << endl;
	}
	void Print() {
		Person::Print();
		cout << "school " << sch << endl << "salary " << salary << endl;
	}
};

class Student :public Person
{
	string Academy;
public:
	Student() :Person() {}
	Student(const char* _name, int _age, const char* _academy) :Person(_name, _age) 
	{
		Academy.append(_academy);
	}
	void Input()
	{
		Person::Input();
		cout << "academy ";
		cin >> Academy;
	}
	void Print() 
	{
		Person::Print();
		cout << "academy " << Academy << endl;
	}
};
int main()
{
	Student a("anastasia", 22, "ITStep Academy");
	a.Print();
	a.Input();
	a.Print();

	Teacher b("anastasia", 22, "ITStep Academy", "222");
	a.Print();
	a.Input();
	a.Print();
}