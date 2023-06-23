#include "HashMap.h"

/**
 * <h2>HashMap</h2>
 * Creates new Hashmap with given Types
 *
 */
template<typename Key, typename Value>
HashMap<Key, Value>::HashMap() {
    
}

/**
 * <h2>HashMap | Put</h2>
 * Inserts given Key and Value into the Hashmap
 *
 * @param key Key to insert
 * @param value Value to insert
 */
template<typename Key, typename Value>
void HashMap<Key, Value>::put(Key key, Value value) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == nullptr) {
            keylist[i] = key;
            valuelist[i] = value;
        }
    }
}

/**
 * <h2>HashMap | getValue</h2>
 * Returns Value of given Key
 *
 * @param key Key to search for
 * 
 * @return Value connected to given Key. Returns nullptr if not found.
 */
template<typename Key, typename Value>
Value HashMap<Key, Value>::getValue(Key key) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == key) {
            return valuelist[i];
        }
    }
    return nullptr;
}

/**
 * <h2>HashMap | getKey</h2>
 * Returns Value of given Key
 *
 * @param value Value to search for
 * 
 * @return Key connected to given Value. Returns nullptr if not found.
 */
template<typename Key, typename Value>
Key HashMap<Key, Value>::getKey(Value value) {
    for (int i = 0; i < 200; i++) {
        if (valuelist[i] == value) {
            return keylist[i];
        }
    }
    return nullptr;
}

/**
 * <h2>HashMap | remove</h2>
 * Removes Key and Value for given Key from the HashMap
 *
 * @param key Key to remove
 * 
 */
template<typename Key, typename Value>
void HashMap<Key, Value>::remove(Key key) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == key) {
            keylist[i] = nullptr;
            valuelist[i] = nullptr;
        }
    }
}

/**
 * <h2>HashMap | Size</h2>
 * Returns size of HashMap
 * 
 * @return size of HashMap
 */
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

/**
 * <h2>HashMap | Replace</h2>
 * Replaces Value for given Key
 *
 * @param key Key to replace Value
 * @param newValue New Value to override old one
 * 
 */
template<typename Key, typename Value>
void HashMap<Key, Value>::replace(Key key, Value newValue) {
    for (int i = 0; i < 200; i++) {
        if (keylist[i] == key) {
            keylist[i] = nullptr;
            valuelist[i] = nullptr;
        }
    }
}

/**
 * <h2>HashMap | ValueMapToArray</h2>
 * Returns all Values in a normal Array
 * 
 * @return Array of all Values
 */
template<typename Key, typename Value>
Value HashMap<Key, Value>::valueMapToArray() {
    return valuelist;
}

/**
 * <h2>HashMap | KeyMapToArray</h2>
 * Returns all Key in a normal Array
 * 
 * @return Array of all Keys
 */
template<typename Key, typename Value>
Key HashMap<Key, Value>::keyMapToArray() {
    return keylist;
}
