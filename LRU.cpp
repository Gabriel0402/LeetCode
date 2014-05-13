struct node{
    int key;
    int val;
    node *pre;
    node *next;
    node(int k, int v):key(k),val(v),pre(NULL),next(NULL){};
};

class LRUCache{
    unordered_map<int,node*> mp;
    int c;
    int size;
    node *head;
    node *tail;
public:
    LRUCache(int capacity) {
        if(c<0) return;
        head=new node(-1,-1);
        tail=new node(-1,-1);
        head->next=tail;
        tail->pre=head;
        mp.clear();
        c=capacity;
        size=0;
    }
    
    int get(int key) {
        unordered_map<int,node*>::iterator iter;
        iter=mp.find(key);
        if(iter!=mp.end()){
            node *p=iter->second;
            p->pre->next=p->next;
            p->next->pre=p->pre;
            push_top(p);
            return p->val;
        }
        else{
            return -1;
        }
        
        
    }
    
    void set(int key, int value) {
        unordered_map<int,node*>::iterator iter;
        iter=mp.find(key);
        if(iter!=mp.end()){
            node *p=iter->second;
            p->pre->next=p->next;
            p->next->pre=p->pre;
            push_top(p);
            p->val=value;
        }
        else{
            node *p=new node(key,value);
            push_top(p);
            mp[key]=p;
            size++;
            if(size>c){
                p=tail->pre;
                tail->pre=p->pre;
                p->pre->next=tail;
                iter=mp.find(p->key);
                mp.erase(iter);
                delete p;
            }
        }
        
    }
    void push_top(node *p){
        p->next=head->next;
        p->pre=head;
        head->next->pre=p;
        head->next=p;
    }
};