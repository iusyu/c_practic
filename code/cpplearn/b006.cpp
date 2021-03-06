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
	io_service ioserv;
	ip::tcp::resolver res(ioserv);
	ip::tcp::resolver::query qurr(argv[1], argv[2]);
	ip::tcp::resolver::iterator it = res.resolve(qurr);
	ip::tcp::endpoint ep {*it};
	cout<<argv[1]<<"/"<<argv[2]<<":"<<ep.address().to_string()<<endl;
	return 0;
}



