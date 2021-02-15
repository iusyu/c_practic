//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<boost/asio.hpp>
#include<memory>


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
	typedef std::shared_ptr<ip::tcp::socket> socket_ptr;
	io_service service;
	ip::tcp::endpoint ep( ip::tcp::v4(), 2001);
	ip::tcp::acceptor acc(service, ep);
	while ( true ) {
		socket_ptr sock( new ip::tcp::socket(service));

	}
	return 0;
}



