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

template<typename T>
void ArrayList<T>::clear() {
    for (int i = 0; i < 200; i++) {
        list[i] = nullptr;
    }
}

template<typename T>
bool ArrayList<T>::contains(T value) {
    for (int i = 0; i < 200; i++) {
        if (list[i] == value) {
            return true;
        }
    }
    return false;
}

template<typename T>
bool ArrayList<T>::isEmpty() {
    for (int i = 0; i < 200; i++) {
        if (list[i] != nullptr) {
            return false;
        }
    }
    return true;
}

template<typename T>
void ArrayList<T>::replace(T oldValue, T newValue) {
    for (int i = 0; i < 200; i++) {
        if (list[i] == oldValue) {
            list[i] = newValue;
            return;
        }
    }
}
