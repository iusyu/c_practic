#ifndef STRING_HPP
#define STRING_HPP
#include<initializer_list>
#include<memory>


namespace user_def{
class string{
public:
	string() = default;
	string(string& str);
	string(string&& str);
	string(const char* cstr);
	string(std::initializer_list<char*> l);
	string& operator=(string& strs);
	string& operator=(string&& strs);
	char operator[](unsigned indx);


	~string();
private:
	std::unique_ptr<char> str;
};
}


#endif /* __STRING_HPP */




