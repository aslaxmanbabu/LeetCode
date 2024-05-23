class RandomizedSet {
public:

    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!s.count(val)) {
            s.insert(val);
        }
        else {
            return false;
        }
        return true;
    }
    
    bool remove(int val) {
        if(s.count(val)) {
            s.erase(val);
        }
        else {
            return false;
        }
        return true;
    }
    
    int getRandom() {
        int r = rand() % s.size();
        auto it = next(s.begin(), r);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */