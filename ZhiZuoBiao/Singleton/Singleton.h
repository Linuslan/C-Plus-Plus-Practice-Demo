#ifndef _SINGLETON_H_
#define _SINGLETON_H_
class Singleton {
private:
    Singleton();
    ~Singleton();
    Singleton(const Singleton &);
    Singleton & operator=(const Singleton &);
    static Singleton * instance;
public:
    static Singleton * getInstance();
    void doSomething();
};
#endif // _SINGLETON_H_
