#include "ArrayList.h"

/**
 * <h2>ArrayList</h2>
 * Creates new ArrayList with given Type
 *
 */
template<typename T>
ArrayList<T>::ArrayList() {

}

/**
 * <h2>ArrayList | Add </h2>
 * Adds inserted value to ArrayList
 *
 * @param value to insert
 */
template<typename T>
void ArrayList<T>::add(T value) {
    for (int i = 0; i < 200; i++) {
        if (list[i] == nullptr) {
            list[i] = value;
            return;
        }
    }   
}

/**
 * <h2>ArrayList | Remove </h2>
 * Removes given value from ArrayList if existed
 *
 * @param value to remove
 */
template<typename T>
void ArrayList<T>::remove(T value) {
    for (int i = 0; i < 200; i++) {
        if (list[i] == value) {
            list[i] = nullptr;
        }
    }
}

/**
 * <h2>ArrayList | Size </h2>
 *
 * @return size of ArrayList
 */
template<typename T>
int ArrayList<T>::size() {
    int count;
    for (int i = 0; i < 200; i++) {
        if (list[i] != nullptr) {
            count++;
        }
    }
    return count;
}

/**
 * <h2>ArrayList | Clear </h2>
 * Clears all content of ArrayList
 *
 */
template<typename T>
void ArrayList<T>::clear() {
    for (int i = 0; i < 200; i++) {
        list[i] = nullptr;
    }
}

/**
 * <h2>ArrayList | Contains </h2>
 * Checks if given value is contained in ArrayList
 *
 * @param value to check if contained in the ArrayList
 * @return true if contained in list
 */
template<typename T>
bool ArrayList<T>::contains(T value) {
    for (int i = 0; i < 200; i++) {
        if (list[i] == value) {
            return true;
        }
    }
    return false;
}

/**
 * <h2>ArrayList | isEmpty </h2>
 * Checks if ArrayList doesnt contain any Element
 *
 * @return true if ArrayList is empty
 */
template<typename T>
bool ArrayList<T>::isEmpty() {
    for (int i = 0; i < 200; i++) {
        if (list[i] != nullptr) {
            return false;
        }
    }
    return true;
}

/**
 * <h2>ArrayList | Replace </h2>
 * Replaces value with a new one
 *
 * @param oldValue old Value to search for
 * @param newValue new Value to override old one
 */
template<typename T>
void ArrayList<T>::replace(T oldValue, T newValue) {
    for (int i = 0; i < 200; i++) {
        if (list[i] == oldValue) {
            list[i] = newValue;
            return;
        }
    }
}

/**
 * <h2>ArrayList | toArray </h2>
 * Returns ArrayList as normal Array
 *
 * @return ArrayList as normal Array
 */
template<typename T>
T ArrayList<T>::toArray() {
    return list;
}
