#include<iostream>
#include<string>
#include <memory>


class HtmlRender{
public:
	HtmlRender() {}
	virtual std::string rendering(){
		return "";
	}
	virtual ~HtmlRender(){
	}
};

class MainPageRender:public HtmlRender{
public:
	MainPageRender(){} 
	virtual std::string rendering() override {
		return "this is Main Page Html Render";
	}
	virtual ~MainPageRender(){
	}
};


class HtmlRenderFactory{
public:
	HtmlRenderFactory() {} 
	virtual HtmlRender* getRender(){
	}
	virtual ~HtmlRenderFactory(){
	}
};

class MainPageRenderFactory:public HtmlRenderFactory{
public:
	MainPageRenderFactory() {}
	virtual HtmlRender* getRender() override{
		return new MainPageRender();
	}
	virtual ~MainPageRenderFactory(){
	}
};




class Triger{
public:
	Triger() = default;
	Triger(HtmlRenderFactory* hrf):renderfactory(hrf) {}

	virtual int main(){
		// get render html
		std::shared_ptr<HtmlRender> prender (renderfactory->getRender());

		std::cout<< (*prender).rendering() <<std::endl;
		return 0;
	}

	virtual ~Triger(){
	}

private:
	HtmlRenderFactory *renderfactory;
};


int main(int argc, char* argv[]) {
	MainPageRenderFactory mainpageFact;
	Triger triger(&mainpageFact);
	return triger.main();
}

