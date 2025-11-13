#ifndef LIST_H
#define LIST_H

template <typename T> 
class List {
    public:
	    virtual void insert(int pos, T e);
	    virtual void append(T e);
     virtual void prepend(T e);
	    T remove(int pos);
	    T get(int pos);
	    int search(T e);
	    bool empty();
	    int size();
};











#endif
