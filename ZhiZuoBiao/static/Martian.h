#ifndef _MARTIAN_H_
#define _MARTIAN_H_
class Martian{
private:
    static int martianCount;
    int boolValue;
public:
    Martian();
    ~Martian();
    void fight();
    void hide();
    static int getCount();
};
#endif
