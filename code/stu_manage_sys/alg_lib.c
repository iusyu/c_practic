

#include"alg_lib.h"




/*
 * 找到合适位置插入数据
 *
 */
int Insert(iterator itr, Data daa, compare comp){
	ptrToNode tmp_pre = itr.head;
	ptrToNode tmp = itr.head->next;

	while( tmp != NULL){
		if( comp(daa,tmp->info)){
			break;
		} else {
			forward_pointer(&tmp);
			forward_pointer(&tmp_pre);
		}
	}
	if( !tmp)
		return FAIL;
	return add(tmp, daa);

}









