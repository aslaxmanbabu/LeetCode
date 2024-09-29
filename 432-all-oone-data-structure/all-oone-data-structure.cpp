class AllOne {
public:
    unordered_map<string, int> r;
    set<pair<int, string>> rr;
    AllOne() {
        r.clear();
    }
    
    void inc(string key) {
        int n = r[key];
        r[key]++;
        rr.erase({n, key});
        rr.insert({n+1, key});
    }
    
    void dec(string key) {
        int n = r[key];
        r[key]--;
        rr.erase({n, key});
        if (r[key] > 0) rr.insert({n-1, key});
        else r.erase(key);
    }
    
    string getMaxKey() {
        if(!rr.empty()) return rr.rbegin()->second;
        return "";
    }
    
    string getMinKey() {
        if(!rr.empty()) return rr.begin()->second;
        return "";
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */