
template<typename T>
class ArrayList {
private:
    T t;
    T list[200];
public:
    ArrayList();

    void add(T value);
    void remove(T value);
    int size();
    void clear();
    bool contains(T value);
    bool isEmpty();
    void replace(T oldValue, T newValue);
    T toArray();
};
