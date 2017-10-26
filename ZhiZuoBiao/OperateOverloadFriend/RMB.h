#ifndef _RMB_H_
#define _RMB_H_
typedef unsigned int uint;
class RMB {
    friend RMB operator + (const RMB &, const RMB &);
    friend bool operator > (const RMB &, const RMB &);
public:
    RMB(uint y, uint jf);
    ~RMB();
    void display();
private:
    int yuan;
    int jf;
};
#endif
