#ifndef _CAR_H_
#define _CAR_H_
class Car{
private:
    int m_price;
    int m_carNo;
public:
    void run();
    void stop();
    void setProp(int price, int carNo);
    void print();
};
#endif // _CAR_H_
