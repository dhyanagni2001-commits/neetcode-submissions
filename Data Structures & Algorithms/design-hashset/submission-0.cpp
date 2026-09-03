class MyHashSet {
    private:
    vector<int> mpp;
public:
    MyHashSet() {
        mpp.resize(10000001,0);
    }
    
    void add(int key) {
       mpp[key]=1; 
    }
    
    void remove(int key) {
        mpp[key]=0;
    }
    
    bool contains(int key) {
        return mpp[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */