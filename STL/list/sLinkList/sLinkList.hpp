//
// Created by NUMB on 2021/1/2.
//

#ifndef SLINKLIST_SLINKLIST_H
#define SLINKLIST_SLINKLIST_H
#include<iostream>
template <class elemType>
class sLinkList
{
private:
    struct node{
        elemType data;
        node* next;

        node(const elemType &x,node* n = nullptr):data(x),next(n){}
        node():next(nullptr){}
        ~node() {}
    };
    node* head;
    int currentLength;

    node* move(int i) const;

public:
    sLinkList();
    ~sLinkList() {clear();delete head;}

    void clear();
    int length() const {return currentLength;}
    void insert(int i,const elemType& x);
    void remove(int i);
    int search(const elemType& x) const;
    elemType visit(int i) const;
    void traverse() const;

    sLinkList& operator=(std::initializer_list<elemType> ilist)
    {
        typename std::initializer_list<elemType>::iterator it;
        int i = 0;
        for (it = ilist.begin();it != ilist.end();it++)
        {
            this->insert(i, *it);
            i++;
        }
    }
};

template<class elemType>
typename sLinkList<elemType>::node *sLinkList<elemType>::move(int i) const {
    node *p = head;
    while (i-- >= 0) p = p->next;
    return p;
}

template<class elemType>
sLinkList<elemType>::sLinkList() {
    head = new node;
    currentLength = 0;
}

template <class elemType>
void sLinkList<elemType>::clear() {
    node *p = head->next;
    node *q;
    head->next = nullptr;
    while(p!= nullptr)
    {
        q = p->next;
        delete p;
        p = q;
    }
    currentLength = 0;
}

template<class elemType>
void sLinkList<elemType>::insert(int i, const elemType &x) {
    node* pos = move(i-1);
    pos->next = new node(x,pos->next);
    ++currentLength;
}

template<class elemType>
void sLinkList<elemType>::remove(int i) {
    node* pos = move(i-1);
    node* delp = move(i);
    pos->next = delp->next;
    delete delp;
    --currentLength;
}
template <class elemType>
int sLinkList<elemType>::search(const elemType &x) const {
    node* p = head->next;
    int i = 0;

    while(p!= nullptr && p->data != x) {
        p = p->next;
        ++i;
}
    return p== nullptr?-1:i;
}

template<class elemType>
elemType sLinkList<elemType>::visit(int i) const
{
    return move(i)->data;
}

template <class elemType>
void sLinkList<elemType>::traverse() const {
    node* p = head->next;
    while(p!= nullptr)
    {
        std::cout<<p->data<<" "<<std::endl;
        p = p->next;
    }

}


#endif //SLINKLIST_SLINKLIST_H
