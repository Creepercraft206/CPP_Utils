#ifndef _HashMap_h_
#define _HashMap_h_

template<typename Key, typename Value>
class HashMap {
private:
    Key k;
    Value v;
    Key keylist[199];
    Value valuelist[199];
public:
    HashMap();

    void put(Key key, Value value);
    Value getValue(Key key);
    Key getKey(Value value);
    void remove(Key key);
    int size();
    void replace(Key key, Value newValue);
    Key* keyMapToArray();
    Value* valueMapToArray();
};


/**
 * Usage
 * 
 * If you want to use your own Datatypes for an ArrayList or HashMap,
 * you have to add them to the other template classes below.
 * 
 * You can use the following template. Replace "newDataType" with the Datatype you want to add.
 * 
 * template class HashMap< newDataType ,int>;
 * template class HashMap< newDataType ,double>;
 * template class HashMap< newDataType ,bool>;
 * template class HashMap< newDataType ,char>;
 * template class HashMap< newDataType ,char32_t>;
 * template class HashMap< newDataType ,wchar_t>;
 * 
 * Also add to the existing blocks your Datatype in the Value-slot (second parameter).
 * 
*/

template class HashMap<int,int>;
template class HashMap<int,double>;
template class HashMap<int,bool>;
template class HashMap<int,char>;
template class HashMap<int,char32_t>;
template class HashMap<int,wchar_t>;

template class HashMap<double,int>;
template class HashMap<double,double>;
template class HashMap<double,bool>;
template class HashMap<double,char>;
template class HashMap<double,char32_t>;
template class HashMap<double,wchar_t>;

template class HashMap<bool,int>;
template class HashMap<bool,double>;
template class HashMap<bool,bool>;
template class HashMap<bool,char>;
template class HashMap<bool,char32_t>;
template class HashMap<bool,wchar_t>;

template class HashMap<char,int>;
template class HashMap<char,double>;
template class HashMap<char,bool>;
template class HashMap<char,char>;
template class HashMap<char,char32_t>;
template class HashMap<char,wchar_t>;

template class HashMap<char32_t,int>;
template class HashMap<char32_t,double>;
template class HashMap<char32_t,bool>;
template class HashMap<char32_t,char>;
template class HashMap<char32_t,char32_t>;
template class HashMap<char32_t,wchar_t>;

template class HashMap<wchar_t,int>;
template class HashMap<wchar_t,double>;
template class HashMap<wchar_t,bool>;
template class HashMap<wchar_t,char>;
template class HashMap<wchar_t,char32_t>;
template class HashMap<wchar_t,wchar_t>;

#endif
