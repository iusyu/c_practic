
#include<stdio.h>
#include<stdlib.h>
#include"obLinkedList.h"



/*
 * 向前移动ptr所指
 *
 */
void forward_pointer(ptrToNode* ptr){
	(*ptr) = (*ptr)->next;
}

/*
 * 删除指定prev所指后面 curr所指的node
 *
 */
Data delete_node(ptrToNode prev, ptrToNode curr){
	ptrToNode tmp = prev->next;
	Data tmp_data = tmp->info;
	prev->next = curr->next;
	free(tmp);
	return tmp_data;
}

/*
 * 在两指针之间添加node
 *
 */
int add(ptrToNode pos, Data d){
	// 判断有无data输入，无则返回函数
	if(d == NULL){
		perror("_add(.... , NULL)...Data haven give");
		return FAIL;
	}
	ptrToNode tmp = (ptrToNode)calloc(1,sizeof(dNote));
	if(tmp == NULL){
		perror("dNote alloc fail!");
		return FAIL;
	}
	// 顺利执行
	tmp->info = d;
	tmp->next = NULL;

	tmp->next = pos->next;
	pos->next = tmp;

	return SUCEE;
}

/*
 * 在链表对象所指链表的头部插入node
 *
 */
int _add_front(olist* self, Data d){
	int cond = add(self->head, d);
	if(FAIL == cond){
		perror(" add note front is fail");
		return cond;
	}
	
	self->size++;
	return cond;
}

/*
 * 在链表对象所指链表的尾部插入 node
 *
 */
int _add_back(olist* self, Data d){
	int cond = add(self->tail,d);
	if( FAIL == cond ){
		perror("add note is fail!!\ni");
		return cond;
	}
	self->tail = self->tail->next;
	self->size++;
	return cond;
}

/*
 * 删除符合compare函数的data 然后用 detor释放 date noe
 *
 */
int _delete(olist* self, Data d ,compare comp, detor destory){
	if( !(self!= NULL && d!=NULL && comp!=NULL && destory!=NULL)){
		perror("there have absent parameter!!");
		return FAIL;
	}

	ptrToNode tmp_pre = self->head;
	//ptrToNode tmp = NULL;
	//tmp = tmp_pre->next;  // 这儿debug出 这两变量值都不一样 如图所示
	//ptrToNode tmp = self->head->next;
	while(tmp_pre->next != NULL){
		if( comp(tmp_pre->next->info, d)){
			destory(delete_node(tmp_pre, tmp_pre->next));
			self->size--;
		}
		else {
			//forward_pointer(&tmp);
			forward_pointer(&tmp_pre);
		}
	}

	return SUCEE;
}

/*
 * 返回头尾指针
 *
 */
iterator _get_iter(olist* self){
	iterator it = {
		.head = self->head,
		.tail = self->tail
	};
	return it;
}

/*
 * 初始化olist 生成带头接点的链表
 * 初始化olist 对象 把相关成员函数准备好
 */
int Get_olist(olist** self){
	(*self) = (olist*)calloc(1, sizeof(olist));
	if(*self == NULL){
		return FAIL;
	}
	ptrToNode tmp = (ptrToNode) calloc(1, sizeof(dNote));
	if(tmp == NULL){
		perror("calloc a memory fail");
		return FAIL;
	}

	tmp->info = NULL;
	tmp->next =NULL;

	(*self)->size = 0;

	(*self)->head = tmp;
	(*self)->tail = tmp;
	
	(*self)->add_front = _add_front;
	(*self)->add_back = _add_back;
	(*self)->deletee = _delete;
	(*self)->get_iter = _get_iter;
	return SUCEE;	
}

/*
 * 销毁olist对象，并销毁data和 包含data的node
 *
 */
int Destory_olist(olist** self, detor destory){
	ptrToNode tmp  = (*self)->head;
	//从内到外逐个free
	ptrToNode tmp_free = tmp->next;
	while(tmp->next != NULL){
		tmp_free = tmp->next;
		if(destory(tmp_free->info) == SUCEE){
			tmp->next = tmp->next->next;
			free(tmp_free);
			(*self)->size--;
		} else {
			perror(" destory ob data fail");
			return FAIL;
		}
	}

	free(tmp);
	free(*self);
	return SUCEE;
}





