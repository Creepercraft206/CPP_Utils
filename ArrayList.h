#ifndef _ArrayList_h_
#define _ArrayList_h_

template<typename T>
class ArrayList {
private:
    T t;
    T list[199];
public:
    ArrayList();

    void add(T value);
    void remove(T value);
    int size();
    void clear();
    bool contains(T value);
    bool isEmpty();
    void replace(T oldValue, T newValue);
    T* toArray();
};


/**
 * Usage
 * 
 * If you want to use your own Datatypes for an ArrayList or HashMap,
 * you have to add them to the other template classes below.
 * 
 * You can use the following template. Replace "newDataType" with the Datatype you want to add.
 * 
 * template class ArrayList< newDataType >;
 * 
*/

template class ArrayList<int>;
template class ArrayList<double>;
template class ArrayList<bool>;
template class ArrayList<char>;
template class ArrayList<char32_t>;
template class ArrayList<wchar_t>;

#endif
