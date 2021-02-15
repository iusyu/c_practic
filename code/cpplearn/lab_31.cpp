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
	for( size_t i = 0; i < b; i++ ) {
		sleep(b);
    		cout<<"this is a loop [ background task !! " <<endl;
    		cout<<"give me "<<b<<" candies"<<endl;
	}
}


void do_something_1(int b) {
	sleep(b);
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



class thread_gurd {
public:
	thread_gurd( thread& _t):t(_t) {}
	
	~thread_gurd() {
		if( !t.joinable() ) {
			cout<<" thread has join() "<<endl;
		} else {
			t.join();
		}
	}

	thread_gurd( thread_gurd& ) = delete;
	thread_gurd& operator= (thread_gurd const & ) = delete;


	thread& t;
};

void getThreadWork( int a) {
	thread t1 { do_something_1, a};
	thread_gurd tg1(t1);
	sleep(a);
	thread t2 { do_something, 3 };
	t2.detach();

}



int main(int argc, char *argv[])
{
	getThreadWork(2);
	cout<<"all thread is over"<<endl;
	return 0;
}



