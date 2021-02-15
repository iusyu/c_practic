//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<utility>
#include<random>
#include<ext/slist>
#include<thread>

#include<unistd.h>

/** 
 * Test std::thread
 * std::thread tt
 * tt.join()
 *
 * 
 *
 *
 *
 *
 *
 */
using namespace std;

void do_something(int b) {
    cout<<"this is a background task!! " <<endl;
    cout<<"give me "<<b<<" candies"<<endl;
}

class Background_task {
public:
	Background_task() = default;
	Background_task( int b):bb(b) {}
	void operator() (int bb){
		sleep(bb);	
		do_something(bb);
	}

	int bb;
};




int main(int argc, char *argv[])
{
	Background_task f;
	thread t(f);
	// thread t1(Background_task(3));
	// 这种写法要人命 编译器会自动识别为一个函数声明 
	
	thread t1 { Background_task(10)};
	thread t2 ( (Background_task()));

	do_something(11);
	t.join();
	t1.join();
	cout<<"all thread is over"<<endl;
	return 0;
}



