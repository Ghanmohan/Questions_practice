#include<bits/stdc++.h>

using namespace std;

class Student {
public:
	string firstname;
	string lastname;
	string rollno;

	Student(string f, string l, string no) {
		firstname = f;
		lastname = l;
		rollno = no;
	}

	bool operator==(const Student &s) const { // overloading == operator
		return rollno == s.rollno;
	}

};

class HashFn { // creating Hashfn
public:
	size_t operator()(const Student &s) const {
		return s.firstname.length() + s.lastname.length();
	}
};


int main()
{
	unordered_map<Student, int, HashFn> um;
	Student s1("ghanmohan", "dangi", "12");
	Student s2("rahul", "gupta", "23");
	Student s3("ghanmohan", "dangi", "34");
	Student s4("rahul", "gupta", "33");

	//Add marks to all the students

	um[s1] = 100;
	um[s2] = 10;
	um[s3] = 120;
	um[s4] = 145;

	//finding the marks of students

	cout << um[s3] << endl;

	//iterate over all the elements

	for (auto s : um) {
		cout << s.first.firstname << " " << "rollno " <<  s.first.rollno << " Marks " << s.second << endl;
	}


}