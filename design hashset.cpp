class MyHashSet {
public:
    vector<bool> V;
    /** Initialize your data structure here. */
    MyHashSet() {       
        V.resize(1000*1000+5);
    }
    
    void add(int key) {
       V[key]=true;
    }
    
    void remove(int key) {
        V[key]=false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return V[key];        
    }
};