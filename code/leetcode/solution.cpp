#include<ctime>
#include<cstdlib>
#include<numeric>
#include<cmath>
#include<list>
#include<forward_list>
#include<iomanip>


#include<iostream>


#include<vector>
//#include"q35.cpp"

#include"solution.hpp"

template<typename T>
void generate_rand_seq(T* tmp, std::size_t n, std::size_t top_bu){
	std::srand(std::time(nullptr));
	for(std::size_t i=0; i<n; ++i){
		tmp->push_back( (std::rand() % top_bu));
	}
}





template<typename T>
void print_vect(const std::vector<T>& v){
	std::cout<<"vector has:"<<std::endl;
	for(auto tmp: v){
		std::cout<<" "<<tmp<<" ";
	}
	std::cout<<std::endl;
}

std::size_t binary_searching(int x, const std::vector<int>& da) {
	int left = 0;
	int right = da.size();
	int middle = 0;
	while ( left < right) {
		middle = (left+right) / 2;
		if(da[middle] > x)
			right = middle ;
		else if(da[middle] <x )
			left = middle -1 ;
		else
			return middle;
	}
	return middle;
}




//移除元素，指定元素就移除
// 若用暴力求解，则可以达到O(n^2）
// 使用双指针来达到删除某个指定元素的目的，其时间复杂度为O(n) 空间复杂度 O(1)

void _doule_pinter_remove(std::vector<int>& vi, int x){
	auto tmp1 = vi.begin();
	auto tmp2 = vi.begin();
	while( tmp1 != vi.end()){
		if(*tmp1 == x){
			tmp1++;
			*tmp2 = *tmp1;
		} else {
			tmp1++;tmp2++;
			*tmp2 = *tmp1;
		}
	}
	auto dist = tmp1 - tmp2;
	for (std::size_t t = 0; t<dist; ++t){
		vi.pop_back();
	}
}

void test_double_pointer_remove(){
	std::vector<int> vi;
	generate_rand_seq<std::vector<int>>(&vi,20, 5);
	print_vect(vi);
	_doule_pinter_remove(vi, 2);

	auto re = std::accumulate(vi.begin(),vi.end(),0);
	std::cout<<"the accumulate amswer is : "<<re<<std::endl;
	print_vect(vi);
	

}


//
//  1 2 3 4 5 5 6 7 8 9 5 
//
//
//
//
//
//


/**************************** 窗口移动问题——双指针解决问题*****************************
 *
 *
 *
 *
 *
 */

void shift_window(std::vector<std::vector<int>>& vvi, int  x){
	std::vector<int> vi;
	auto tmp1 = vi.begin();
	auto tmp2 = vi.begin();

	while(tmp1 != vi.begin()){
		if(std::accumulate(tmp1,tmp2,0)>x){
		}
	}


}


/*   Q:螺旋的填满正方形或方形矩阵
 *
 *
 *
 *
 */


void fill_squre(std::vector<std::vector<int>>& vvi){
	//行和列的边界上限
	std::size_t row_top = vvi.size();
	std::size_t col_top = vvi[0].size();
	
	const std::size_t crow_top = vvi.size();

	// 行和列的下限
	std::size_t row_low = 0;
	std::size_t col_low = 0;

	// 两个变量分别是只想添加的行和列
	std::size_t row_point = 0;
	std::size_t col_point = 0;
	int counting = 1;

	while( (row_point) <= (crow_top /2)){

		// 每个for循环对把col指针先前一格
		for(; col_point< col_top-1; col_point++)
			vvi[row_point][col_point] = counting++;
		for(; row_point < row_top-1; row_point++)
			vvi[row_point][col_point] = counting++;

		// 和上面两个操作是镜像的，上面两个加到top,后面两个减到下限
		for(; col_point > col_low ; col_point --)
			vvi[row_point][col_point] = counting++;
		// 这两个操作 顺序很重要， 还有low的判断！！！！
		for(; row_point > row_low; row_point--)
			vvi[row_point][col_point] = counting++;

		//循环指针 每一圈的起点都在正对角线上
		row_point++;
		col_point++;

		//上下边界随着每次循环变窄
		row_top--;
		col_top--;

		row_low++;
		col_low++;

	}

	if( crow_top % 2)
		vvi[crow_top/2][crow_top/2] = counting;
	


}

void init_squre(std::vector<std::vector<int>>& vv, int x){
	for (std::size_t i = 0; i < x; ++i) {
		std::vector<int> vc;
		for (std::size_t j = 0; j < x; ++j) {
			vc.push_back(0);
		}
		vv.push_back(vc);
	}
	
}

void print_squre(std::vector<std::vector<int>>& vvik){
	
	std::cout<<"---------------------------------"<<std::endl;

	for( auto tmp:vvik){
		for( auto tmpp:tmp){
			std::cout<<std::setw(5)<<tmpp;
		}
		std::cout<<std::endl;
	}
}




void test_fill_squre() {
	std::vector<std::vector<int>> vvik;
	
	init_squre(vvik,11);
	std::vector<std::vector<int>> vvl;
	init_squre(vvl,9);


	print_squre(vvik);

	fill_squre(vvik);
	print_squre(vvik);
	fill_squre(vvl);
	print_squre(vvl);


	
}



// 链表反转;

// 递归反转链表







// 链表找环，找环的入口
//
//
//
//

void find_circle(std::forward_list<int>::iterator lib, std::forward_list<int>::iterator lie){
	
}





void Solution::solution(void) {
	std::cout<<"this is answer > > >"<<std::endl;	
	//test_double_pointer_remove();
	test_fill_squre();
}

