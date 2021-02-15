#ifndef __STUDENTS_H__
#define __STUDENTS_H__
#include<string>
#include<iostream>

class student;
std::ostream& operator<<(std::string &, const student &);

class student {
public:
	student() = default;
	student(const std::string &nn, const std::string& ii):_name(nn), _id(ii) {}
	student(const student &stu);
	student& operator=(const student& stu);
	student& operator+=(const student &rhs);

	const std::string& name() const;
	const std::string& id() const;
	void set_name(const std::string&);
	void set_id(const std::string &);
	

private:
	std::string _name;
	std::string _id;

};

std::ostream& operator<<(std::ostream &, const student&);
bool operator==(const student &, const student&);


#endif /* __STUDENTS_H__ */
