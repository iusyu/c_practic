#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;



#define LIMITE 5



void file_out(ostream& os, double fo, const double fe[], int n);

int main(int argc, char *argv[])
{
	ofstream fso;
	const char* fn = "ep-data.txt";
	fso.open(fn);
	if(!fso.is_open()){
		cout<<"Can't open "<<fn<<" . Bye.\n";
		exit(EXIT_FAILURE);
	}

	double objective;
	cout<<"please input ::"<<endl;
	cin>>objective;
	double eps[LIMITE];

	cout<<"pelse inpute some five data: "<<endl;
	for (int i=0; i<LIMITE ; i++){
		cin>>eps[i];
	}


	file_out(cout, objective, eps, 5);
	file_out(fso,objective, eps,5);

	cout<<"done!"<<endl;





	return 0;
}



void file_out(ostream& os, double fo, const double fe[], int n){
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);
	os.precision(0);
	os<<"Focal : "<<fo<< "mm \n";
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(12);
	os<<"f.1. eyspice:";
	os.width(15);
	os<<"maglige sent"<<endl;
	for(int i = 0; i< n; i++){
		os.width(12);
		os<<fe[i];
		os.width(15);
		os<<int(fo/fe[i] +0.5)<<endl;
	}

	os.setf(initial);
}




