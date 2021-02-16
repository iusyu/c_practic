//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<boost/asio.hpp>


#include<unistd.h>

/** 
 * Test boost.asio网络库的实践 和试验
 *  小试牛刀
 *
 * 
 *
 *
 *
 *
 *
 */
using namespace std;


int main(int argc, char *argv[])
{
	using namespace boost::asio;
	io_service service;
	ip::tcp::endpoint ep( ip::address::from_string("127.0.0.1"), 2021);
	ip::tcp::socket sock(service);
	sock.connect(ep);

	return 0;
}



