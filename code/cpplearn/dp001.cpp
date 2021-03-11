
//this is line code to 
#include<iostream> 
#include<vector>
#include<string>
#include<iomanip>
#include<boost/asio.hpp>
#include<memory>


#include<unistd.h>

/** 
 * 测试base class has a 
 * 一个温度更新
 *
 * 
 *
 *
 *
 *
 *
 */
using namespace std;

class Board;
class BoardImp;
class WetherNotice;
class WetherNoticeImp;
class WetherManage;
class WetherManageImp;

double get_temp();
double get_morst();
double get_wind();

class Board {
public:
	virtual void update();
};

class BoardImp:public Board {
	void update() override ;
};

void BoardImp::update() {
}

class WetherManage{
public:
	virtual void refreshData();
	

};

class WetherManageImp: public WetherManage {
public:
	virtual void refreshData() override;
private:
	double tempture;
	double morst;
	double wind;

	WetherNotice* wetherNoticer;
};

void WetherManageImp::refreshData() {
	tempture = get_temp();
	morst = get_morst();
	wind = get_wind();

	wetherNoticer->updateAll();
}

class WetherNotice{
public:
	virtual void registeObervser(Board* reg) = 0;
	virtual void removeObervser(Board* reg) = 0;
	virtual void modifyObervser(Board* reg) = 0;
	virtual void updateAll() = 0;
};


class WetherNoticeImp: public WetherNotice {
public:
	void registeObervser(Board* reg) override;
	void removeObervser(Board* reg) override;
	void modifyObervser(Board* reg) override;

	void updateAll() override;
private:
	vector<Board*> suber;
};



void WetherNoticeImp::registeObervser(Board* reg) {
	suber.push_back(reg);
}
void WetherNoticeImp::updateAll() {
	for_each(suber.cbegin(), suber.cend(), [](auto &p) {
			p->update();});

}
int main(int argc, char *argv[])
{
	return 0;
}



