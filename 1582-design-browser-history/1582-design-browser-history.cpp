class BrowserHistory {
public:
    unordered_map<int, string> history;
    int forw = 0, curr = 0;

    BrowserHistory(string homepage) {
        history[curr] = homepage;
    }
    
    void visit(string url) {
        curr++;
        history[curr] = url;
        forw = curr;    
    }
    
    string back(int steps) {
        curr = max(0, curr - steps);
        return history[curr];
    }
    
    string forward(int steps) {
        curr = min(forw, curr + steps);
        return history[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */