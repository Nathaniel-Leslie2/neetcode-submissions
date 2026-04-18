class LRUCache {
private:
    unordered_map<int, pair<int, list<int>::iterator>> cache; 
    list<int> order; // list is a double linked list built in
    int capacity;

public:
    LRUCache(int capacity) {
        this->capacity = capacity; // this points to global member and assigns it a value.
    }

    int get(int key) {
        if (cache.find(key) == cache.end()) return -1; // if the key does not exists, return -1
        order.erase(cache[key].second); // Remove node from position because its been accessed/used
        order.push_back(key); //push key to front of list
        cache[key].second = --order.end(); // move the order down
        return cache[key].first; // return the key value
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {order.erase(cache[key].second);} // if key already exists, erase old value to make room for a new value
        else if (cache.size() == capacity) { // if capacity at limit, find the least recently used cache
            int lru = order.front(); //LRU at front of doubly linked list
            order.pop_front(); // remove from list
            cache.erase(lru); // remove from cache
        }
        order.push_back(key); // add new key to end of list (most recently used)
        cache[key] = {value, --order.end()}; // assign new key value and list order
    }
};