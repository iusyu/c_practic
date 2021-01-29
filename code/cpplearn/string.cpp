#include"string.hpp"

user_def::string::string(string& str){
	str = new char[str.size()];

}
