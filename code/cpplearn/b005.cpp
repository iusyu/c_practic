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
	io_service service;
	for ( size_t i = 1; i < argc; i+=2 ){
		ip::tcp::resolver res(service);
		ip::tcp::resolver::query qq ( argv[i], argv[i+1]?argv[i+1]:"80");
		ip::tcp::resolver::iterator ter = res.resolve( qq );
		ip::tcp::endpoint ep = *ter;
		cout<<argv[i]<<":"<<argv[i+1]<<" "<<ep.address().to_string()<<endl;
	}
	ip::tcp::resolver res ( service );
	ip::tcp::resolver::query query("www.baidu.com","80");
	ip::tcp::resolver::iterator iter = res.resolve( query );
	ip::tcp::endpoint ep = *iter;
	cout<< "www.baidu.com is : " << ep.address().to_string() << endl;
	return 0;
}



