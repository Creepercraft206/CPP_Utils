#include "HashMap.h"

template<typename Key, typename Value>
HashMap<Key, Value>::HashMap() {
    
}

template<typename Key, typename Value>
void HashMap<Key, Value>::put(Key key, Value value) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == nullptr) {
            keylist[i] = key;
            valuelist[i] = value;
        }
    }
}

template<typename Key, typename Value>
Value HashMap<Key, Value>::getValue(Key key) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == key) {
            return valuelist[i];
        }
    }
    return nullptr;
}

template<typename Key, typename Value>
Key HashMap<Key, Value>::getKey(Value value) {
    for (int i = 0; i < 200; i++) {
        if (valuelist[i] == value) {
            return keylist[i];
        }
    }
    return nullptr;
}

template<typename Key, typename Value>
void HashMap<Key, Value>::remove(Key key) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == key) {
            keylist[i] = nullptr;
            valuelist[i] = nullptr;
        }
    }
}

template<typename Key, typename Value>
int HashMap<Key, Value>::size() {
    int count = 0;
    for (int i = 0; i < 200; i++) {
        if (keylist[i] != nullptr) {
            count++;
        }
    }
    return count;
}

template<typename Key, typename Value>
void HashMap<Key, Value>::replace(Key key, Value newValue) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == key) {
            keylist[i] = nullptr;
            valuelist[i] = nullptr;
        }
    }
}

template<typename Key, typename Value>
Value HashMap<Key, Value>::valueMapToArray() {
    return valuelist;
}

template<typename Key, typename Value>
Key HashMap<Key, Value>::keyMapToArray() {
    return keylist;
}
