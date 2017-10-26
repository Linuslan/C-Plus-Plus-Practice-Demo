#ifndef _RMB_H_
#define _RMB_H_
typedef unsigned int uint;
class RMB {
public:
    RMB(uint yuan, uint jf);
    ~RMB();
    RMB operator + (const RMB &);
    bool operator > (const RMB&);
    void display();
private:
    int yuan;
    int jf;
};
#endif // _RMB_H_
