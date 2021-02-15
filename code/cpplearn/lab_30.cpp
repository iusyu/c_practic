//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<utility>
#include<random>
#include<ext/slist>
#include<thread>


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

void do_something() {
    cout<<"this is a background task!! " <<endl;
}

class Background_task {
    Background_task() = default;
    int operator() (){
        do_something();
    }
};




int main(int argc, char *argv[])
{
    thread t(Background_task);
    t.join();
	return 0;
}



