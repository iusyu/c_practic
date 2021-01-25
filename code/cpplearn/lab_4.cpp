#include<vector>
#include<iostream>



class Atack {
	public:
	Atack() = default;
	virtual int atack( std::size_t times)  {
		return 0;
	}
	virtual ~Atack() = default;
};



class Knife: public Atack{
	public:
		Knife() = default;
		int atack(std::size_t times) override {
			return AC*times;
		}
	~Knife() = default;

	private:
	const int AC = 40;

};



class Sword:public Atack{
	public:
		Sword() = default;
		int atack( std::size_t times) override {
			return 70*times;
		}
		~Sword() = default;

};


class TashitaSword: public Atack {
	public:
		TashitaSword() = default;
		int atack(std::size_t times) override {
			return 90*times;
		}
		~TashitaSword() = default;
};


class Cure {
	public:
	Cure() = default;

	virtual int getCure(std::size_t times) {
		return 0;
	}

	~Cure() = default;
};



class HollyWater : public Cure {
	public:
		HollyWater() = default;

		int getCure(std::size_t times) override {
			return 20*times;
		}

		~HollyWater() = default;

};




class people {
	public:
		people():HP(1000) {}
		int getHurt(Atack& hrts, std::size_t tm){
			HP -= hrts.atack(tm);
			return HP;
		}

		int getCureBY(Cure& recover, std::size_t times) {
			HP += recover.getCure(times);
			return HP;
		}
		

		~people() {
		}



	private:
		int HP;

};




int main(int argc, char *argv[])
{
	Knife k1;
	Sword s1;
	TashitaSword ts1;
	HollyWater hw;
	people jackma;
	std::cout<<"get hurted by knife, HP:"<<jackma.getHurt(k1, 2)<<std::endl;
	std::cout<<"get hurted by Sword, HP:"<<jackma.getHurt(s1, 3)<<std::endl;
	std::cout<<"get hurted by TashitaSword, HP:"<<jackma.getHurt(ts1, 2)<<std::endl;
	std::cout<<"get cured by HollyWater, HP:"<<jackma.getCureBY(hw, 2)<<std::endl;






	return 0;
}





