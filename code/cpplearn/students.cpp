#include"students.hpp"
#include<iomanip>


inline
const std::string& student::name() const {
	return _name;
}

inline
const std::string& student::id() const {
	return _id;
}

inline
void student::set_name( const std::string& nn) {
	_name = nn;
}

inline
void student::set_id( const std::string& ii) {
	_id = ii ;
}


inline
std::ostream& operator<<(std::ostream &out, const student &rhs) {
	out<<std::setw(5)<<"Student Name:"<<rhs.name()<<std::endl;
	return out<<std::setw(5)<<"id:"<<rhs.id()<<std::endl;
}

inline
bool operator==(const student &lhs, const student &rhs) {
	return lhs.name() == rhs.name() && lhs.id() == rhs.id();
}


