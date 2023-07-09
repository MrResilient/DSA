class BrowserHistory {
public:
    struct ll{
        string web_url;
        ll* next;
        ll* prev;
        ll(): web_url(""), prev(nullptr), next(nullptr){

        }
        ll(string x): web_url(x), prev(nullptr), next(nullptr){

        }
        ll(string x, ll* prev, ll* next): web_url(x), prev(prev), next(next){

        }
    };
    ll* start = new ll();
    ll* curr;

    BrowserHistory(string homepage) {
        start->web_url = homepage;
        curr = start;
    }
    
    void visit(string url) {
        curr->next = new ll();
        curr->next->prev = curr;
        curr->next->web_url = url;
        curr = curr->next;   
    }
    
    string back(int steps) {
        while(curr != start && steps--){
            curr = curr->prev;
        }
        return curr->web_url;
    }
    
    string forward(int steps) {
        while(curr->next && steps--){
            curr = curr->next;
        }
        return curr->web_url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */